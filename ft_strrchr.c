#include "libft.h"

char	*ft_strrchr(const char *str, int	c)
{
	int	i;
	int	last;
	
	i = 0;
	last = 0;
	while(str[i])
	{
		if (str[i] == c)
			last = i;
		i++;
	}
	if (c == str[i])
		last = i;
	return ((char*) str + last);
}
