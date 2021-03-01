/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seojeong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:43:36 by seojeong          #+#    #+#             */
/*   Updated: 2021/03/01 21:43:37 by seojeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_ele;

	new_ele = (t_list *)malloc(sizeof(t_list));
	if (!new_ele)
		return (NULL);
	new_ele->content = content;
	new_ele->next = NULL;
	return (new_ele);
}
