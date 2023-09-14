/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:31:39 by iubieta-          #+#    #+#             */
/*   Updated: 2023/09/12 16:37:38 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void *  ft_memset(void *b, int c, size_t len)
{
    unsigned char *str;
    unsigned int    i;
    
    str = (unsigned char *)b;
    i = 0;
    while (i < len)
    {
        str[i] = c;
        i++;
    }
    return (str);
}

int main()
{
    char myArray[5]; // Declaración de un arreglo de 5 enteros

    // Inicializar el arreglo con ceros
    memset(myArray, 2, sizeof(myArray));

    // Imprimir los valores del arreglo
    for (int i = 0; i < 5; i++) {
        printf("myArray[%d] = %d\n", i, myArray[i]);
    }
    // Inicializar el arreglo con ceros
    ft_memset(myArray, 2, sizeof(myArray));

    // Imprimir los valores del arreglo
    for (int i = 0; i < 5; i++) {
        printf("myArray[%d] = %d\n", i, myArray[i]);
    }
}