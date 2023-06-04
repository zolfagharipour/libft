#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t		d_len;
	size_t		s_len;
	size_t		len;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	len = size - d_len - 1;
	if (size == 0)
		return (0);
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
