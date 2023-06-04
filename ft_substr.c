#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	if (ft_strlen(s) < start + len)
		len = ft_strlen(s) - start;
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (0);
	ptr[len] = '\0';
	while(len > 0)
	{
		len--;
		ptr[len] = s[start + len];
	}
	return (ptr);
}
