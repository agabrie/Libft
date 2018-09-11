/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agabrie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 14:57:04 by agabrie           #+#    #+#             */
/*   Updated: 2018/06/03 11:58:39 by agabrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *src)
{
	char	*str;
	int		i;

	i = 0;
	if (!src)
		return ((char *)src);
	while (ft_isspace(src[i]) && src[i])
		i++;
	if (!src)
		return ("");
	str = ft_strdup((char *)src + i);
	if (!str)
		return (NULL);
	i = ft_strlen(str);
	while (ft_isspace(str[--i]))
		str[i] = '\0';
	str = ft_strdup(str);
	return (str);
}
