/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuokada <yuokada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 12:36:10 by yuokada           #+#    #+#             */
/*   Updated: 2021/03/10 01:43:11 by yuokada          ###   ########.fr       */
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

int	ft_strlenton(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\n')
		i++;
	return (i);
}

void	ft_put_error(int nb)
{
	if (nb == -1)
	{
		write(1, "error\n",6);
		return (1);
	}
}
char	*ft_readfile(char *file)
{
	int		char_len;
	int		fd;
	int		ret;
	char	*buf;

	char_len = ft_strlen(file);
	fd = open(file, O_RDONLY);
	ft_put_error(fd);
	buf = (char *)malloc(sizeof(char) * (char_len + 1))))
		ft_put_error(buf);
	ret = read(fd, buf, char_len);
	buf[ret] = '\0';
	close(fd);
	return (buf);
}

char **ft_malloc_charmap(char **char_map, int n1, int n2)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	char_map = (char **)malloc(sizeof(char *) * (n1 + 1));
	if (char_map == NULL)
		return (0);
	while (i < n2)
	{
		char_map[i] = (char *)malloc(sizeof(char) * (n2 + 1));
		if (char_map[i] == NULL)
		{
			while (j < i)
			{
				free(char_map[j]);
				j++;
			}
			free(char_map);
			return (0);
		}
		i++;
	}
	return (char_map);
}

int **ft_malloc_intmap(char **int_map, int n1, int n2)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	int_map = (int **)malloc(sizeof(int *) * n1);
	if (int_map == NULL)
		return (0);
	while (i < n2)
	{
		int_map[i] = (int *)malloc(sizeof(int) * n2);
		if (int_map[i] == NULL)
		{
			while (j < i)
			{
				free(int_map[j]);
				j++;
			}
			free(int_map);
			return (0);
		}
		i++;
	}
	return (int_map);
}

void	ft_str_to_charmap(char **char_map, char *str, int n1, int n2)
{
	int i;
	int x;
	int y;
	
	i = 0;
	x = 0;
	while (x <= n1 - 1)
	{
		y = 0;
		while (y <= n2)
		{
			char_map[x][y] = str[i];
			y++;
			i++;
		}
		x++;
	}
}

void	ft_get_data(char **map)
{
	t_data *data;
	
	data->x_length = map[0][0] - '0';
	data->empty = map[0][1];
	data->obstacle = map[0][2];
	data->full = map[0][3];
}

int	ft_get_min(int n1, int n2, int n3)
{
	int min;
	
	min = n1;
	if (n2 < min)
		min = n2;
	if (n3 < min)
		min < n3;
	return (min);
}

void	**ft_ctoi1(char **char_map)
{
	int x;
	int y;
	
	x = 0;
	y = 0;
	while (y <= (data->y_length - 1))
	{
		if (data->char_map[x][y] == data->obstacle)
			data->int_map[x][y] = 0;
		else
			data->int_map[x][y] = 1;
		y++;
	}
	x = 1;
	y = 0;
	while (x <= (data->x_length - 1))
	{
		if (data->char_map[x][y] == data->obstacle)
			data->int_map[x][y] = 0;
		else
			data->int_map[x][y] = 1;
		x++;
	}
}

void	**ft_ctoi2(char **char_map)
{
	int x;
	int y;
	
	x = 1;
	while (x <= (data->x_length -1))
	{
		y = 1;
		while (y <= (data->y_length -1))
		{
			if (data->char_map[x][y] == data->obstacle)
				data->int_map[x][y] = 0;
			else
				data->int_map[x][y] = get_min(data->int_map[x-1][y-1], data->int_map[x-1][y], data->int_map[x][y-1]) + 1;
			y++;
		}
		X++;
	}
}

int ft_find_max(int **int_map)
{
	int max;
	int x:
	int y;
	
	max = data->int_map[0][0];
	x = 0;
	while (x <= (data->x_length - 1))
	{
		y = 0;
		while (y <= (data->y_length - 1))
		{
			if (max < data->int_map[x][y])
				max = int_map[x][y];
			y++;
		}
		x++;
	}
	return (max);
}

char	**ft_change_charmap(int n, char **char_map)
{
	int x;
	int y;
	int i;
	int j;
	
	x = 0;
	while (x <= (data->x_length - 1))
	{
		y = 0;
		while (y <= (data->y_length - 1))
		{
			if (data->int_map[x][y] == max)
			{
				i = 0;
				while (i < max)
				{
					j = 0;
					while (j < max)
					{
						data->char_map[x-i][y-j] = data->full;
						j++;
					}
					i++;
				}
				return (data->char_map)
			}
			y++;
		}
		x++;
	}
}

void	ft_print_charmap(char **char_map, int n1, int n2)
{
	int x;
	int y;
	
	x = 0;
	while (x <= n1 -1)
	{
		y = 0;
		while (y <= n2)
		{
			write(1, char_map[x][y], 1);
			y++;
		}
		x++;
	}
}