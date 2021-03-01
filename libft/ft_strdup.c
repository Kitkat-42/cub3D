/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:44:51 by seojeong          #+#    #+#             */
/*   Updated: 2021/03/01 21:44:52 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*ret;

	len = ft_strlen(s1);
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (ret == 0)
		return (NULL);
	len = 0;
	while (s1[len])
	{
		ret[len] = s1[len];
		len++;
	}
	ret[len] = '\0';
	return (ret);
}
