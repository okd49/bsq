/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuokada <yuokada@student.42tokyo.j>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 17:04:31 by yuokada           #+#    #+#             */
/*   Updated: 2021/03/09 12:55:28 by yuokada          ###   ########.fr       */
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
	char	map;
	char	**char_map;
	int		**int_map;
	int		num_of_row;
	char	empty;
	char	obstacle;
	char 	full;
}				t_data

void	ft_putstr(char *str);
int		ft_strlen(char *str);
char	*ft_readfile(char *file);


#endif
