/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:31:12 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/27 17:31:13 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 1 || nb > 2147395600)
		return (0);
	if (nb == 1)
		return (nb);
	else
	{
		while (i <= nb / 2)
		{
			if ((i * i) == nb)
				return (i);
			else
				i++;
		}
	}
	return (0);
}

/*int	main(void)
{
	printf("%d should be 0\n", ft_sqrt(-1));
	printf("%d should be 0\n", ft_sqrt(0));
	printf("%d should be 1\n", ft_sqrt(1));
	printf("%d should be 0\n", ft_sqrt(2));
	printf("%d should be 0\n", ft_sqrt(3));
	printf("%d should be 2\n", ft_sqrt(4));
	printf("%d should be 0\n", ft_sqrt(5));
	printf("%d should be 0\n", ft_sqrt(6));
	printf("%d should be 0\n", ft_sqrt(7));
	printf("%d should be 3\n", ft_sqrt(9));
	printf("%d should be 4\n", ft_sqrt(16));
	printf("%d should be 5\n", ft_sqrt(25));
	printf("%d should be 6\n", ft_sqrt(36));
	printf("%d should be 7\n", ft_sqrt(49));
	printf("%d should be 0\n", ft_sqrt(2147483647));
	printf("%d should be 46340\n", ft_sqrt(2147395600));
	printf("%d should be 0\n", ft_sqrt(2147395601));

}*/