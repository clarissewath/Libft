/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwathany <cwathany@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 19:38:44 by cwathany          #+#    #+#             */
/*   Updated: 2021/05/05 19:49:25 by cwathany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t i;
	unsigned char ch;

	ch = (unsigned char)c;

	if(!dest && !src)
		return (NULL);

	i = 0;
	while(i < n && i != ch)
	{
		((unsigned char*)dest)[i] = ((unsigned char*)src[i];
		++i;
	}

	return (dest);
}
