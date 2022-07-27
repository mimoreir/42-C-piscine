/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:31:36 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/25 14:31:39 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (*str++ != '\0')
	{
		x++;
	}
	return (x);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*a;
	int				dlen;

	i = 0;
	dlen = ft_strlen(dest);
	a = dest + dlen;
	while (*src && i < nb)
	{
		*a = *src;
		a++;
		src++;
		i++;
	}
	*a = '\0';
	return (dest);
}

/*int	main(void)
{
	char a[15] = "Hello";
	char b[21] = "Worldasdasdasdasdasd";

	strncat(a,b,21);
	//ft_strncat(a,b,21);
	printf("%s\n", a);
}*/