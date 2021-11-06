/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexbase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larobbie <larobbie@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 03:51:15 by larobbie          #+#    #+#             */
/*   Updated: 2021/10/31 04:06:27 by larobbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "includes/printf.h"
void	ft_putnbr_fd_base(int n, int fd, char *base, int bas)
{
	if (n == -2147483648)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('2', fd);
		ft_putnbr_fd_base(147483648, fd, base, bas);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd_base(n * (-1), fd, base, bas);
	}
	else
	{
		if (n >= 10)
			ft_putnbr_fd_base(n / bas, fd, base, bas);
		ft_putchar_fd(base[n % bas], fd);
	}
}
