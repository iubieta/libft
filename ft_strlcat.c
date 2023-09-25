/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:45:40 by iubieta-          #+#    #+#             */
/*   Updated: 2023/09/22 18:25:54 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h> */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
		j++;
	if (i + j > destsize || destsize == 0)
		return (destsize + j);
	else
		j = 0;
		while (i < destsize - 1 && src[j])
		{
			dest[i + j] = src[j];
			j++;
		}
		dest[i + j] = '\0';
		return (i + j);
	/*if (destsize > 0 && i < destsize)
	{
		while (src[i] != '\0')
		{
			if (i < destsize -1)
				dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	else
	{
		i = 0;
		while (src[i] != '\0')
			i++;
	}
	return (i); */
}

/* int	main()
{
	char	str[100] = "lorem ipsum dolor sit amet";
	char	dest1[50] = "";
	char	dest2[50] = "";

	printf("%lu\n",strlcat(dest1,str,0));
	printf("%s\n",dest1);
	
	printf("%lu\n",ft_strlcat(dest2,str,0));
	printf("%s\n",dest2);
} */