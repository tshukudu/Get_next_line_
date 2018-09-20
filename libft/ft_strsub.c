/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtshukud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 13:02:55 by mtshukud          #+#    #+#             */
/*   Updated: 2018/06/13 15:50:54 by mtshukud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	i;
	size_t	strlen;

	i = 0;
	if (s)
	{
		newstr = (char*)malloc(len + 1);
		if (newstr == NULL)
			return (NULL);
		strlen = len + start;
		while (start < strlen)
		{
			newstr[i] = s[start];
			start++;
			i++;
		}
		newstr[i] = '\0';
		return (newstr);
	}
	else
		return (NULL);
}
