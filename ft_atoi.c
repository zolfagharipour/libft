#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int		i;
	int		result;
	int		sign;

	sign = 1;
	result = 0;
	i = 0;
	while (nptr[i] == ' ')
	{
		i++;
	}
	if (nptr[i] == '-')
	{
		sign = -sign;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] != '\0' && nptr[i] >= '0' && nptr[i] <= '9')
	{
		result *= 10;
		result += nptr[i] - 48;
		i++;
	}
	return (result * sign);
}
