/************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwathany <cwathany@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 19:40:46 by cwathany          #+#    #+#             */
/*   Updated: 2021/05/06 17:42:47 by cwathany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	
	if(!dest && !src)
		return (NULL);

	i = 0;
	while(i < n)
	{
		((unsigned char*)dest)[i] = ((unsigned char*)src)[i]; 
		++i;
	}

	return (dest);
}
