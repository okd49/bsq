/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuokada <yuokada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 17:04:31 by yuokada           #+#    #+#             */
/*   Updated: 2021/03/10 01:43:10 by yuokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# define BUF_SIZE = 4096

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/types.h>
#include <sys/stat.h>

typedef struct	s_data
{
	char	*mapbuf;
	char	**char_map;
	int		**int_map;
	int		x_length;
	int		y_length
	char	empty;
	char	obstacle;
	char 	full;
}				t_data

void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strlenton(char *str);
void	ft_put_error(int nb);
char	*ft_readfile(char *file);
char	**ft_malloc_charmap(char **char_map, int n1, int n2);
int		**ft_malloc_intmap(char **int_map, int n1, int n2);
void	ft_str_to_charmap(char **char_map, char *str, int n1, int n2);
void	ft_get_data(char **char_map);
int		ft_get_min(int n1, int n2, int n3);
void	**ft_ctoi1(char **char_map);
void	**ft_ctoi2(char **char_map);
int		ft_find_max(int **int_map);
char	**ft_change_charmap(int n, char **char_map);
void	ft_print_charmap(char **char_map, int n1, int n2);

#endif
