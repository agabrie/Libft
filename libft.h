/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zee <zee@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 15:42:01 by agabrie           #+#    #+#             */
/*   Updated: 2018/09/01 06:50:25 by zee              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define BUFF_SIZE 1
# define RSET "\033[00m"
# define FBLK "\033[30m"
# define FRED "\033[31m"
# define FGRN "\033[32m"
# define FYEL "\033[33m"
# define FBLU "\033[34m"
# define FMAG "\033[35m"
# define FCYN "\033[36m"
# define FWHT "\033[37m"
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;
typedef struct	s_gnl
{
	char	*buff;
	char	*tmp;
	int		ret;
	int		i;
	char	delimiter;
}				t_gnl;
typedef struct	s_point
{
	int		x;
	int		y;
	double	priority;
}				t_point;
void			*ft_memset(void *b, int c, size_t len);
void			*ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
size_t			ft_strlen(const char *str);
char			*ft_strdup(const char *src);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strncpy(char *dst, const char *src, size_t len);
char			*ft_strcat(char *s1, const char *s2);
char			*ft_strncat(char *s1, const char *s2, size_t n);
size_t			ft_strlcat(char *dst, const char *src, size_t dstsize);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strstr(const char *haystack, const char *needle);
char			*ft_strnstr(const char *hay, const char *needle, size_t len);
int				ft_strcmp(char const *s1, char const *s2);
int				ft_strncmp(char const *s1, char const *s2, size_t n);
int				ft_atoi(const char *str);
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_toupper(int c);
int				ft_tolower(int c);
void			*ft_memalloc(size_t size);
void			ft_memdel(void **ap);
char			*ft_strnew(size_t size);
void			ft_strdel(char **as);
void			ft_strclr(char *s);
void			ft_striter(char *s, void(*f)(char *));
void			ft_striteri(char *s, void(*f)(unsigned int, char *));
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_strequ(char const *s1, char const *s2);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s);
char			**ft_strsplit(char const *s, char c);
char			*ft_itoa(int n);
void			ft_putchar(char c);
void			ft_putstr(char const *s);
void			col_str_fd(char *colour, char *str, int fd);
void			ft_putendl(char const *s);
void			ft_putnbr(int n);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char const *s, int fd);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr_fd(int n, int fd);
t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
int				ft_islower(int c);
int				ft_isupper(int c);
int				ft_isspace(int c);
int				ft_intlen(int c);
char			*ft_strrev(char *s);
int				ft_wcount(const char *s, char c, int i);
int				ft_find_word(const char *s, char c, char **stra, int i);
int				ft_conchar(const char *str, char c);
int				ft_index_of_char(const char *str, char c);
char			*ft_strndup(const char *src, size_t i);
char			*ft_dup_conchar(const char *str, char c);
int				get_next(int fd, char **line, char delimiter);
int				get_next_line(int fd, char **line);
void			ft_nbrendl_fd(int nbr, int fd);
void			ft_nbrendl(int nbr);
double			ft_power(double number, double exponent);
double			ft_root(double number, double exponent);
double			calc_dist(t_point *c1, t_point *c2);
void			ft_putarr_fd(char **arr, int fd);
void			ft_putarr(char **arr);
t_point			set_point(int y, int x);
void			put_coords_fd(t_point *point, int fd);
void			col_char_fd(char *colour, char c, int fd);
void			col_endl_fd(char *colour, char *str, int fd);
int				ft_isnum(char *str);
void			freearray(char **arr);
void			arrcpy(char **a, char **b);
int				gnl(const int fd, char **line);
int				g_n_l(const int fd, char **line);
#endif
