/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguedes <fguedes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 05:16:34 by fguedes           #+#    #+#             */
/*   Updated: 2020/02/08 16:20:16 by fguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	int				count;

	count = 0;
	if (dst == NULL || src == NULL)
		return (count);
	while (src[count] != '\0')
	{
		count++;
	}
	i = 0;
	if (dstsize == 0)
	{
		return (count);
	}
	while (src[i] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (count);
}
