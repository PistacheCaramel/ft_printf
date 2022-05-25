/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybendavi <ybendavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 20:23:55 by ybendavi          #+#    #+#             */
/*   Updated: 2020/12/23 12:23:15 by ybendavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*tab;
	size_t			i;

	if (!(tab = malloc(nmemb * size)))
		return (NULL);
	i = 0;
	while (i < nmemb * size)
	{
		tab[i] = 0;
		i++;
	}
	return (tab);
}
