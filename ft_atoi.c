/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguedes <fguedes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 21:15:25 by fguedes           #+#    #+#             */
/*   Updated: 2020/01/28 21:08:41 by fguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int sinal;
	int num;
	int last_num;

	sinal = -1;
	num = 0;
	last_num = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'
	|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sinal *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9' && *str)
	{
		num = (num * 10) - (*str - '0');
		if (last_num < num)
			return (sinal == -1 ? -1 : 0);
		last_num = num;
		str++;
	}
	return (num * sinal);
}
