#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*ptr;
	
	len = ft_strlen(s);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return(0);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return(ptr);
}