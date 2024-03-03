/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamahdi <hamahdi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:02:58 by hamahdi           #+#    #+#             */
/*   Updated: 2024/02/21 14:44:37 by hamahdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>

int		ft_printf(const char *s, ...);
int		ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_putnbr(int number);
int		ft_puthex(int number, char base);
int		output_char(va_list arguments);
int		output_str(va_list arguments);
int		output_int(va_list arguments);
int		output_hexa(unsigned long number, char base);
int		output_pointer(va_list arguments);
int		output_unsigned_int(va_list arguments);

#endif