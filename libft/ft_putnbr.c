/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtshukud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 15:29:10 by mtshukud          #+#    #+#             */
/*   Updated: 2018/06/11 16:58:01 by mtshukud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long int integer;

	integer = (long int)n;
	if (integer < 0)
	{
		ft_putchar('-');
		integer *= -1;
	}
	if (integer >= 10)
		ft_putnbr(integer / 10);
	ft_putchar(integer % 10 + 48);
}
