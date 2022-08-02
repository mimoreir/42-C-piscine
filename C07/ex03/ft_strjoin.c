/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 13:45:07 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/29 13:45:10 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <malloc.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

char	*ft_strcat(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

int	ft_strslen(int size, char **strs, char *sep)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			len++;
			j++;
		}
		i++;
	}
	i = 0;
	while (*sep)
	{
		sep++;
		i++;
	}
	return (len + (i * (size - 1)));
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	char	*istr;
	int		i;

	i = 0;
	if (size == 0)
	{
		str = malloc(1);
		*str = 0;
		return (str);
	}
	str = malloc(ft_strslen(size, strs, sep) + 1);
	if (!str)
		return (NULL);
	istr = str;
	while (i < size)
	{
		istr = ft_strcat(istr, strs[i]);
		if (i < size - 1)
			istr = ft_strcat(istr, sep);
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	*tab[11];
	char	*s;

	tab[0] = "Migasddddddddddduel moreira montenegro da silva";
	tab[1] = "Moredsaaaaaaaaaaaaaaaaaira";
	tab[2] = "Mondddddddddddddddddtenegro";
	tab[3] = "dadddddddddddddddddddd";
	tab[4]= "Silddddddddddddddddddddva";
	tab[5] = "vaddddddddddddddddddmos";
	tab[6] = "vedddddddddddddddddddddr";
	tab[7] = "sedddddddddddddddddddddddd";
	tab[8] = "isddddddddddddddddddddddddddddto";
	tab[9] = "funciddddddddddddddddona";
	tab[10] = "MESddddddddddddddddMO";

	s = ft_strjoin(11, tab, "+++++++++++++++++++++");
	printf("%s\n", s);
	free(s);
	return (0);
}*/