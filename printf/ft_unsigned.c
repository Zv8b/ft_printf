/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamahdi <hamahdi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:16:35 by hamahdi           #+#    #+#             */
/*   Updated: 2024/02/20 22:44:56 by hamahdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putunbr(size_t number)
{
	int	printed_count;

	printed_count = 1;
	if (number > 9)
		printed_count += putunbr(number / 10);
	ft_putchar(number % 10 + '0');
	return (printed_count);
}

int	output_unsigned_int(va_list arguments)
{
	unsigned int	number;
	int				printed_count;

	number = va_arg(arguments, unsigned int);
	printed_count = putunbr(number);
	return (printed_count);
}
