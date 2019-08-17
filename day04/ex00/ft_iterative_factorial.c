/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmansou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/15 14:35:22 by ahmansou          #+#    #+#             */
/*   Updated: 2019/01/21 16:45:07 by ahmansou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;
	int result;

	result = nb;
	n = nb - 1;
	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0 || nb >= 13)
		return (0);
	while (n > 0)
	{
		result = result * n;
		n--;
	}
	return (result);
}
