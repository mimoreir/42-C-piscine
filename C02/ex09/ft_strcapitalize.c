/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 16:39:13 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/20 16:39:17 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

int	ft_iscap(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

int	ft_comparecap(char a, char b)
{
	if ((ft_islower(b)) && ((a > 'z') || (a < 'a'))
		&& ((a < 'A') || (a > 'Z')) && ((a < '0') || (a > '9')))
		return (1);
	else
		return (0);
}

int	ft_comparelow(char a, char b)
{
	if ((ft_iscap(a) && ft_iscap(b)) || (ft_islower(a) && ft_iscap(b)))
		return (1);
	else if ((a >= '0' && a <= '9') && ft_iscap(b))
		return (1);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	char	*a;
	char	*b;

	a = str;
	b = a;
	if (ft_islower(*a))
		*a = *a - 32;
	while (*a)
	{
		b = a + 1;
		if (ft_comparecap(*a, *b))
			*b = *b - 32;
		else if (ft_comparelow(*a, *b))
			*b = *b + 32;
		a++;
	}
	return (str);
}

/*int main(void)
{
	//char str[] = "miguel*moreira*montenegro} DA silva";
	char str[] = "Salut, comment tu vas ? a42Mots quArante-deux; cinquante+et+un";
	ft_strcapitalize(str);
	printf("%s\n", str);
}*/
