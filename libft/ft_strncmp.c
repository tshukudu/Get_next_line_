/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtshukud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 14:21:45 by mtshukud          #+#    #+#             */
/*   Updated: 2018/06/13 11:53:57 by mtshukud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;

	i = 0;
	while ((str1[i] || str2[i]) && i < n)
	{
		if (((unsigned char)str1[i] - (unsigned char)str2[i]) > 0)
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		if (((unsigned char)str1[i] - (unsigned char)str2[i]) < 0)
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
