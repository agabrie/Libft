/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agabrie <agabrie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 15:22:33 by agabrie           #+#    #+#             */
/*   Updated: 2018/08/30 12:50:55 by agabrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			**ft_strsplit(char const *s, char c)
{
	int		len;
	char	**stra;
	int		i;
	int		wc;

	if (!s)
		return (NULL);
	wc = ft_wcount(s, c, 0);
	len = 0;
	stra = (char **)malloc((wc) * sizeof(char *) + 1);
	if (!stra)
		return (NULL);
	i = 0;
	len = 0;
	while (*s)
	{
		len = ft_find_word(s, c, stra, i++);
		s += len;
	}
	stra[wc] = 0;
	return (stra);
}
