#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*ptr;
	char	*joined;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ptr = (char *)malloc(sizeof(char)* (s1_len + s2_len +1));
	joined = ptr;
	ptr = ft_memcpy(ptr, s1, s1_len);
	ptr += s1_len;
	ptr = ft_memcpy(ptr, s2, s2_len);
	ptr += s2_len;
	ptr = "\0";
	return (joined);
}
