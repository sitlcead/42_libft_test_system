/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: narchiba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 07:45:12 by narchiba          #+#    #+#             */
/*   Updated: 2018/11/27 11:16:57 by narchiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# define ARR_SIZE 10
# define A 3
# define B 2

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				*ft_vector_get_first_n_elements\
						(void *ft_vector, size_t elem_count);
void				*ft_vector_get_last_n_elements\
						(void *ft_vector, size_t elem_count);
size_t				ft_vector_get_len(void *ft_vector);
long double			ft_ceill(long double x);
long double			ft_floorl(long double x);
void				*ft_vector_push_back(void *ft_vector, size_t elem);
int					ft_vector_is_empty(void *ft_vector);
size_t				ft_vector_front(void *ft_vector);
size_t				ft_vector_pop_back(void *ft_vector);
void				ft_vector_free(void *ft_vector);
void				*ft_vector_create(size_t elem_byte_size);
size_t				ft_vector_back(void *ft_vector);
void				ft_bzero(void *s, size_t n);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
size_t				ft_strlcat(char *dest, char const *src, size_t size);
t_list				*ft_lstnew(void const *content, size_t content_size);
size_t				ft_strlcpy(char *dest, char const *src, size_t size);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isalpha(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_atoi(char const *str);
int					ft_tolower(int c);
int					ft_isdigit(int c);
int					ft_strncmp(char const *s1, char const *s2, size_t n);
int					ft_strcmp(char const *s1, char const *s2);
char				*ft_strstr(char const *haystack, char const *needle);
char				*ft_strnstr(char const *haystack, \
		char const *needle, size_t n);
char				*ft_strrchr(char const *s, int c);
char				*ft_strchr(char const *s, int c);
char				*ft_strncat(char *dest, char const *src, size_t n);
char				*ft_strcat(char *dest, char const *src);
char				*ft_strncpy(char *dest, char const *src, size_t n);
char				*ft_strcpy(char *dest, char const *src);
char				*ft_strdup(char const *src);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				ft_strdel(char **as);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memset(void *s, int c, size_t n);
char				**ft_strsplit(char const *s, char c);
char				*ft_itoa(int n);
char				*ft_strtrim(char const *s);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_strequ(char const *s1, char const *s2);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strmap(char const *s, char (*f)(char));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_striter(char *s, void (*f)(char *));
void				ft_strclr(char *s);
char				*ft_strnew(size_t size);
void				ft_putchar(char c);
void				ft_putptr(void *p);
void				ft_memdel(void **ap);
void				*ft_memalloc(size_t size);
void				ft_putnbr(int n);
void				ft_putstr(char const *s);
size_t				ft_strlen(char const *s);
void				ft_putendl(char const *s);
void				ft_putchar_fd(char c, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);

#endif
