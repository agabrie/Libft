/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agabrie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 11:22:37 by agabrie           #+#    #+#             */
/*   Updated: 2018/06/03 11:24:53 by agabrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char *memarea;

	memarea = NULL;
	if (size)
	{
		memarea = (unsigned char *)malloc(size);
		if (!memarea)
			return (memarea);
		while (size)
			memarea[--size] = 0;
	}
	return (memarea);
}
