/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtshukud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 17:31:42 by mtshukud          #+#    #+#             */
/*   Updated: 2018/06/12 16:38:20 by mtshukud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t		i;
	size_t		j;
	char		*ddest;
	char		*ssrc;

	ddest = dest;
	ssrc = (char *)src;
	i = ft_strlen(ddest);
	j = ft_strlen(ssrc);
	if (i > n)
		return (j + n);
	if (i < n)
	{
		ft_strncat(dest, ssrc, n - 1);
		dest[n - 1] = '\0';
	}
	return (i + j);
}
