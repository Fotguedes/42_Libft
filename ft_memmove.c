/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguedes <fguedes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 23:45:51 by fguedes           #+#    #+#             */
/*   Updated: 2020/01/26 18:35:15 by fguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	const unsigned char	*s;
	unsigned char		*d;

	i = 0;
	s = (unsigned char*)src;
	d = (unsigned char*)dst;
	if (s == d)
		return (dst);
	if (s < d)
	{
		while (++i <= len)
		{
			d[len - i] = s[len - i];
		}
	}
	else
	{
		while (len > 0)
		{
			*(d++) = *(s++);
			len--;
		}
	}
	return (dst);
}
