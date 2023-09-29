/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:13:18 by iubieta-          #+#    #+#             */
/*   Updated: 2023/09/29 18:11:23 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t 	start;
	size_t	end;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1)
		return (NULL);
	if (!set)
		return (s1);
	while (s1[i] != set[0])
		i++;
	while (s1[i+j] == set[j])
		j++;
	start = i + j;
	i = 0;
	j = 0;
	while (s1[ft_strlen(s1) - i] != set[ft_strlen(set)])
		i++;
	while (s1[ft_strlen(s1) - i - j] != set[ft_strlen(set) - j])
		j++;
	end = ft_strlen(s1) - i - j;
	return (ft_substr(s1, start, end - start));
}