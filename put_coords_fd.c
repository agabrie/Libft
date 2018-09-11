/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_coords_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agabrie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 08:36:22 by agabrie           #+#    #+#             */
/*   Updated: 2018/08/09 08:52:51 by agabrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	put_coords_fd(t_point *point, int fd)
{
	ft_putnbr_fd((point->y), fd);
	ft_putchar_fd(' ', fd);
	ft_nbrendl_fd((point->x), fd);
}
