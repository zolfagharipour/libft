/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <zolfagharipour@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:25:54 by mzolfagh          #+#    #+#             */
/*   Updated: 2023/09/05 13:25:55 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	char	*ptr;
	size_t	l_len;

	i = 0;
	l_len = ft_strlen(little);
	ptr = (char *)big;
	while (i < len && *ptr != '\0')
	{
		if (len - i < l_len)
			l_len = len - i;
		if (ft_strncmp(ptr, little, l_len) == 0)
			return (ptr);
		ptr++;
		i++;
	}
	return (0);
}
