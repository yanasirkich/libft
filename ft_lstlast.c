/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yana <yana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:10:11 by yana              #+#    #+#             */
/*   Updated: 2024/05/04 18:19:12 by yana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list  *ft_lstlast(t_list *lst)
{
    if (!lst)
        return (NULL);
    while (lst->next != '\0')
        lst = lst->next;
    return (lst);
}