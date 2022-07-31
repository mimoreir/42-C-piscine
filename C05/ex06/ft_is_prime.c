/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 08:37:06 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/28 08:37:09 by mimoreir         ###   ########.fr       */
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

/*int	main(void)
{
	printf("%d should be 0\n", ft_is_prime(-1));
	printf("%d should be 0\n", ft_is_prime(0));
	printf("%d should be 0\n", ft_is_prime(1));
	printf("%d should be 1\n", ft_is_prime(2));
	printf("%d should be 1\n", ft_is_prime(3));
	printf("%d should be 0\n", ft_is_prime(4));
	printf("%d should be 1\n", ft_is_prime(5));
	printf("%d should be 0\n", ft_is_prime(6));
	printf("%d should be 1\n", ft_is_prime(7));
	printf("%d should be 0\n", ft_is_prime(9));
	printf("%d should be 0\n", ft_is_prime(10));
	printf("%d should be 1\n", ft_is_prime(11));
	printf("%d should be 0\n", ft_is_prime(12));
	printf("%d should be 1\n", ft_is_prime(13));
	printf("%d should be 1\n", ft_is_prime(2147483647));
	printf("%d should be 0\n", ft_is_prime(2147483646));
}*/