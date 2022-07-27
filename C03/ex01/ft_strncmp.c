/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:57:48 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/25 11:57:51 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((*s1 || *s2) && i < n)
	{
		if (*s1 == *s2)
			;
		else
			return (*s1 - *s2);
		i++;
		s1++;
		s2++;
	}
	return (0);
}

/*int main(void)
{
	char *a;
	char *b;

	a = "miguel  adsad";
	b = "miguel  1sda";

	printf("%d\n",ft_strncmp(a,b,10));
}*/