/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtshukud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 14:58:30 by mtshukud          #+#    #+#             */
/*   Updated: 2018/06/17 17:14:32 by mtshukud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
				newstr[i] = (*f)(i, *s);
				s++;
				i++;
			}
			newstr[i] = '\0';
			return (newstr);
		}
		return (NULL);
	}
	else
		return (NULL);
}
