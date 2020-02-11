/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguedes <fguedes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 17:41:32 by fguedes           #+#    #+#             */
/*   Updated: 2020/02/08 18:25:41 by fguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		check_string(const char *haystack, const char *needle, size_t n,
unsigned i)
{
	unsigned int a;

	a = 0;
	while (haystack[a] == needle[a] && needle[a] != '\0'
	&& i < n)
	{
		a++;
		i++;
	}
	if (needle[a] == '\0')
	{
		return (1);
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	unsigned int i;

	i = 0;
	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	else
	{
		while (haystack[i] != '\0' && i < n)
		{
			if (haystack[i] == needle[0])
			{
				if (check_string(&haystack[i], needle, n, i))
				{
					return ((char *)haystack + i);
				}
			}
			i++;
		}
		return (0);
	}
}
