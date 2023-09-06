/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <zolfagharipour@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 12:56:21 by mzolfagh          #+#    #+#             */
/*   Updated: 2023/09/05 12:56:25 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nlen(int n)
{
	int		i;

	i = 0;
	if (n < 0)
		i++;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*nbr;
	int		i;

	if (n == -2147483648)
		return ("-2147483648");
	i = ft_nlen (n) - 1;
	nbr = (char *)malloc(sizeof(char) * (ft_nlen(n) + 1));
	if (!nbr)
		return (0);
	if (n < 0)
	{
		nbr[0] = '-';
		n *= -1;
	}
	nbr[i] = '\0';
	while (n > 0)
	{
		nbr[i] = (n % 10) + 48;
		n /= 10;
		i--;
	}
	return (nbr);
}
