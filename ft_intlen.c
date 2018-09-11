/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newfile.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agabrie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/02 13:23:31 by agabrie           #+#    #+#             */
/*   Updated: 2018/06/02 13:27:05 by agabrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int number)
{
	int length;

	length = !number;
	if (number < 0)
		length++;
	while (number)
	{
		length++;
		number /= 10;
	}
	return (length);
}
