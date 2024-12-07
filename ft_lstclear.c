/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealshorm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:22:52 by ealshorm          #+#    #+#             */
/*   Updated: 2024/09/12 10:25:14 by ealshorm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void del(void *content)
{
    //free(content);
}

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (!del)
        return ;
    if (lst)
    {
        (*del)(lst->content);
        free(lst);
    }
}
*/
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!del || !lst || !*lst)
		return ;
	while (lst && *lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}
/*
int main()
{
    char *ptr1 = "esraa";
    char *ptr2 = "sh";
    char *ptr3 =" amman42";
    //char *ptr3 = malloc(10);


    t_list *lst = ft_lstnew(ptr1);
    t_list *scd = ft_lstnew(ptr2);
    t_list *thr = ft_lstnew(ptr3);

    lst->next = scd;
    scd->next = thr;


    ft_lstclear(&lst, del);

    while (lst)
    {
        printf("the nodes are: %s\n", (char*)lst->content);
        lst = lst->next;
    }

    return 0;
}
*/
