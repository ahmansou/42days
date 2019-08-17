/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmansou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/16 16:56:06 by ahmansou          #+#    #+#             */
/*   Updated: 2019/01/17 14:22:15 by ahmansou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	r;
	int	is_prime;

	is_prime = 0;
	if (nb <= 2)
		return (2);
	while (is_prime == 0)
	{
		r = nb - 1;
		is_prime = 1;
		while (r > 1)
		{
			if (nb % r == 0)
			{
				is_prime = 0;
				break ;
			}
			r--;
		}
		if (is_prime == 1)
			return (nb);
		nb++;
	}
	return (0);
}
