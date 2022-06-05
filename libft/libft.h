/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmakinen <mmakinen@hive.fi>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:14:12 by mmakinen          #+#    #+#             */
/*   Updated: 2022/05/06 10:50:09 by mmakinen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

# define BUFF_SIZE 4096
# define MAX_FD 8192
# define TRUE 1
# define FALSE 0

typedef struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

/*
mem functions
*/
void	*ft_memset(void *s, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void*src, size_t len);
void	*ft_memchr(const void*s, int c, size_t len);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_memdel(void **ap);
void	*ft_memalloc(size_t size);
void	*ft_calloc(size_t count, size_t size);
/*
swap functions
*/
void	ft_swapchr(char *a, char *b);
void	ft_swapint(int *a, int *b);
void	ft_swapptr(void **a, void **b);
/*
ctype functions
*/
int		ft_isupper(int c);
int		ft_islower(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isbdigit(int c);
int		ft_isodigit(int c);
int		ft_isxdigit(int c);
int		ft_isdigit_base(int c, int base);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isblank(int c);
int		ft_isspace(int c);
int		ft_ispunct(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
/*
fd functions
*/
int		ft_openfd(char *filename, int *fd);
int		ft_closefd(int fd);
/*
math functions
*/
int		ft_abs(int num);
float	ft_lerp(float norm, float min, float max);
float	ft_norm(float num, float min, float max);
/*
atoi & itoa etc.
*/
int		ft_atoi(const char *nptr);
char	*ft_itoa(int n);
char	*ft_itobin(unsigned int num);
int		ft_isnumber(const char *str, int base);
int		ft_isprefix(const char *str, int base);
/*
atoi & itoa
*/
int		ft_atoi(const char *nptr);
char	*ft_itoa(int n);
char	*ft_itobin(unsigned int num);
/*
put type functions
*/
void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
/*
str functions
*/
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t n);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	**ft_strsplit(char const *s, char c);
char	*ft_strtrim(char const *s);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strsub(char const *s, unsigned int start, size_t len);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striter(char *s, void (*f)(char*));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
void	ft_strclr(char *c);
void	ft_strdel(char **as);
char	*ft_strnew(size_t size);
/*
lst functions
*/
t_list	*ft_lstnew(void const *content, size_t content_size);
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void	ft_lstadd(t_list **alst, t_list *new);
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
/*
free array
*/
void	*ft_arrfree(char **arr);
/*
Get_next_line
*/
int		get_next_line(const int fd, char **line);
/*
error handling
*/
void	ft_error(const char *str);

#endif
