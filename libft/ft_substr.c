/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <ybendavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/11 16:05:10 by ybendavi          #+#    #+#             */
/*   Updated: 2021/01/11 14:00:45 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	substrlen(char const *s, unsigned int start, size_t len)
{
	if (len > ft_strlen(&s[start]))
		return (ft_strlen(&s[start]));
	else
		return (len);
}

char			*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;

	if (s == NULL)
		return (0);
	if (start >= ft_strlen(s))
	{
		if (!(dest = (char*)ft_calloc(sizeof(char), 1)))
			return (NULL);
		return (dest);
	}
	i = substrlen(s, start, len);
	if (!(dest = (char*)ft_calloc(sizeof(char), i + 1)))
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		dest[i] = s[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return (dest);
}
