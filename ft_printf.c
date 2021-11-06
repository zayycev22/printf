/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larobbie <larobbie@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 03:50:57 by larobbie          #+#    #+#             */
/*   Updated: 2021/10/31 04:03:27 by larobbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft/libft.h"
#include "includes/printf.h"

void	printnb(char desc, va_list ap)
{
	if (desc == 'd' || desc == 'i')
		ft_putnbr_fd(va_arg(ap, int), 1);
	else if (desc == 'u')
		ft_putnbr_fd(va_arg(ap, unsigned int), 1);
}

void	puthex(char desc, int num)
{
	char	*all;

	if (desc == 'x')
		all = ft_strdup("0123456789abcdef");
	else
		all = ft_strdup("0123456789ABCDEF");
	ft_putnbr_fd_base(num, 1, all, 16);
	free(all);
}

void	ft_printf(const char *arg, ...)
{
	va_list	ap;
	size_t	i;
	int		flag;

	va_start(ap, arg);
	i = 0;
	flag = 0;
	while (arg[i])
	{
		if (arg[i] == '%' && i != ft_strlen(arg) - 1)
		{
			if (arg[i + 1] == 'd' || arg[i + 1] == 'i' || arg[i + 1] == 'u')
				printnb(arg[i + 1], ap);
			else if (arg[i + 1] == 'c')
				ft_putchar_fd(va_arg(ap, int), 1);
			else if (arg[i + 1] == 's')
				ft_putstr_fd(va_arg(ap, char *), 1);
			else if (arg[i + 1] == 'x' || arg[i + 1] == 'X')
				puthex(arg[i + 1], va_arg(ap, int));
			else if (arg[i + 1] == '%')
				ft_putchar_fd('%', 1);
			i++;
		}
		else
			ft_putchar_fd(arg[i], 1);
		i++;
	}
}
