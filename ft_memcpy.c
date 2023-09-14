/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:30:46 by iubieta-          #+#    #+#             */
/*   Updated: 2023/09/14 19:40:55 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

int main(void)
{
   char src[50] = "mahmudulhasanjony";
   char dest[50];
   char dest1[50];


   memcpy(dest, src, 25);
   printf("Funcion original: %s\n", dest);
   ft_memcpy(dest1, src, 25);
   printf("Funcion propia:   %s\n", dest1);
   return (0);
}
