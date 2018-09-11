/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agabrie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 15:36:03 by agabrie           #+#    #+#             */
/*   Updated: 2018/06/03 15:36:55 by agabrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		index;
	int		len;
	char	*tmp;

	tmp = str;
	len = ft_strlen(str) - 1;
	index = 0;
	while (index <= len)
	{
		tmp[index] = str[len - index];
		str[len - index] = str[index];
		str[index] = tmp[index];
		ft_putnbr(len - index);
		index++;
	}
	return (str);
}
