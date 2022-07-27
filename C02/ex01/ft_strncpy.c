/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:48:57 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/20 10:49:01 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*a;
	unsigned int	i;

	i = 0;
	a = dest;
	while (i < n && *src)
	{
		*a = *src;
		a++;
		src++;
		i++;
	}
	while (i < n)
	{
		*a = '\0';
		i++;
		a++;
	}
	return (dest);
}

/*int main(void)
{
	char a[]="This is a test of"; //mathafoka"
	char b[15];

	printf("%s\n%s\n", a,b);
	ft_strncpy(b, a, 5);
	//strncpy(b,a,18);
	printf("%s\n", b);
}*/
