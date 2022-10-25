/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbennani <mbennani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 06:04:33 by mbennani          #+#    #+#             */
/*   Updated: 2022/10/25 21:58:45 by mbennani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_list
{
	char			*content;
	struct s_list	*next;
}				t_list;

char	*get_next_line(int fd);
void	buff_read(int fd, t_list **buffer, int *redp);
void	buff_add(t_list **buffer, char *buff, int red);
void	ext_line(t_list *buffer, char **line);
void	buff_clear(t_list **buffer);
int		find_nline(t_list *buffer);
t_list	*ft_lstlast(t_list *buffer);
void	line_alloc(char **line, t_list *buffer);
void	buff_free(t_list *buffer);
int		ft_strlen(const char *str);

#endif