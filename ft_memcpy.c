/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguedes <fguedes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 23:45:51 by fguedes           #+#    #+#             */
/*   Updated: 2020/01/26 01:09:33 by fguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;
	unsigned char		*ptr2;

	i = 0;
	ptr = (unsigned char*)src;
	ptr2 = (unsigned char*)dst;
	if (dst == src)
	{
		return (dst);
	}
	while (i < n)
	{
		ptr2[i] = ptr[i];
		i++;
	}
	return (dst);
}
