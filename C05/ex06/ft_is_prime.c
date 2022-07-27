
#include <stdio.h>
#include <math.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while(i <= sqrt(nb))//sqrt(n))
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
		return (1);
}

int	main(void)
{
	printf("%d\n",ft_is_prime(20));
}
