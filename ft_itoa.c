/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agabrie <agabrie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/29 09:38:22 by agabrie           #+#    #+#             */
/*   Updated: 2018/08/28 08:29:34 by agabrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*nbr;
	size_t	i;
	int		neg;

	neg = 0;
	i = ft_intlen(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	nbr = ft_strnew(i);
	if (!nbr)
		return (NULL);
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	nbr[i] = '\0';
	while (i)
	{
		nbr[--i] = (n % 10) + '0';
		n /= 10;
	}
	if (neg)
		nbr[0] = '-';
	return (nbr);
}
