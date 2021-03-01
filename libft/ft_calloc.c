/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:41:50 by seojeong          #+#    #+#             */
/*   Updated: 2021/03/01 21:41:52 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;
	size_t	i;

	ret = malloc(sizeof(char) * (count * size));
	if (!ret)
		return (NULL);
	i = 0;
	while (i < count * size)
	{
		((char*)ret)[i] = 0;
		++i;
	}
	return (ret);
}
