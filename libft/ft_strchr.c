/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtshukud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 17:32:23 by mtshukud          #+#    #+#             */
/*   Updated: 2018/06/13 12:06:13 by mtshukud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int i;
	int len;

	i = 0;
	len = ft_strlen(str);
	while (i <= len)
	{
		if (str[i] == (unsigned char)c)
			return ((char*)str + i);
		i++;
	}
	return (NULL);
}
