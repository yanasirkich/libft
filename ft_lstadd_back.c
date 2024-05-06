/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yana <yana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:20:40 by yana              #+#    #+#             */
/*   Updated: 2024/05/04 18:40:58 by yana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *lptr;

    if (!lst || !new)
        return ;
    lptr = *lst;
    while (lptr->next != NULL)
        lptr = lptr->next;
    lptr->next = new;
}