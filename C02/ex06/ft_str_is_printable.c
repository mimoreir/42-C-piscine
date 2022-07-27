/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:44:35 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/20 13:44:36 by mimoreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (*str != '\0')
	{
		x++;
		str++;
	}
	return (x);
}

int	ft_str_is_printable(char *str)
{
	if (ft_strlen(str) == 0)
		return (1);
	while (*str != '\0')
	{
		if (*str >= 32 && *str <= 126)
			;
		else
			return (0);
		str++;
	}
	return (1);
}

/*int main(void)
{
	int x;
	char str[] = "12 3";
	str[2] = 127;
	x = ft_str_is_printable(str);
	if (x==1)
		printf("Apenas contem numeros\n");
	else
		printf("tem MERDA\n");

}*/