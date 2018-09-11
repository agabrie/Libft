/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freearray.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agabrie <agabrie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 14:43:48 by agabrie           #+#    #+#             */
/*   Updated: 2018/08/27 09:46:26 by agabrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	freearray(char **arr)
{
	int index;

	index = 0;
	while (arr[index])
	{
		free(arr[index]);
		index++;
	}
	free(arr);
}
