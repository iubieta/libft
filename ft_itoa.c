/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 19:29:44 by iubieta-          #+#    #+#             */
/*   Updated: 2023/10/04 20:04:53 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft.h"

char	ft_itoa(int n)
{
	char	*str;
	char	number;
	int		characters;
	int		power;
	int		i;

	characters = 0;
	if (n < 0)
		characters++;	
	power = 0;
	while (n / (10 * power) > 10)
		power++;
	characters += power;
	printf("%i\n",characters);
	str = (char *)malloc(characters * sizeof(char));
	if (!str)
		return (NULL);
	else
	{
		
		i = 0;
		if (n < 0)
		{
			str[0] = "-";
			i++;
		}
		while (i < characters)
		{
			printf("IN");
			str[i] = (char)(n / (10 * power) - '0');
			n = n % (10 * power);
			i++;
		}
		return(str);
	}
	
}

int main()
{
	int n = 123;

	printf("%s",ft_itoa(n));
}