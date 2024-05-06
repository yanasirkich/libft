/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yana <yana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 17:27:18 by yana              #+#    #+#             */
/*   Updated: 2024/05/04 18:41:03 by yana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_lstsize(t_list *lst)
{
    int count;

    if (!lst)
        return (NULL);
    count = 0;
    while (lst != NULL)
    {
        count++;
        lst = lst->next;
    }
    return (count);
}





















