/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agabrie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 12:29:27 by agabrie           #+#    #+#             */
/*   Updated: 2018/06/03 11:42:37 by agabrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (!src[i])
		dst[i] = '\0';
	return (dst);
}
