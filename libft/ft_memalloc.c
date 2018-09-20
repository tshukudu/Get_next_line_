/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtshukud <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 09:42:32 by mtshukud          #+#    #+#             */
/*   Updated: 2018/06/06 12:23:11 by mtshukud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void *newstr;

	newstr = malloc(size);
	if (newstr == NULL)
		return (NULL);
	ft_bzero(newstr, size);
	return (newstr);
}
