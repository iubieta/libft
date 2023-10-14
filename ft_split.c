/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:48:55 by iubieta-          #+#    #+#             */
/*   Updated: 2023/10/14 14:59:46 by iubieta-         ###   ########.fr       */
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

void	ft_free_array(char **array)
{
	int	i;

	i = 0;
	while (array[i] != 0)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

char	*ft_fill(char const *s, char c, char **array)
{
	int	i;
	int	start;
	int	end;

	i = 0;
	end = 0;
	while (i < ft_cont_substr(s, c))
	{
		start = end;
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] != c && s[end])
			end++;
		array[i] = ft_substr(s, start, (end - start));
		if (!array[i])
			ft_free_array(array);
		i++;
	}
	array[i] = NULL;
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	char	*ptr;
	size_t	i;
	size_t	j;
	size_t	cont;

	i = 0;
	cont = ft_cont_substr(s, c);
	array = (char **)ft_calloc(cont + 1, sizeof(char **));
	if (!array)
		return (NULL);
	ft_fill(s, c, array);
	return (array);
}

/* int  main(void)
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
   while (i < count)
   {
       printf("%s\n", tab[i]);
       i++;
   }
} */
