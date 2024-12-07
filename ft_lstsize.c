/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealshorm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:16:37 by ealshorm          #+#    #+#             */
/*   Updated: 2024/09/12 10:17:54 by ealshorm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	size_t	count;

	count = 0;
	while (lst)
	{
		lst = lst->next;
		count++;
	}
	return (count);
}
/*
int main()
{
    char *cont1 ="Hello";
    char *cont2 ="World";
    char *cont3 ="esraa";
    t_list *lst = ft_lstnew (cont1 );
    t_list *scd = ft_lstnew (cont2 );
    t_list *thd = ft_lstnew (cont3 );
    ft_lstadd_front(&lst, scd);
    ft_lstadd_front(&lst, thd);
    //t_list *ptr ;
    int i = ft_lstsize(lst);
    printf(" the node number is : %d \n ", i);


    free(lst);
    free(scd);
    free(thd);

    return 0;
}
*/
