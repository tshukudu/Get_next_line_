/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtshukud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 13:31:21 by mtshukud          #+#    #+#             */
/*   Updated: 2018/06/17 17:14:19 by mtshukud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*newstr;
	size_t	len;
	size_t	i;

	if (s)
	{
		i = 0;
		len = ft_strlen(s);
		newstr = (char*)malloc(len + 1);
		if (newstr != NULL)
		{
			while (i < len)
			{
				newstr[i] = (*f)(*s);
				s++;
				i++;
			}
			newstr[i] = '\0';
			return (newstr);
		}
	}
	return (NULL);
}
