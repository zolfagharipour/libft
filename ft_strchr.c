#include "libft.h"

char	*ft_strchr(const char *str, int	c)
{
	while(*str)
	{
		if (*str == c)
			return ((char*) str);
		str++;
	}
	if (c == *str)
		return ((char*)str);
	else
		return (0);
}
