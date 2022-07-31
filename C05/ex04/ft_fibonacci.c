/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 15:20:44 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/27 15:20:46 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index < 3)
		return (1);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

/*int	main(void)
{
	printf("%d\n", ft_fibonacci(5));
	return (0);
}*/