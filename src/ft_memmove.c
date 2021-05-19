/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cwathany <cwathany@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 17:21:09 by cwathany          #+#    #+#             */
/*   Updated: 2021/05/07 18:35:59 by cwathany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char 		*d;
	const unsigned char 	*s;

	if(!dest && !src)
		return (NULL);

	if(dest < src)
		ft_memcpy(dest, src, len);
	else
	{
		d = dest + len;
		s = src + len;
		while(len--)
			*--d = *--s;
	}

	return (dest);
}

