/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agabrie <agabrie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 09:08:33 by agabrie           #+#    #+#             */
/*   Updated: 2018/08/28 17:15:37 by agabrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isnum(char *str)
{
	int		index;
	int		len;
	char	*number;

	number = ft_itoa(ft_atoi(str));
	index = 0;
	len = ft_strlen(str);
	if (str[index] == '-' || str[index == '+'])
		index++;
	while (str[index] && ft_isdigit(str[index]))
		index++;
	if (index == len)
	{
		len = ft_strequ(number, str);
		free(number);
		return (len);
	}
	free(number);
	return (0);
}
