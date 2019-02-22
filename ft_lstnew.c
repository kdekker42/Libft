/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstnew.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: kpereira <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/25 16:43:18 by kpereira      #+#    #+#                 */
/*   Updated: 2019/01/25 16:43:19 by kpereira      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (new == 0)
		return (0);
	if (content == 0)
	{
		new->content = 0;
		new->content_size = 0;
	}
	else
	{
		if (!(new->content = malloc(content_size)))
			return (0);
		new->content = ft_memcpy(new->content, content, content_size);
		new->content_size = content_size;
	}
	new->next = 0;
	return (new);
}
