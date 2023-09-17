/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:19:10 by marvin            #+#    #+#             */
/*   Updated: 2023/09/17 13:19:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (unsigned char)s1[i] == (unsigned char)s2[i] && 
	(unsigned char)s1[i] != '\0' && (unsigned char)s2[i] != '\0')
		i++;
	if (i == n && (unsigned char)s1[i] == (unsigned char)s2[i] &&
	((unsigned char)s1[i] != '\0' || (unsigned char)s2[i] != '\0'))
		return (0);
	else
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	main()
{
	char str2[50] = "String de prueba";
	char str1[50] = "String de comparacion";
	size_t	n = 'z' + 5;

	printf("%i\n", strncmp(str1,str2,n));
	printf("%i\n", ft_strncmp(str1,str2,n));
}