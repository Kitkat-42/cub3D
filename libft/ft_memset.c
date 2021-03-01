/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:44:14 by seojeong          #+#    #+#             */
/*   Updated: 2021/03/01 21:44:15 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t i;

	if (len == 0)
		return (b);
	i = 0;
	while (i < len)
		((unsigned char *)b)[i++] = (unsigned char)c;
	return (b);
}
