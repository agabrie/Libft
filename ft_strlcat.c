/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agabrie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:52:07 by agabrie           #+#    #+#             */
/*   Updated: 2018/06/03 11:46:22 by agabrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dst_size;
	size_t src_size;
	size_t size_append;

	dst_size = ft_strlen(dst);
	src_size = ft_strlen(src);
	size_append = dstsize - dst_size - 1;
	if (dstsize <= dst_size)
		return (src_size + dstsize);
	ft_strncat(dst, src, size_append);
	return (dst_size + src_size);
}
