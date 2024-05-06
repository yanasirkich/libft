/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yana <yana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:49:49 by yana              #+#    #+#             */
/*   Updated: 2024/05/04 19:18:59 by yana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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