#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	int		i;
	char	*ptr;

	len = ft_strlen(s);
	i = len;
	if (!(ptr = (char *)malloc(sizeof(char) * (len + 1))) || !s)
		return (0);
	ptr[len] = '\0';
	while (--i >= 0)
		ptr[i] = f(i, s[i]);
	return (ptr);
}