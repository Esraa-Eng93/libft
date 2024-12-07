/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealshorm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:21:31 by ealshorm          #+#    #+#             */
/*   Updated: 2024/09/12 10:22:20 by ealshorm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void del(void *content)
{
}
*/
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!del)
		return ;
	if (lst)
	{
		(*del)(lst->content);
		free(lst);
	}
}
/*
int main()
{
   char *ptr1 = "esraa";
    char *ptr2 = "sh";
    char *ptr3 = "42 amman";

    t_list *lst = ft_lstnew(ptr1);
    t_list *scd = ft_lstnew(ptr2);
    t_list *thr = ft_lstnew(ptr3);

    lst->next = scd;
    scd->next = thr;

    ft_lstdelone(scd, del);
    lst->next = thr;
    while (lst)
    {
        printf("the nodes is: %s \n", (char*)lst->content);
        lst = lst->next;
    }

    return 0;
}
*/
