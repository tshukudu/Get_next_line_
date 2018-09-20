/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtshukud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 16:20:54 by mtshukud          #+#    #+#             */
/*   Updated: 2018/06/13 13:45:07 by mtshukud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*compstr;
	size_t	i;

	if (s1 && s2)
	{
		i = 0;
		len = ft_strlen(s1) + ft_strlen(s2);
		compstr = (char*)malloc(len + 1);
		if (compstr != NULL)
		{
			while (*s1)
				compstr[i++] = *s1++;
			while (*s2)
				compstr[i++] = *s2++;
			compstr[i] = '\0';
			return (compstr);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}
