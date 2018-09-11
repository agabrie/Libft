/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agabrie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:53:31 by agabrie           #+#    #+#             */
/*   Updated: 2018/06/03 15:58:01 by agabrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *needle, size_t len)
{
	size_t i;
	size_t i2;

	i = 0;
	if (*needle == '\0')
		return ((char *)hay);
	while (hay[i] && i < len)
	{
		i2 = 0;
		while (hay[i + i2] == needle[i2] && (i + i2) != len)
		{
			if (needle[i2 + 1] == '\0')
				return ((char *)hay + i);
			i2++;
		}
		i++;
	}
	return (NULL);
}
