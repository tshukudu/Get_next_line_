/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtshukud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 13:34:51 by mtshukud          #+#    #+#             */
/*   Updated: 2018/06/13 11:56:49 by mtshukud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *str1, const char *str2)
{
	size_t i;

	i = 0;
	while (str1[i] || str2[i])
	{
		if (((unsigned char)str1[i] - (unsigned char)str2[i]) > 0)
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		if (((unsigned char)str1[i] - (unsigned char)str2[i]) < 0)
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
