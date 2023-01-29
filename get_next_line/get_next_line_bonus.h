/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zh <zshahin@student.42wolfsburg.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 17:34:18 by zh                #+#    #+#             */
/*   Updated: 2022/12/22 22:53:43 by zh               ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H

# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	int				fd;
	char			*content;
	struct s_list	*next;
}					tt_list;

char	*get_next_line(int fd);

tt_list	*ft_lstnw(void *content);

void	ft_lstdel(int fd, tt_list **lst);

void	ft_lstadd_bck(tt_list **lst, tt_list *new);

int		ft_alloc_creat(tt_list *lst, char **new_buffer, char **buffer, int n);

void	ft_lstclr(tt_list **lst, void (*del)(void*));

void	*ft_mmcpy(void *dest, const void *src, size_t n);

size_t	ft_strln(const char *s);

int		create_str(char *dest, char *buffer, int n);

#endif