/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_distance.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agabrie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/20 08:41:12 by agabrie           #+#    #+#             */
/*   Updated: 2018/08/09 08:56:25 by agabrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	calc_dist(t_point *c1, t_point *c2)
{
	double dist;

	dist = ft_root(ft_power(c2->x - c1->x, 2) + ft_power(c2->y - c1->y, 2), 2);
	return (dist);
}
