/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuokada <yuokada@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 16:21:24 by yuokada           #+#    #+#             */
/*   Updated: 2021/03/10 01:43:13 by yuokada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, int **argv)
{
	t_data *data;
	
	data->mapbuf = ft_readfile(argv[1]);
	data->y_length = ft_strlenton(ft_readfile(argv[1]));
	/* **char_map = buf KAKUNOU SHITAI */
	ft_get_data(**char_map);
	
	

