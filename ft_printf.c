/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:38:54 by esekouni          #+#    #+#             */
/*   Updated: 2022/10/24 12:35:38 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	typeprintf(va_list args, char c)
{
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'c')
		return (ft_putchr(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'x')
		return (ft_hexadecimal(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (c == 'X')
		return (ft_hexadecimal(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (c == 'p')
	{
		ft_putstr("0x");
		return (ft_adresse(va_arg(args, long unsigned int)
				, "0123456789abcdef") + 2);
	}
	else if (c == 'u')
		return (ft_unssigned(va_arg(args, unsigned int)));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		c;

	i = 0;
	c = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == '%')
				c += ft_putchr('%');
			c += typeprintf(arg, str[i]);
		}
		else
			c += ft_putchr(str[i]);
		i++;
	}
	va_end(arg);
	return (c);
}
