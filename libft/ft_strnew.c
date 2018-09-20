/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtshukud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 11:20:01 by mtshukud          #+#    #+#             */
/*   Updated: 2018/06/11 11:00:11 by mtshukud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *ptr;

	ptr = (char *)malloc(size + 1);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size + 1);
	return (ptr);
}
