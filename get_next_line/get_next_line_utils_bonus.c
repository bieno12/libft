/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zh <zshahin@student.42wolfsburg.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:33:45 by zh                #+#    #+#             */
/*   Updated: 2022/12/22 22:52:59 by zh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"
#include <stdio.h>

void	ft_lstdel(int fd, tt_list **lst)
{
	tt_list	*temp;
	tt_list	*current;

	if ((*lst)->fd == fd)
	{
		temp = *lst;
		*lst = (*lst)->next;
		free(temp->content);
		free(temp);
		return ;
	}
	current = *lst;
	while (current && current->next)
	{
		if (current->next->fd == fd)
		{
			temp = current->next;
			current->next = current->next->next;
			free(temp->content);
			free(temp);
		}
		current = current->next;
	}
}

tt_list	*ft_lstnw(void *content)
{
	tt_list	*new_node;

	new_node = (tt_list *)malloc(sizeof(tt_list));
	if (!new_node)
		return (0);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

int	ft_alloc_creat(tt_list *lst, char **new_buffer, char **buffer, int n)
{
	*new_buffer = malloc(n + 1);
	n = create_str(*new_buffer, *buffer, n);
	while (lst && lst->next)
		lst = lst->next;
	lst->next = ft_lstnw(*new_buffer);
	return (n);
}

void	ft_lstclr(tt_list **lst, void (*del)(void*))
{
	tt_list	*nxt;
	tt_list	*current;

	current = *lst;
	while (current)
	{
		nxt = current->next;
		del(current->content);
		free(current);
		current = nxt;
	}
	*lst = 0;
}

size_t	ft_strln(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
