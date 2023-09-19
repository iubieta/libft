/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 20:15:38 by iubieta-          #+#    #+#             */
/*   Updated: 2023/09/19 20:33:18 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*s_copy;
	size_t	i;

	s_copy = malloc(sizeof(s));
	if (!s_copy)
		return (0);
	i = 0;
	while (s[i] != '\0')
	{
		s_copy[i] = s[i];
		i++;
	}
	s_copy[i] = '\0';
	return (s_copy);
}

int main()
{
	char s[50] = "Hola que tal";

	printf("%s\n",strdup(s));
	printf("%s\n",ft_strdup(s));
}