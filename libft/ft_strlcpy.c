/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:45:07 by seojeong          #+#    #+#             */
/*   Updated: 2021/03/01 21:45:08 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ret;

	ret = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (ret);
	while (src[i])
	{
		if (i >= dstsize - 1)
			break ;
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ret);
}
