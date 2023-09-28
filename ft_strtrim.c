/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:13:18 by iubieta-          #+#    #+#             */
/*   Updated: 2023/09/28 19:57:36 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	char	*trim_str;
	size_t	i;

	if (!s1)
		return (NULL);
	if (!set)
		return (s1);
	trim_str = malloc(ft_strlen)
}