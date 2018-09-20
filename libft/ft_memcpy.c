/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtshukud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 17:16:31 by mtshukud          #+#    #+#             */
/*   Updated: 2018/06/12 15:07:18 by mtshukud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*dest;
	char	*src;

	i = 0;
	dest = (char *)s1;
	src = (char *)s2;
	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	return ((void *)s1);
}
