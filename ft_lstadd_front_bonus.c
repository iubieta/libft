/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iubieta- <iubieta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:45:40 by iubieta-          #+#    #+#             */
/*   Updated: 2023/10/14 18:14:18 by iubieta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return;
	if (*lst)
		new->next = *lst;
	*lst = new;
}

/* int main(void)
{
    t_list  *new_list;
    char    str_new[] = "Kaixo";
	t_list  *new_list2;
    char    str_new2[] = "Hello";
    t_list  *previous_list;
    char    str_previous[] = "Agur";


    previous_list = malloc(sizeof(*previous_list));
    new_list = malloc(sizeof(*new_list));
	new_list2 = malloc(sizeof(*new_list2));
    previous_list->content = (void *)str_previous;
	new_list->content = (void *)str_new;
    new_list2->content = (void *)str_new2;


    // Defino dos lista independientes. Ahora voy a añadir new_list a previous_list


    ft_lstadd_front(&previous_list, new_list);
    printf("El contenido del nodo nuevo es: %s", previous_list->content);
	ft_lstadd_front(&new_list, new_list2);
	printf("El contenido del nodo nuevo es: %s", new_list->content);
    // Ahora el puntero previous_list apunta al nodo new, de manera que el content será "Kaixo"
} */
