/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 12:50:27 by esekouni          #+#    #+#             */
/*   Updated: 2022/10/24 12:34:59 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_putnbr(long int n)
{
	char	c;
	int		i;

	i = 0;
	if (n < 0)
	{
		i += ft_putchr ('-');
		n *= -1;
	}
	if (n >= 10)
	{
		i += ft_putnbr(n / 10);
		i += ft_putnbr(n % 10);
	}
	c = n + '0';
	if (n >= 0 && n <= 9)
	{
		i += ft_putchr(c);
	}
	return (i);
}
