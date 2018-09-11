/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agabrie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 10:50:17 by agabrie           #+#    #+#             */
/*   Updated: 2018/06/03 12:05:32 by agabrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *news1;
	unsigned char *news2;

	news1 = (unsigned char *)s1;
	news2 = (unsigned char *)s2;
	if (s1 == s2 || n == 0)
		return (0);
	while (n)
	{
		if (*news1 != *news2)
			return (*news1 - *news2);
		news1++;
		news2++;
		n--;
	}
	return (0);
}
