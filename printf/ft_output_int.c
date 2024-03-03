/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_output_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hamahdi <hamahdi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 14:30:24 by hamahdi           #+#    #+#             */
/*   Updated: 2024/02/21 14:43:15 by hamahdi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	output_int(va_list arguments)
{
	int	print_num;
	int	num;

	num = va_arg(arguments, int);
	print_num = ft_putnbr(num);
	return (print_num);
}
