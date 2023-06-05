#include <stdio.h>

long int	ft_pwr(int base, int pwr)
{
	if (pwr == 0)
		return (1);
	else if (pwr > 0)
		return (ft_pwr(base, pwr - 1) * base);
	return (0);
}

int	main()
{
	printf("%ld\n", ft_pwr(2, 10));
}