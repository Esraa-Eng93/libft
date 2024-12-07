/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealshorm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:18:10 by ealshorm          #+#    #+#             */
/*   Updated: 2024/09/12 10:19:08 by ealshorm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!(lst->next))
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
/*
int main()
{
    char *cont1 = "Hello";
    char *cont2 = "World";
    char *cont3 = "esraa";


    t_list *lst = ft_lstnew(cont1);
    t_list *scd = ft_lstnew(cont2);
    t_list *thd = ft_lstnew(cont3);


    lst->next = scd;
    scd->next = thd;


    t_list *last = ft_lstlast(lst);


    if (last)
        printf("The content of the last node is: %s\n", (char *)last->content);
    else
        printf("The list is empty.\n");


    free(lst);
    free(scd);
    free(thd);

    return 0;
}
*/
