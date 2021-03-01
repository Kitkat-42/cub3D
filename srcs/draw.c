/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:47:24 by seojeong          #+#    #+#             */
/*   Updated: 2021/03/01 21:47:25 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	draw_floor_ceiling(t_info *info)
{
	int	x;
	int	y;

	y = 0;
	while (y < info->screen_height)
	{
		x = 0;
		while (x < info->screen_width)
		{
			if (y > info->screen_height / 2)
				info->buf[y][x] = info->floor_color;
			else
				info->buf[y][x] = info->ceiling_color;
			x++;
		}
		y++;
	}
}

void	draw(t_info *info)
{
	int	x;
	int	y;

	y = 0;
	while (y < info->screen_height)
	{
		x = 0;
		while (x < info->screen_width)
		{
			info->img.data[y * info->screen_width + x] = info->buf[y][x];
			x++;
		}
		y++;
	}
	mlx_put_image_to_window(info->mlx, info->win, info->img.img, 0, 0);
}
