/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguedes <fguedes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/02 19:23:52 by fguedes           #+#    #+#             */
/*   Updated: 2020/03/05 19:06:55 by fguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(const char *s, char c)
{
	unsigned int	i;
	int				count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (count);
}

char			**ft_split(char const *s, char c)
{
	char	**res;
	int		start;
	int		end;
	int		arr_tab;

	if (!s || !c)
		return (NULL);
	start = 0;
	end = 0;
	arr_tab = 0;
	if (!(res = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1))))
		return (0);
	while (arr_tab < count_words(s, c))
	{
		while (s[start] == c && s[start] != '\0')
			start++;
		end = start;
		while (s[end] != c && s[end] != '\0')
			end++;
		res[arr_tab] = ft_substr(s, start, (end - start));
		arr_tab++;
		start = end;
	}
	res[arr_tab] = 0;
	return (res);
}
