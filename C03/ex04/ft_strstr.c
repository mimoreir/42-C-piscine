/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 14:36:44 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/25 14:36:46 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	equalword(char *str, char *to_find)
{
	while (*to_find && *str)
	{
		if (*str != *to_find)
			return (0);
		str++;
		to_find++;
	}
	if (*to_find == '\0')
		return (1);
	else
		return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		if (*str == *to_find)
		{
			if (equalword(str, to_find))
			{
				return (str);
			}
		}
		str++;
	}
	return (NULL);
}

/*int	main(void)
{
	char a[100] = "Miguel Moreira Montenegro Silva";
	char b[100] = "";
	char *c;

	c = ft_strstr(a,b);
	if (c)
		printf("%s\n", c);
	else
		printf("NULO\n");
	c = strstr(a,b);
	if (c)
		printf("%s\n", c);
	else
		printf("NULO\n");
}*/