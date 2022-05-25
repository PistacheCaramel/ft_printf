/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <ybendavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 20:20:34 by ybendavi          #+#    #+#             */
/*   Updated: 2021/01/10 20:57:33 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s1;

	i = 0;
	s1 = (char*)s;
	while (s1[i])
	{
		if (s1[i] == (unsigned char)c)
			return (&s1[i]);
		i++;
	}
	if (s1[i] == c)
		return (&s1[i]);
	return (NULL);
}
