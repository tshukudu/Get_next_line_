/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtshukud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 17:19:51 by mtshukud          #+#    #+#             */
/*   Updated: 2018/06/12 15:51:25 by mtshukud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char*)str1;
	s2 = (unsigned char*)str2;
	while (i < n)
	{
		if ((*s1 - *s2) < 0)
			return (*s1 - *s2);
		if ((*s1 - *s2) > 0)
			return (*s1 - *s2);
		s1++;
		s2++;
		i++;
	}
	return (0);
}
