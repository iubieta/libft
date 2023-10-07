/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 18:03:46 by iubieta-          #+#    #+#             */
/*   Updated: 2023/10/07 18:36:25 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*nb_str;

	nb_str = ft_strdup(ft_itoa(n));
	write(fd, nb_str, sizeof(char) * ft_strlen(nb_str));
}
