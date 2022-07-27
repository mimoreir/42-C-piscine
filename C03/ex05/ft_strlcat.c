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

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	char			*a;

	i = 0;
	a = dest + ft_strlen(dest);
	while (i < (size - 1) && *src)
	{
		*a = *src;
		a++;
		src++;
		i++;
	}
	*a = '\0';
	return (i);
}


int main(void)
{
	char a[100] = "tudo bem?";
	char b[100] = "ola";
	char c[100] = "tudo bem?";
	char d[100] = "ola";

	printf("%d---%s\n", ft_strlcat(a,b,5),a);
	printf("%ld---%s\n", strlcat(c,d,5),c);
}
