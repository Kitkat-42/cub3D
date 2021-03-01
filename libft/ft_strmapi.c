/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:45:17 by seojeong          #+#    #+#             */
/*   Updated: 2021/03/01 21:45:18 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ret;

	i = 0;
	if (!s)
		return (NULL);
	ret = ft_strdup(s);
	if (ret == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		ret[i] = (*f)(i, s[i]);
		++i;
	}
	return (ret);
}
