/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greyrol <greyrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 15:45:30 by greyrol           #+#    #+#             */
/*   Updated: 2013/12/14 15:00:09 by greyrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# define BUFF_SIZE 1000
# define TRUE 1
# define FALSE 0

typedef int	t_bool;

int		get_next_line(const int fd, char **line);
void	*ft_memalloc(size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_bzero(void *string, size_t n);
void	*ft_memset(void *string, int c, size_t n);
char	*ft_strcpy(char *dest, const char *str);
char	*ft_strdup(const char *str);
size_t	ft_strlen(const char *str);


#endif /* !GET_NEXT_LINE_H */
