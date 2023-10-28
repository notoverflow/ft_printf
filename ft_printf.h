/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oliradet <oliradet@student.42perpignan.f>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:47:07 by oliradet          #+#    #+#             */
/*   Updated: 2023/10/28 17:47:07 by oliradet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int	ft_putptr(unsigned long long n);
int	ft_putlohexa_spe(unsigned long long n);
int	ft_putunbr(unsigned int n);
int	ft_putlohexa(unsigned int n);
int	ft_putuphexa(unsigned int n);
int	ft_printf_arg(va_list arg, char c);
int	ft_printf(const char *str, ...);

#endif //FT_PRINTF_H
