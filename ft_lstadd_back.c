/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealshorm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:19:28 by ealshorm          #+#    #+#             */
/*   Updated: 2024/09/12 10:21:09 by ealshorm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (lst)
	{
		if (*lst)
		{
			last = ft_lstlast(*lst);
			last->next = new;
		}
		else
			*lst = new;
	}
}
/*
int main()
{
    char *ptr1 = "esraa";
    char *ptr2 = "sh";
    char *ptr3 ="42 amman";

    t_list *lst = ft_lstnew(ptr1);
    t_list *scd = ft_lstnew(ptr2);
    t_list *thr = ft_lstnew(ptr3);

    lst->next = scd;


    ft_lstadd_back(&lst,thr);
    while (lst)
    {
        printf("the nodes is  %s \n ",(char*)lst->content);
       lst = lst->next;
    }
    printf("the new node  %s \n ",(char*)lst->content);
    return 0;
}
*/
