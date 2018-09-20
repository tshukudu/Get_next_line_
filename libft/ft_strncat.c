/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtshukud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 17:30:37 by mtshukud          #+#    #+#             */
/*   Updated: 2018/06/12 15:56:52 by mtshukud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	inc;
	size_t	endc;

	inc = 0;
	endc = ft_strlen(dest);
	while (src[inc] != '\0' && inc < n)
	{
		dest[endc] = src[inc];
		inc++;
		endc++;
	}
	dest[endc] = '\0';
	return (dest);
}
