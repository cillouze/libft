/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tcillard <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 16:34:27 by tcillard          #+#    #+#             */
/*   Updated: 2018/11/12 19:27:35 by tcillard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_list	t_list;

struct	s_list
{
	void	*content;
	size_t	content_size;
	t_list	*next;
};

t_list	*ft_lstmap(t_list *lst, t_list * (*f)(t_list *elem));

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));

void	ft_lstadd(t_list **alst, t_list *new);

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));

t_list	*ft_lstnew(void const *content, size_t content_size);

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));

long long int		ft_atoi(char *s1);

int		ft_sqrt(int n);

int		ft_isalnum(int c);

int		ft_isalpha(int c);

int		ft_isascii(int c);

int		ft_isdigit(int c);

int		ft_isprint(int c);

void	ft_bzero(void *s, size_t n);

char	*ft_itoa(int i);

char	*ft_strncpy(char *dest, const char *src, size_t count);

void	*ft_memalloc(size_t n);

void	*ft_memccpy(void *dst, const void *src, int c, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);

int     ft_memcmp(const void *s1, const void *s2, size_t n);

void    *ft_memcpy(void *dst, void const *src, size_t n);

void    ft_memdel(void  **zone);

void    *ft_memmove(void *dest, const void *src, size_t n);

void    *ft_memset(void *s, int c, size_t  n);

void	ft_putchar(char c);

void    ft_putchar_fd(char c, int fd);

void    ft_putendl(const char *s);

void    ft_putendl_fd(const char *s, int fd);

void    ft_putnbr(int n);

void    ft_putnbr_fd(int n, int fd);

void    ft_putstr(const char *s);

void    ft_putstr_fd(const char *s, int fd);

char    *ft_strcat(char *dest, const char *src);

char    *ft_strchr(const char *s, int c);

void    ft_strclr(char *s);

int     ft_strcmp(char *s1, char *s2);

char    *ft_strcpy(char *dest, char *src);

void    ft_strdel(char  **as);

char    *ft_strdup(char *c);

int     ft_strequ(char const *s1, char const *s2);

void    ft_striter(char *s, void (*f)(char *));

void    ft_striteri(char *s, void (*f)(unsigned int, char *));

char    *ft_strjoin(char const *s1, char const *s2);

size_t		ft_strlcat(char *dst, const char *src, size_t size);

size_t     	ft_strlen(char *c);

size_t             ft_strlen_const(const char *c);

char    *ft_strmap(char const *s, char (*f)(char));

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));

char    *ft_strncat(char *dest, const char *src, size_t  n);

int     ft_strncmp(char *s1, char *s2, size_t n);

int     ft_strnequ(char const *s1, char const *s2, size_t n);

char    *ft_strnew(size_t n);

char    *ft_strnstr(char *search, char *find, size_t n);

char    *ft_strrchr(const char *s, int c);

char    **ft_strsplit(char const *s, char c);

char    *ft_strstr(char *search, char *find);

char    *ft_strsub(char const *s, unsigned int start, size_t len);

char    *ft_strtrim(char const *s);

int		ft_tolower(int c);

int     ft_toupper(int c);

#endif
