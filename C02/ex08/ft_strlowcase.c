/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:16:57 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/20 15:17:00 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isuppercase(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

char	*ft_strlowcase(char *str)
{
	char	*a;

	a = str;
	while (*a)
	{
		if (ft_isuppercase(*a))
			*a = *a + 32;
		a++;
	}
	return (str);
}

/*int main(void)
{
	int x=0;
	char str[] = "ABC ABC AbC";
	ft_strlowcase(str);
	while (str[x])
	{
		printf("%c", str[x]);
		x++;
	}

}*/
