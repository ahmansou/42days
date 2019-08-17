/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmansou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 22:07:10 by ahmansou          #+#    #+#             */
/*   Updated: 2019/01/19 13:58:29 by ahmansou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int result;

	result = 1;
	i = 1;
	if (power < 0)
		return (0);
	while (i++ <= power)
		result = result * nb;
	return (result);
}
