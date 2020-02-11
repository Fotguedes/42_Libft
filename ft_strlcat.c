/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguedes <fguedes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 18:56:45 by fguedes           #+#    #+#             */
/*   Updated: 2020/02/08 16:21:32 by fguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dest[i] && i < dstsize)
		i++;
	j = i;
	while (src[i - j] && i + 1 < dstsize)
	{
		dest[i] = src[i - j];
		i++;
	}
	if (j < dstsize)
		dest[i] = '\0';
	return (j + ft_strlen(src));
}
