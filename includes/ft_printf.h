/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larobbie <larobbie@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 03:50:48 by larobbie          #+#    #+#             */
/*   Updated: 2021/11/09 00:22:14 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>

typedef	struct		s_flags
{
	int				already_print;
	int				type;
	int				width;
	int				minus;
	int				zero;
	int				dot;
	int				star;
}					t_flags;
int		ft_printf(const char *arg, ...);
int		puthex(char desc, unsigned int num);
int		printnb(char desc, va_list ap);
int		ft_string(char *c);
int		ft_char(char c);
int		ft_pointer(unsigned long num);
#endif