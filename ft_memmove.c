/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:41:48 by iubieta-          #+#    #+#             */
/*   Updated: 2023/09/14 20:35:43 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char       *destiny;
   	unsigned const char	*source;
	size_t	i;

	destiny = dest;
	source = src;
	i = 0;
	if (destiny > source)
	{
		while (n > 0)
		{
			destiny[n] = source[n];
			n--;
			write(1,".",1);
		}
	}
	else if (destiny < source)
	{
		while (i < n)
		{
			destiny[i] = source[i];
			i++;
			write(1,".",1);
		}
	}
	return (dest);
}

int main(void)
{
	
   	char dest2[50];
	char str2[50] = "Esta es la funcion memmove";
	
	
	
   	
   	char dest1[50];
	char str1[50] = "Esta es la funcion memmove";

	
	
	printf("%s\n", memmove(dest1, str1, 11));
	printf("%s\n", ft_memmove(dest2, str2, 11));
	return (0);
}
