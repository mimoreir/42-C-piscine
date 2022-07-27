/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimoreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 13:33:43 by mimoreir          #+#    #+#             */
/*   Updated: 2022/07/20 13:33:46 by mimoreir         ###   ########.fr       */
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

int	ft_str_is_numeric(char *str)
{
	if (ft_strlen(str) == 0)
		return (1);
	while (*str != '\0')
	{
		if (*str >= '0' && *str <= '9')
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
	x = ft_str_is_numeric(str);
	if (x==1)
		printf("Apenas contem numeros\n");
	else
		printf("tem MERDA\n");

}*/
