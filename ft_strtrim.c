/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzolfagh <zolfagharipour@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 13:27:53 by mzolfagh          #+#    #+#             */
/*   Updated: 2023/09/05 13:27:55 by mzolfagh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		s1_len;
	int		set_len;
	int		trim;
	int		i;
	char	*ptr;

	trim = 0;
	i = 0;
	s1_len = ft_strlen(s1);
	set_len = ft_strlen(set);
	if (!ft_memcmp(s1, set, set_len))
		trim += 1;
	if (!ft_memcmp(s1 + s1_len - set_len, set, set_len))
		trim += 4;
	s1_len -= (trim % 3) * set_len;
	ptr = (char *)malloc(sizeof(char) * (s1_len + 1));
	if (!(ptr))
		return (0);
	while (i < s1_len)
	{
		if (trim == 1 || trim == 5)
			ptr[i] = s1[set_len + i];
		else
			ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
