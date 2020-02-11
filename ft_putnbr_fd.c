/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fguedes <fguedes@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 22:28:39 by fguedes           #+#    #+#             */
/*   Updated: 2020/02/01 22:41:03 by fguedes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	unsigned int number;

	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		number = nb * -1;
	}
	else
		number = nb;
	if (number >= 10)
		ft_putnbr_fd(number / 10, fd);
	ft_putchar_fd(number % 10 + 48, fd);
}
