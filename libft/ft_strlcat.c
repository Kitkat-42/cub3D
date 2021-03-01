/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:45:02 by seojeong          #+#    #+#             */
/*   Updated: 2021/03/01 21:45:03 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;
	size_t	dstlen;
	size_t	ret;

	i = 0;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	else
		ret = srclen + dstlen;
	while (dstlen < dstsize - 1)
	{
		if (src[i] == 0)
			break ;
		dst[dstlen++] = src[i++];
	}
	dst[dstlen] = '\0';
	return (ret);
}
