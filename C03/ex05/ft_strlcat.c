/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 16:18:17 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/25 16:18:19 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	char			*a;

	i = 0;
	a = dest;
	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	while (*a)
	{
		a++;
		i++;
	}
	while (i < (size -1) && *src)
	{
		*a = *src;
		a++;
		src++;
		i++;
	}
	*a = '\0';
	return (ft_strlen(dest) + ft_strlen(src));
}

/*int main(void)
{
	char b[15] = "ola ";
	char a[15] = "tudo bem?";
	char c[15] = "tudo bem?";
	char d[15] = "ola ";

	printf("%d---%s\n", ft_strlcat(c,d,10),c);
	printf("%ld---%s\n", strlcat(a,b,10),a);
}*/
