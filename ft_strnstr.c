/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:48:21 by iubieta-          #+#    #+#             */
/*   Updated: 2023/09/22 16:40:01 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h>
#include <unistd.h> */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	//char	*ptr;
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (i < n && haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{	
			//write(1,"IN",2);
			//ptr = &haystack[i];
			j = 0;
			while (haystack[i + j] == needle[j])
			{
				//write(1, &haystack[i + j],1);
				j++;
				if (needle[j] == '\0')
					return (&haystack[i]);
			}
		}
		//write(1, &haystack[i],1);
		i++;
	}
	return (0);
}

/* int	main()
{
	char	aguja[50] = "aguja";
	char	pajar[50] = "Buscar una aguja en un pajar";
	size_t	n = 'a';

	printf("%s\n", strnstr(pajar, aguja, n));
	printf("%s\n", ft_strnstr(pajar, aguja, n));
} */