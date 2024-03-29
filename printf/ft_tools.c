/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamahdi <hamahdi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 20:47:29 by hamahdi           #+#    #+#             */
/*   Updated: 2024/02/21 14:43:33 by hamahdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putnbr(int number)
{
	int	index;

	index = 1;
	if (number == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (number < 0)
	{
		write(1, "-", 1);
		index++;
		number = -number;
	}
	if (number > 9)
		index += ft_putnbr(number / 10);
	ft_putchar(number % 10 + '0');
	return (index);
}

void	ft_putstr(char *string)
{
	int	index;

	index = 0;
	while (string[index])
	{
		write(1, &string[index], 1);
		index++;
	}
}
