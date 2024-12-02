/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_adresse.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:31:43 by esekouni          #+#    #+#             */
/*   Updated: 2022/10/24 12:06:59 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_adresse(long unsigned int n, char *b)
{
	int	c;

	c = 0;
	if (n >= 16)
	{
		c += ft_adresse(n / 16, b);
		c += ft_adresse(n % 16, b);
	}
	else
	{
		c += ft_putchr(b[n]);
	}
	return (c);
}
