/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealshorm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 10:13:06 by ealshorm          #+#    #+#             */
/*   Updated: 2024/09/12 10:15:00 by ealshorm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!(new_node))
		return (0);
	new_node -> content = content;
	new_node -> next = NULL;
	return (new_node);
}
/*
int main()
{
   char *content = "Hello World";
   t_list *ptr = ft_lstnew(content);

    printf("%s \n",(char *)ptr -> content);

    return 0;
}
*/
