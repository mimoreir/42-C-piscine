/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 14:00:13 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/27 14:00:15 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int 	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb >= 1)
		return nb * ft_recursive_factorial(nb-1);
	else
		return (1);
}

/*int main(void)
{
	printf("%d\n", ft_recursive_factorial(0));
	return (0);
}*/