/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:28:40 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/18 13:28:48 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int		x;
	int		i;

	x = 0;
	i = n;

	while (i)
	{
		ft_putchar(x + 48);
		i--;
		x++;
	}
	ft_putchar(' ');
	
}

