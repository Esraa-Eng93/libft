/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealshorm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:26:41 by ealshorm          #+#    #+#             */
/*   Updated: 2024/09/12 10:27:26 by ealshorm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void del(void *content) {
    free(content);
}
void *double_value(void *content) {
    int *new_value = malloc(sizeof(int));
    if (new_value) {
        *new_value = *(int *)content * 2;
    }
    return new_value;
}
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void *))
{
	t_list	*first;
	t_list	*new;

	if (!f || !del)
		return (NULL);
	first = NULL;
	while (lst)
	{
		new = ft_lstnew((*f)(lst->content));
		if (!(new))
		{
			while (first)
			{
				new = first->next;
				(*del)(first->content);
				free(first);
				first = new;
			}
			lst = NULL;
			return (NULL);
		}
		ft_lstadd_back(&first, new);
		lst = lst->next;
	}
	return (first);
}
/*
void print_list(t_list *lst) {
    while (lst) {
        printf("%d -> ", *(int *)lst->content);
        lst = lst->next;
    }
    printf("NULL\n");
}

int main(void) {
    int *value1 = malloc(sizeof(int));
    int *value2 = malloc(sizeof(int));
    int *value3 = malloc(sizeof(int));
    *value1 = 1;
    *value2 = 2;
    *value3 = 3;

    t_list *node1 = ft_lstnew(value1);
    t_list *node2 = ft_lstnew(value2);
    t_list *node3 = ft_lstnew(value3);

    node1->next = node2;
    node2->next = node3;


    t_list *new_list = ft_lstmap(node1, double_value, del);


    printf("Original list: ");
    print_list(node1);

    printf("Mapped list: ");
    print_list(new_list);

    while (node1) {
        t_list *temp = node1->next;
        del(node1->content);
        free(node1);
        node1 = temp;
    }
    while (new_list) {
        t_list *temp = new_list->next;
        del(new_list->content);
        free(new_list);
        new_list = temp;
    }

    return 0;
}
*/
