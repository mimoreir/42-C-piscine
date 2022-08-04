/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:41:23 by mimoreir          #+#    #+#             */
/*   Updated: 2022/08/04 11:41:24 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <malloc.h>

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

char	*ft_strdup(char *src)
{
	char	*cop;
	char	*it;

	cop = malloc(ft_strlen(src) + 1);
	if (!cop)
		return (NULL);
	it = cop;
	while (*src)
	{
		*it = *src;
		it++;
		src++;
	}
	return (cop);
}

int main(int argc, char *argv[])
{
	char *c;
	(void)argc;
	c = ft_strdup(argv[1]);
	printf("%s\n", c);
	return 0;
}
