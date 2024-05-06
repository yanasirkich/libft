/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysirkich <ysirkich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:49:49 by yana              #+#    #+#             */
/*   Updated: 2024/05/06 12:45:28 by ysirkich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *ptr;

    if (!lst || !del)
        return ;
    while (*lst != NULL)
    {
        ptr = (*lst)->next;
        ft_lstdelone(*lst, del);
        free(*lst);
        *lst = ptr;
    }
}