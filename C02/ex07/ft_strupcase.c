/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:03:53 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/20 14:03:56 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_islowercase(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

char	*ft_strupcase(char *str)
{
	char	*a;

	a = str;
	while (*a)
	{
		if (ft_islowercase(*a))
			*a = *a - 32;
		a++;
	}
	return (str);
}

/*int main(void)
{
	int x=0;
	char str[] = "abc ABC AbC";
	ft_strupcase(str);
	while (str[x])
	{
		printf("%c", str[x]);
		x++;
	}

}*/
