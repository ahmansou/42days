/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmansou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 20:39:20 by ahmansou          #+#    #+#             */
/*   Updated: 2019/01/14 20:45:55 by ahmansou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int i;
	int j;
	int swp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				swp = tab[j];
				tab[j] = tab[i];
				tab[i] = swp;
			}
			j++;
		}
		i++;
	}
}
