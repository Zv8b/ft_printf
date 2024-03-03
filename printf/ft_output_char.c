/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamahdi <hamahdi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 14:04:06 by hamahdi           #+#    #+#             */
/*   Updated: 2024/02/21 16:40:04 by hamahdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	output_char(va_list arguments)
{
	char	character;

	character = va_arg(arguments, int);
	ft_putchar(character);
	return (1);
}
