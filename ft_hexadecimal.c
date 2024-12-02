/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:31:49 by esekouni          #+#    #+#             */
/*   Updated: 2022/10/23 15:32:25 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_hexadecimal(unsigned int n, char *b)
{
	int	c;

	c = 0;
	if (n >= 16)
	{
		c += ft_hexadecimal(n / 16, b);
		c += ft_hexadecimal(n % 16, b);
	}
	else
	{
		c += ft_putchr(b[n]);
	}
	return (c);
}
