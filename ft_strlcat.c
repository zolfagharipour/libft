/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <zolfagharipour@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:22:32 by mzolfagh          #+#    #+#             */
/*   Updated: 2023/09/05 13:22:34 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_check_dst(char *dst, size_t size)
{
	size_t	i;

	i = 0;
	while (*dst != '\0' && size != 0)
	{
		dst++;
		size--;
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		d_len;
	size_t		s_len;
	size_t		len;

	d_len = ft_check_dst(dst, size);
	s_len = ft_strlen(src);
	if (size > d_len + 1)
		len = size - d_len - 1;
	else
		len = 0;
	if (size == 0)
		return (d_len + s_len);
	if (s_len < len)
	{
		ft_memcpy(dst + d_len, src, s_len);
		dst[d_len + s_len] = '\0';
	}
	else
	{
		ft_memcpy(dst + d_len, src, len);
		dst[d_len + len] = '\0';
	}
	return (d_len + s_len);
}

#include <bsd/string.h>

int main ()
{
	char dest[30]; memset(dest, 0, 30);
	char * src = (char *)"AAAAAAAAA";
	memset(dest, 'B', 4);
	
	dest[0] = 'B';

	printf("%ld -- %s -- %s\n", strlcat(dest, src, 3), src, dest);	
	
	dest[30]; memset(dest, 0, 30);
	src = (char *)"AAAAAAAAA";
	dest[0] = 'B';
	memset(dest, 'B', 4);

	printf("%ld -- %s -- %s", ft_strlcat(dest, src, 3), src, dest);
}