/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: greyrol <greyrol@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 15:45:30 by greyrol           #+#    #+#             */
/*   Updated: 2013/11/26 15:45:33 by greyrol          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static void	*ft_realloc(void *src, int size)
{
	void	*new;

	new = ft_memalloc(size);
	if (!new)
		return (NULL);
	if (src)
	{
		ft_memcpy(new, src, size);
		free(src);
	}
	return (new);
}

static int		get_char(const int fd, char *c)
{
	static int	i = 0;
	static char	buffer[BUFF_SIZE];
	static int	pb_size = BUFF_SIZE;

	if (i >= pb_size || i == 0)
	{
		i = 0;
		if ((pb_size = read(fd, buffer, BUFF_SIZE)) < 0)
			return (0);
	}
	if (pb_size == 0)
	{
		*c = '\0';
		i = -1;
	}
	else if (buffer[i] == '\n')
		*c = '\0';
	else
		*c = buffer[i];
	i++;
	return (pb_size);
}

int		get_next_line(const int fd, char **line)
{
	int		i;
	int		pb_size;
	char	*str;

	i = 0;
	pb_size = 1;
	if (fd < 0 || BUFF_SIZE < 1)
		return (-1);
	str = malloc((BUFF_SIZE + 1) * sizeof(*str));
	pb_size = get_char(fd, &str[i]);
	if (pb_size == 0)
		return (0);
	while (str[i] != '\0')
	{
		if (i % BUFF_SIZE == 0)
			str = ft_realloc(str, i + BUFF_SIZE + 1);
		pb_size = get_char(fd, &str[++i]);
	}
	str[++i] = '\0';
	*line = ft_strdup(str);
	free(str);
	return (1);
}
