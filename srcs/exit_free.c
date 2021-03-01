/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_free.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:47:30 by seojeong          #+#    #+#             */
/*   Updated: 2021/03/01 21:47:31 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	ft_free(void *s)
{
	free(s);
	s = 0;
}

int		ft_exit(int ret)
{
	exit(ret);
	return (ret);
}

void	str_exit(char *str)
{
	ft_putstr("Error\n");
	ft_putstr(str);
	exit(0);
}

void	free_double_ptr(char **str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		str[i] = 0;
		i++;
	}
	free(str);
	str = 0;
}

void	all_free(t_info *info)
{
	if (info->img.img)
		mlx_destroy_image(info->mlx, info->img.img);
	if (info->sprite)
		ft_free(info->sprite);
	if (info->buf)
		free_double_ptr((void *)info->buf);
	if (info->z_buf)
		ft_free(info->z_buf);
	if (info->texture)
		free_double_ptr(info->map);
	if (info->mlx && info->win)
		mlx_destroy_image(info->mlx, info->win);
	exit(0);
}
