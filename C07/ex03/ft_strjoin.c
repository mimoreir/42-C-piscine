/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 11:20:43 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/29 11:20:48 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*c;

	c = dest;
	while (*c)
	{
		c++;
	}
	while (*src)
	{
		*c = *src;
		c++;
		src++;
	}
	*c = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*str;

	if (size == 0)
		return (malloc(0));
	str = malloc(sizeof(strs));
	i = 0;
	while (i < size)
	{
		str = ft_strcat(str, strs[i]);
		i++;
	}
	return (str);
}

int	main(void)
{
	char	*tab[6];
	tab[0] = "ola ";
	tab[1] = "tudo ";
	tab[2] = "bem";
	tab[3] = "? ";
	tab[4]= "\n";
	tab[5]= "parece asdasd";
	printf("%s", ft_strjoin(6, tab, "Pasquale"));
	return (0);
}
