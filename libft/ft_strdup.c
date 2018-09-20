/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtshukud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 17:27:58 by mtshukud          #+#    #+#             */
/*   Updated: 2018/06/02 14:47:30 by mtshukud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	size_t		len;
	static char	*dup;
	char		*cmpstr;

	len = ft_strlen(str);
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return ((char*)NULL);
	cmpstr = dup;
	while (*str)
	{
		*cmpstr = *str;
		cmpstr++;
		str++;
	}
	*cmpstr = '\0';
	return ((char*)dup);
}
