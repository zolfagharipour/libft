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
			return(ptr);
		ptr++;
		i++;
	}
	return(0);
}
