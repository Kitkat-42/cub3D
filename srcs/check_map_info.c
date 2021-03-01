/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map_info.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:47:19 by seojeong          #+#    #+#             */
/*   Updated: 2021/03/01 21:47:20 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	check_map_info(t_info *info)
{
	int	i;
	int	j;

	if (!info->map_width || !info->map_height)
		str_exit("Map width or height is wrong!\n");
	check_map_top(info);
	i = 0;
	while (i < info->map_height - 1)
	{
		j = 0;
		check_map_left(info, i, j);
		while (j < (int)ft_strlen(info->map[i]))
		{
			check_map_middle(info, i, j);
			j++;
		}
		check_map_right(info, i, j);
		i++;
	}
	check_map_bottom(info, i - 1);
}
