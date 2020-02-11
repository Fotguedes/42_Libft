/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguedes <fguedes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 00:14:26 by fguedes           #+#    #+#             */
/*   Updated: 2020/02/02 00:51:10 by fguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	s1_size;
	char	*res;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	i = 0;
	s1_size = ft_strlen(s1);
	if (!(res = (char *)malloc((s1_size + ft_strlen(s2) + 1) * sizeof(char))))
		return (NULL);
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
	{
		res[s1_size + i] = s2[i];
		i++;
	}
	res[s1_size + i] = '\0';
	return (res);
}
