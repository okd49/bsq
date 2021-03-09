/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuokada <yuokada@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 12:36:10 by yuokada           #+#    #+#             */
/*   Updated: 2021/03/09 12:49:25 by yuokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &str[i], 1);
		str++;
	}
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_readfile(char *file)
{
	int		char_len;
	int		fd;
	int		ret;
	char	*buf;

	char_len = ft_strlen(file);
	fd = open(file, O_RDONLY);
	if (fd == -1)
		return (0);
	if (!(buf = (char *)malloc(sizeof(char) * (char_len + 1))))
		return (0);
	ret = read(fd, buf, char_len);
	buf[ret] = '\0';
	close(fd);
	return (buf);
}

int get_conchar(char map)