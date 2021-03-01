/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:45:42 by seojeong          #+#    #+#             */
/*   Updated: 2021/03/01 21:45:43 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	valid_len(char const *s, unsigned int start, size_t len)
{
	size_t i;

	i = 0;
	while (i < len)
	{
		if (s[start + i] == 0)
			break ;
		i++;
	}
	return (i);
}

char		*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	l;
	char	*sub;

	l = valid_len(s, start, len);
	sub = (char *)malloc(sizeof(char) * (l + 1));
	if (sub == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		sub[0] = '\0';
		return (sub);
	}
	i = 0;
	while (i < l)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
