/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_root.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agabrie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 12:44:41 by agabrie           #+#    #+#             */
/*   Updated: 2018/08/09 08:54:10 by agabrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	ft_root(double number, double exponent)
{
	double i;

	i = 0;
	while (ft_power(i, exponent) < number)
	{
		if (ft_power(i, exponent) == number)
			return (i);
		if (!(ft_power(i, exponent) < number))
			break ;
		i += 0.1;
	}
	return (i);
}
