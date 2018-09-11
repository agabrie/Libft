/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agabrie <agabrie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 14:04:37 by agabrie           #+#    #+#             */
/*   Updated: 2018/08/28 17:18:44 by agabrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isneg(char c)
{
	if (c == '-')
		return (-1);
	return (1);
}

int			ft_atoi(const char *str)
{
	int negative;
	int number;

	negative = 1;
	number = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-' || *str == '+')
	{
		negative = ft_isneg(*str);
		str++;
	}
	while (*str)
	{
		if (ft_isdigit(*str))
		{
			number += *str++ - '0';
			if (ft_isdigit(*str))
				number *= 10;
		}
		else
			break ;
	}
	return (number * negative);
}
