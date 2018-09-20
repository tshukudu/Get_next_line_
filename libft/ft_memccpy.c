/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtshukud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 17:17:16 by mtshukud          #+#    #+#             */
/*   Updated: 2018/06/09 12:44:55 by mtshukud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*srce;
	unsigned char	stopchar;

	stopchar = (unsigned char)c;
	dst = (unsigned char *)dest;
	srce = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dst[i] = srce[i];
		if (srce[i] == stopchar)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
