/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguedes <fguedes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 23:27:30 by fguedes           #+#    #+#             */
/*   Updated: 2020/01/24 20:16:33 by fguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char	*last_found;

	last_found = 0;
	while (*s != '\0')
	{
		if (*s == c)
		{
			last_found = (char*)s;
		}
		s++;
	}
	if (c == '\0')
	{
		last_found = (char*)s;
	}
	return (last_found);
}
