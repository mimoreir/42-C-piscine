/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:53:38 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/29 13:53:39 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

char	*ft_skip(char *str, char *charset)
{
	char	*it;

	it = str;
	while (*charset == *it)
	{
		charset++;
		it++;
	}
	if (*charset == '\0')
		return (it);
	return (str);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	char	*it;
	int		i;
	int		j;
	int		len;

	len = ft_strlen(str);
	tab = malloc(len);
	it = str;
	i = 0;
	j = 0;
	tab[i] = malloc(len);
	while (*it)
	{
		if (*it == *charset)
		{
			it = ft_skip(it, charset);
			i++;
			tab[i] = malloc(len);
			j = 0;
		}
		tab[i][j] = *it;
		j++;
		it++;
	}
	i++;
	tab[i] = malloc(2);
	tab[i][0] = 0;
	return (tab);
}

int	main(void)
{
	char **tab;
	int i;

	i = 0;
	tab = ft_split("Miguel123Moreira1423Montenegro123da123Silva", "123");
	while (i < 6)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}