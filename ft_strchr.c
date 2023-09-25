/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:53:50 by iubieta-          #+#    #+#             */
/*   Updated: 2023/09/22 16:39:55 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h> */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	ch;
	char	*ptr;

	ch = (char)c;
	ptr = s;
	while (*ptr != ch && *ptr != '\0')
		ptr++;
	if (*ptr == ch)
		return (ptr);
	else
		return (0);
}

/* int	main()
{
	char	str[50] = "String en el que buscar";
	char	c = '\0';

	printf("%s\n",strchr(str,c));
	printf("%s\n",ft_strchr(str,c));
} */