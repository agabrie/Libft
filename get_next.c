/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agabrie <agabrie@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 07:08:27 by agabrie           #+#    #+#             */
/*   Updated: 2018/08/28 17:14:35 by agabrie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	read_line(int fd, t_gnl *g)
{
	char *string;

	while (!ft_conchar(g->tmp, g->delimiter))
	{
		g->ret = read(fd, g->buff, BUFF_SIZE);
		string = ft_strdup(g->tmp);
		free(g->tmp);
		g->tmp = ft_strjoin(string, g->buff);
		free(string);
		ft_strclr(g->buff);
		if (g->ret == 0)
			break ;
	}
	ft_strdel(&g->buff);
}

int		handle_return(t_gnl *g, char **line, char *str)
{
	if (g->ret > 0 || ft_strlen(*line) || ft_strlen(str))
		return (1);
	if (g->ret < 0)
		return (-1);
	else
		return (0);
}

void	norm(t_gnl *g, char **str, char **line)
{
	if (ft_conchar(g->tmp, g->delimiter))
	{
		free(*str);
		*str = ft_dup_conchar(g->tmp, g->delimiter);
		g->i = ft_index_of_char(g->tmp, g->delimiter) + 1;
		free(*line);
		*line = ft_strdup(*str);
		g->ret = 1;
		free(*str);
		*str = ft_strdup(g->tmp + g->i);
	}
	else
	{
		free(*line);
		*line = ft_strdup(g->tmp);
		free(*str);
	}
	free(g->tmp);
}

int		get_next(int fd, char **line, char delimiter)
{
	static char	*str;
	t_gnl		g;

	g.delimiter = delimiter;
	g.buff = ft_strnew(BUFF_SIZE);
	if (fd < 0 || !line || read(fd, NULL, 0) < 0 || !(g.buff))
		return (-1);
	if (!str)
		str = ft_strdup("");
	g.tmp = ft_strdup(str);
	read_line(fd, &g);
	norm(&g, &str, line);
	return (handle_return(&g, line, str));
}
