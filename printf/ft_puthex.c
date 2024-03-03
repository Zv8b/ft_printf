/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamahdi <hamahdi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:16:15 by hamahdi           #+#    #+#             */
/*   Updated: 2024/02/20 22:45:32 by hamahdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	output_hexa(unsigned long num, char base)
{
	int		count;
	char	*hex;

	count = 0;
	if (base == 'X')
		hex = "0123456789ABCDEF";
	if (base == 'x')
		hex = "0123456789abcdef";
	if (num > 15)
		count += output_hexa(num / 16, base);
	count += ft_putchar(hex[num % 16]);
	return (count);
}
