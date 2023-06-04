#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned long int 	f_size;
	void				*ptr;

	f_size = nmemb * size;
	if (f_size > 2147483647)
		return (0);
	ptr = malloc(f_size);
	if (!ptr)
		return (0);
	ft_bzero(ptr, f_size);
	return (ptr);
}
