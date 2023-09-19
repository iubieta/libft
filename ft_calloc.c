/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 20:01:29 by iubieta-          #+#    #+#             */
/*   Updated: 2023/09/19 20:15:14 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;
	size_t	i;

	ptr = malloc(num * size);
	if (!ptr)
		return (0);
	i = 0;
	while (i < num * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}

int main()
{
	return (0);
}