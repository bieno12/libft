/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zeyad <zeyad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 20:28:05 by zh                #+#    #+#             */
/*   Updated: 2023/03/19 16:42:46 by zeyad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int				ft_isalnum(int c);

int				ft_isalpha(int c);

void			ft_bzero(void *s, size_t n);

int				ft_alnum(int c);

int				ft_atoi(const char *nptr);

int				ft_isascii(int c);

int				ft_isdigit(int c);

int				ft_isprint(int c);

void			*ft_memchr(const void *s, int c, size_t n);

int				ft_memcmp(const void *s1, const void *s2, size_t n);

void			*ft_memcpy(void *dest, const void *src, size_t n);

void			*ft_memmove(void *dest, const void *src, size_t n);

void			*ft_memset(void *s, int c, size_t n);

char			*ft_strchr(const char *s, int c);

size_t			ft_strlcat(char *dst, const char *src, size_t size);

size_t			ft_strlcpy(char *dst, const char *src, size_t size);

size_t			ft_strlen(const char *s);

int				ft_strncmp(const char *s1, const char *s2, size_t n);

char			*ft_strnstr(const char *h, const char *ne, size_t n);

char			*ft_strrchr(const char *s, int c);

int				ft_tolower(int c);

int				ft_toupper(int c);

void			*ft_calloc(size_t n, size_t size);

char			*ft_strdup(const char *s);

char			*ft_substr(char const *s, unsigned int strt, size_t ln);

char			*ft_strjoin(char const *s1, char const *s2);

char			*ft_strtrim(char const *s1, char const *set);

char			**ft_split(char const *s, char c);

char			*ft_itoa(int n);

char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void			ft_striteri(char *s, void (*f)(unsigned int, char*));

void			ft_putchar_fd(char c, int fd);

void			ft_putstr_fd(char *s, int fd);

void			ft_putcharn_fd(char c, int n, int fd);

void			ft_putendl_fd(char *s, int fd);

void			ft_putnbr_fd(int n, int fd);

//linked list stuff
t_list			*ft_lstnew(void *content);

void			ft_lstadd_front(t_list **lst, t_list *new);

int				ft_lstsize(t_list *lst);

void			ft_lstadd_back(t_list **lst, t_list *new);

t_list			*ft_lstlast(t_list *lst);

void			ft_lstdelone(t_list *lst, void (*del)(void*));

void			ft_lstclear(t_list **lst, void (*del)(void*));

void			ft_lstiter(t_list *lst, void (*f)(void *));

t_list			*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

void			ft_lstpop_front(t_list	**lst);

void			ft_lstpop_back(t_list	**lst);

//get next line stuff
char			*get_next_line(int fd);

//printf 
int				ft_printf(const char *format, ...);

char			*ft_utoa_radix(unsigned long int num, char *radix);

int				ft_min(int x, int y);

int				ft_max(int x, int y);

char			*ft_concat(int n, ...);

//algorithm

int				ft_swap(void *it1, void *it2, int size);

int				ft_reverse(void *start, void *end, int size);

#endif
