/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamahdi <hamahdi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:04:16 by hamahdi           #+#    #+#             */
/*   Updated: 2024/02/20 22:45:47 by hamahdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	output_str(va_list arguments)
{
	int		printed_count;
	char	*string;

	string = va_arg(arguments, char *);
	printed_count = 0;
	if (string == NULL)
	{
		ft_putstr("(null)");
		return (6);
	}
	while (string[printed_count])
	{
		ft_putchar(string[printed_count]);
		printed_count++;
	}
	return (printed_count);
}
