/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larobbie <larobbie@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/31 03:50:48 by larobbie          #+#    #+#             */
/*   Updated: 2021/10/31 04:06:04 by larobbie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include <stdarg.h>

void	ft_printf(const char *arg, ...);
void	puthex(char desc, int num);
void	ft_putnbr_fd_base(int n, int fd, char *base, int bas);
void	printnb(char desc, va_list ap);
int		put(const char *desc, va_list ap, int i);
#endif