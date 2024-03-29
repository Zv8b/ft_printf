/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamahdi <hamahdi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:16:25 by hamahdi           #+#    #+#             */
/*   Updated: 2024/02/21 14:45:03 by hamahdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	parse(char c, va_list arguments)
{
	int	printed_count;

	printed_count = 0;
	if (c == 'c')
		printed_count = output_char(arguments);
	else if (c == 's')
		printed_count += output_str(arguments);
	else if (c == 'i' || c == 'd')
		printed_count += output_int(arguments);
	else if (c == 'x' || c == 'X')
		printed_count += output_hexa(va_arg(arguments, unsigned int), c);
	else if (c == 'p')
		printed_count += output_pointer(arguments);
	else if (c == 'u')
		printed_count += output_unsigned_int(arguments);
	else if (c == '%')
	{
		ft_putchar('%');
		printed_count++;
	}
	return (printed_count);
}

int	ft_printf(const char *s, ...)
{
	va_list	arguments;
	int		printed_count;
	int		index;

	index = 0;
	printed_count = 0;
	va_start(arguments, s);
	while (s[index] != '\0')
	{
		if (s[index] == '%')
		{
			index++;
			printed_count += parse(s[index], arguments);
		}
		else
		{
			printed_count++;
			ft_putchar(s[index]);
		}
		index++;
	}
	va_end(arguments);
	return (printed_count);
}
