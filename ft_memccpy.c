/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguedes <fguedes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 23:45:51 by fguedes           #+#    #+#             */
/*   Updated: 2020/01/27 20:06:15 by fguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ptr2;

	i = 0;
	ptr = (unsigned char*)src;
	ptr2 = (unsigned char*)dst;
	while (i < n)
	{
		ptr2[i] = ptr[i];
		if (ptr[i] == (unsigned char)c)
		{
			return ((void*)(dst + i + 1));
		}
		i++;
	}
	return (NULL);
}
