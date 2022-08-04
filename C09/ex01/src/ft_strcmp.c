/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 11:48:31 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/25 11:48:34 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 == *s2)
			;
		else
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

/*int main(void)
{
	char *a;
	char *b;

	a = "miguel b";
	b = "miguel b ";

	printf("%d\n",ft_strcmp(a,b));
}*/