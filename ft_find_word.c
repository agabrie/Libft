/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_word.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agabrie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 15:11:23 by agabrie           #+#    #+#             */
/*   Updated: 2018/06/03 15:11:52 by agabrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_find_word(const char *s, char c, char **stra, int i)
{
	int		len;
	int		space;

	space = 0;
	len = 0;
	while (*s == c)
	{
		s++;
		space++;
	}
	while (s[len] && s[len] != c)
		len++;
	if (len > 0)
	{
		stra[i] = ft_strnew(len);
		ft_strncpy(stra[i], s, len);
	}
	return (space + len);
}
