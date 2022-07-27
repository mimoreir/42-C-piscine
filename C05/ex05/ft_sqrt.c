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
	int i;

	i = 1;
	if (nb < 1)
		return(0);
	if (nb == 1)
		return (nb);
	else
	{
		while (i <= nb / 2)
		{
			if((i * i) == nb)
				return (i);
			else
				i++;
		}
	}
	return (0);
}

int main(void)
{
	printf("%d\n", ft_sqrt(154));
	return (0);
}
