/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agabrie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 11:53:59 by agabrie           #+#    #+#             */
/*   Updated: 2018/06/03 11:49:25 by agabrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char	*h;
	char	*n;

	h = (char *)haystack;
	n = (char *)needle;
	if (!*needle)
		return ((char *)haystack);
	while (*haystack)
	{
		while (*n && *h == *n)
		{
			h++;
			n++;
			if (!*n)
				return ((char *)haystack);
		}
		haystack++;
		h = (char *)haystack;
		n = (char *)needle;
	}
	return (NULL);
}
