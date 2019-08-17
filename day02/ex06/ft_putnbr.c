/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmansou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/12 15:04:14 by ahmansou          #+#    #+#             */
/*   Updated: 2019/01/13 13:10:22 by ahmansou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char	c);

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		if (nb < -10)
			ft_putnbr(nb / 10);
		else
			ft_putchar('-');
		ft_putchar(48 + (nb % 10) * -1);
	}
	else
	{
		if (nb > 10)
			ft_putnbr(nb / 10);
		ft_putchar(48 + nb % 10);
	}
}
