/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greyrol <greyrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 15:45:30 by greyrol           #+#    #+#             */
/*   Updated: 2013/12/03 17:06:42 by greyrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <libft.h>

# define BUFF_SIZE 1000
# define TRUE 1
# define FALSE 0

typedef int	t_bool;

int	get_next_line(const int fd, char **line);

#endif /* !GET_NEXT_LINE_H */
