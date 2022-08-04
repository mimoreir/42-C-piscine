/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:48:52 by mimoreir          #+#    #+#             */
/*   Updated: 2022/08/04 11:48:54 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (*str)
	{
		x++;
		str++;
	}
	return (x);
}

void	ft_swap(char *a, char *b)
{
	char c;

	c = *a;
	*a = *b;
	*b = c;
}

char    *ft_strrev(char *str)
{
	int		len;
	int		i;
	char	*it1;
	char	*it2;

	len = ft_strlen(str);
	it1 = str;
	it2 = str;
	i = 0;
	while (*it2)
		it2++;
	it2--;
	while (i < len / 2)
	{
		ft_swap(it1, it2);
		i++;
		it1++;
		it2--;
	}
	return (str);
}

int main(int argc, char *argv[])
{
	(void)argc;
	char *c;
	c = argv[1];
	printf("%s\n", c);
	ft_strrev(argv[1]);
	printf("%s\n", c);
	return 0;
}