/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 16:05:21 by iubieta-          #+#    #+#             */
/*   Updated: 2023/09/15 17:00:42 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
	size_t	i;
	
	if (destsize > 0)
	{
		i = 0;
		while (src[i] != '\0')
		{
			if (i < destsize - 1)
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
	return (i);
}

int	main()
{
	char	str[100] = "123456789012345678901234567890123456789/";
	char	dest1[50];
	char	dest2[50];

	printf("%lu\n",strlcpy(dest1,str,0));
	printf("%s\n",dest1);
	
	printf("%lu\n",ft_strlcpy(dest2,str,0));
	printf("%s\n",dest2);
}