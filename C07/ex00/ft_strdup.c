/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 16:24:07 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/28 16:24:09 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <malloc.h>

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

char	*ft_strdup(char *src)
{
	char	*c;
	char	*a;
	int		size;

	size = ft_strlen(src);
	c = malloc(size + 1);
	a = c;
	while (*src)
	{
		*a = *src;
		a++;
		src++;
	}
	*a = '\0';
	return (c);
}

/*int	main(void)
{
	char *c;

	c = NULL;
	c = ft_strdup("vamos ver se esta merda funciona\n");
	printf("%s\n", c);
	return (0);
}*/