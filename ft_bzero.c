/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:08:02 by iubieta-          #+#    #+#             */
/*   Updated: 2023/09/12 16:50:01 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void    ft_bzero(void *s, size_t n)
{
    unsigned char *str;
    unsigned int i;

    str = (unsigned char *)s;
    i = 0;
    while (i < n)
    {
        str[i] = 0;
        i++;
    }
}

int main()
{
    char myString[5]; // Declaración de un arreglo de 5 enteros


    bzero(myString, sizeof(myString));
    // Imprimir los valores del arreglo
    printf("myString = %s\n", myString);
}