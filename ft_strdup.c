/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguedes <fguedes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 19:02:14 by fguedes           #+#    #+#             */
/*   Updated: 2020/02/07 23:52:49 by fguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	size;

	size = ft_strlen(s1);
	if (!(dest = (char *)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	ft_memcpy(dest, s1, size + 1);
	return (dest);
}
