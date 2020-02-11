/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguedes <fguedes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 21:57:04 by fguedes           #+#    #+#             */
/*   Updated: 2020/02/08 18:26:49 by fguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	long	nbr;
	size_t	len;
	char	*str;

	nbr = n;
	len = (nbr > 0) ? 0 : 1;
	nbr = (nbr > 0) ? nbr : -nbr;
	while (n)
	{
		n = n / 10;
		len++;
	}
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	*(str + len--) = '\0';
	while (nbr > 0)
	{
		*(str + len--) = nbr % 10 + '0';
		nbr /= 10;
	}
	if (len == 0 && str[1] == '\0')
		*(str + len) = '0';
	if (len == 0 && str[1] != '\0')
		*(str + len) = '-';
	return (str);
}
