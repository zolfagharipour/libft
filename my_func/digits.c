#include "libft.h"

int	ft_nbdigits(int nb)
{
	int	nbdig;

	nbdig = 0;
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		nbdig++;
		nb /= 10;
	}
	return (nbdig);
}


int main ()
{
	printf("%d\n", ft_nbdigits(-123));
}