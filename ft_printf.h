/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esekouni <esekouni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 15:38:06 by esekouni          #+#    #+#             */
/*   Updated: 2022/10/24 12:07:11 by esekouni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdio.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_putchr(char c);
int	ft_putnbr(long int n);
int	ft_putstr(char *ch);
int	ft_printf(const char *str, ...);
int	ft_hexadecimal(unsigned int n, char *b);
int	ft_adresse(long unsigned int n, char *b);
int	ft_unssigned(unsigned int n);

#endif
