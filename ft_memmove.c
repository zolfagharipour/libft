#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ptr;
	size_t	i;

	if (!dest && !src)
		return (0);
	i = 0;
	ptr = dest;
	while (i < n)
	{
		ptr[i] = *(unsigned char *)src;
		i++;
		src++;
	}
	return (dest);
}
