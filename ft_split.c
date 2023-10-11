/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:48:55 by iubieta-          #+#    #+#             */
/*   Updated: 2023/10/11 19:52:47 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft.h"

size_t	ft_cont_substr(char const *s, char c)
{
	size_t	i;
	size_t	cont;

	i = 0;
	cont = 0;
	while (s[i])
	{
		if (s[i] != c)
				cont++;
		while (s[i] != c && s[i])
			i++;
		if (s[i])
			i++;
	}
	return (cont);
}
char	**ft_split(char const *s, char c)
{
	char	**array;
	char	*ptr;
	size_t	i;
	size_t	cont;

	i = 0;
	cont = ft_cont_substr(s, c);
	array = (char **)malloc((cont + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	ptr = ft_strdup(s);
	i = 0;
	while (*ptr)
	{
		if (ptr == c)
		{
			*ptr = '\0';
			ptr++;
		}
		if (ptr != )//SEGUIR POR AQUI!!!
		ptr++;
	}
	ptr = NULL;
	return (array);
}

int  main(void)
{
   char    *s = "      gfdgf biiu asd    ";
   char    c = ' ';
   size_t  count;
   char    **tab = ft_split(s, c);
   size_t  i;


   i = 0;
   count = ft_cont_substr(s, c);
   printf("s[0]: %c\n", s[0]);
   printf("COUNT en main: %zu\n", count);
   while (i < 100)
   {
       printf("%s\n", tab[i]);
       i++;
   }
}
