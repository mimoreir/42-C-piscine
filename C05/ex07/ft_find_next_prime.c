/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_next_prime.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 08:42:07 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/28 08:42:10 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2 || nb == 4)
		return (0);
	while (i < nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (ft_is_prime(nb))
		return (nb);
	else
		return (ft_find_next_prime(nb + 1));
}

/*int	main(void)
{
	printf("%d should be 2\n", ft_find_next_prime(-1));
	printf("%d should be 2\n", ft_find_next_prime(0));
	printf("%d should be 2\n", ft_find_next_prime(1));
	printf("%d should be 2\n", ft_find_next_prime(2));
	printf("%d should be 3\n", ft_find_next_prime(3));
	printf("%d should be 5\n", ft_find_next_prime(4));
	printf("%d should be 5\n", ft_find_next_prime(5));
	printf("%d should be 7\n", ft_find_next_prime(6));
	printf("%d should be 7\n", ft_find_next_prime(7));
	printf("%d should be 11\n", ft_find_next_prime(9));
	printf("%d should be 11\n", ft_find_next_prime(10));
	printf("%d should be 11\n", ft_find_next_prime(11));
	printf("%d should be 13\n", ft_find_next_prime(12));
	printf("%d should be 13\n", ft_find_next_prime(13));
	printf("%d should be 3877\n", ft_find_next_prime(3864));
	printf("%d should be 2147483647\n", ft_find_next_prime(2147483647));
	printf("%d should be 2147483647\n", ft_find_next_prime(2147483646));
	printf("%d should be 2\n", ft_find_next_prime(-2147483648));
	printf("%d should be 2147483629\n", ft_find_next_prime(2147483629));
	printf("%d should be 2147483647\n", ft_find_next_prime(2147483630));
}*/