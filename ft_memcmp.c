/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguedes <fguedes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 23:29:45 by fguedes           #+#    #+#             */
/*   Updated: 2020/01/26 01:15:05 by fguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*cmp1;
	unsigned char	*cmp2;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	cmp1 = (unsigned char*)s1;
	cmp2 = (unsigned char*)s2;
	while (*cmp1 == *cmp2 && i < n - 1)
	{
		cmp1++;
		cmp2++;
		i++;
	}
	return ((int)(*cmp1 - *cmp2));
}
