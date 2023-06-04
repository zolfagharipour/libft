#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	if (!src && !dest)
		return (0);
	ptr = dest;
	while (i < n)
	{
		if (c != *(char *)src)
			ptr[i] = *(char *)src;
		else
		{
			ptr[i] = *(char *)src;
			return (dest);
		}
		src++;
		i++;	
	}
	return (dest);
}
