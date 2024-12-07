/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealshorm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:25:31 by ealshorm          #+#    #+#             */
/*   Updated: 2024/09/12 10:26:17 by ealshorm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void print_content(void *content)
{
    printf("%s\n", (char *)content);
}
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}
/*
int main()
{
    t_list *node1 = ft_lstnew("Hello");
    t_list *node2 = ft_lstnew("World");
    t_list *node3 = ft_lstnew("!");

    node1->next = node2;
    node2->next = node3;

     ft_lstiter(node1, print_content);

     free(node1);
    free(node2);
    free(node3);

    return 0;
}
*/
