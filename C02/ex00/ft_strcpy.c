/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:01:32 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/20 10:01:35 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*a;
	char	*b;

	a = dest;
	b = src;
	while (*b != '\0')
	{
		*a = *b;
		a++;
		b++;
	}
	*a = '\0';
	return (dest);
}

/*int main(void)
{
	char str[7] = "Flavio";
	char str_[3]= "Gau";

	printf("%s --- %s\n", str , str_);
	//ft_strcpy(str, str_);
	strcpy(str, str_);
	printf("%s --- %s\n", str , str_);	
}*/