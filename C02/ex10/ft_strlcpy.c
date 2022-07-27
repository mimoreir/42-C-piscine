/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 09:10:08 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/21 09:10:10 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (*str++ != '\0')
	{
		x++;
	}
	return (x);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*a;
	char			*b;
	unsigned int	i;

	a = dest;
	b = src;
	i = 0;
	if (size > 0)
	{
		if (size > 1)
		{
			while (*b != '\0' && i < (size - 1))
			{
				*a = *b;
				a++;
				b++;
				i++;
			}
		}
		*a = '\0';
	}
	return (ft_strlen(src));
}

/*int	main(void)
{
	char dest[] = "ABC DEF GHI";
	char src[] = "Onetwo three four";
	unsigned int n;

	n = 0;

	n = ft_strlcpy(dest, src, 5);
	printf("%u----%s\n", n, dest);
	return (0);
}*/
