/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dup_conchar.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agabrie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 08:28:57 by agabrie           #+#    #+#             */
/*   Updated: 2018/07/20 13:03:20 by agabrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_dup_conchar(const char *str, char c)
{
	char	*fresh;
	int		i;

	i = 0;
	fresh = NULL;
	if (ft_conchar(str, c))
	{
		i = ft_index_of_char(str, c);
		fresh = ft_strndup(str, i);
	}
	return (fresh);
}
