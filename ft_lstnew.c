/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yana <yana@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 16:30:04 by yana              #+#    #+#             */
/*   Updated: 2024/05/04 16:55:26 by yana             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list  *ft_lstnew(void *content)
[
    t_list  *new;

    new = (t_list *)malloc(sizeof(*new));
    if (!new)
        return (NULL);
    new->content = content;
    new->next = NULL;
    return (new);
]