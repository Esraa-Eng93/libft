/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealshorm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:15:20 by ealshorm          #+#    #+#             */
/*   Updated: 2024/09/12 10:16:11 by ealshorm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
	}
}
/*
int main()
{
    char *cont1 ="Hello";
    char *cont2 ="World";
    t_list *lst = ft_lstnew (cont1 );
    t_list *scd = ft_lstnew (cont2 );

    printf("the first new one : %s \n ",(char *)lst->content);
    printf("the second new one :%s \n\n ",(char *)scd->content);
    printf(" after add the second node in front\n\n ");
    ft_lstadd_front(&lst, scd);

    int count = 1;
    t_list *current = lst;
    while (current)
    {
        printf("Content node %d: %s\n",count, (char *)current->content);
        current = current->next;
        count ++;
    }

    //free(lst);
    //free(scd);

    return 0;
}
*/
