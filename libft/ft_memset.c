/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtshukud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 15:01:07 by mtshukud          #+#    #+#             */
/*   Updated: 2018/06/09 11:55:33 by mtshukud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned int		counter;

	counter = 0;
	while (counter < n)
	{
		((unsigned char *)str)[counter] = (unsigned char)c;
		counter++;
	}
	return (str);
}
