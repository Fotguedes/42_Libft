/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguedes <fguedes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 23:17:16 by fguedes           #+#    #+#             */
/*   Updated: 2020/02/07 23:26:39 by fguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	char	*tab;

	if (!s)
		return (NULL);
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	if (ft_strlen(s) < start)
	{
		if (!(tab = (char *)malloc(1)))
			return (0);
		tab[0] = '\0';
		return (tab);
	}
	if (!(tab = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	ft_strlcpy(tab, s + start, len + 1);
	return (tab);
}
