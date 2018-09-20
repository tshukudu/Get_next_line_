/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtshukud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 16:28:00 by mtshukud          #+#    #+#             */
/*   Updated: 2018/06/12 18:17:04 by mtshukud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	integer;

	integer = (long int)n;
	if (integer < 0)
	{
		ft_putchar_fd('-', fd);
		integer *= -1;
	}
	if (integer >= 10)
		ft_putnbr_fd(integer / 10, fd);
	ft_putchar_fd(integer % 10 + 48, fd);
}
