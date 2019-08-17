/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmansou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 16:32:37 by ahmansou          #+#    #+#             */
/*   Updated: 2019/01/31 16:36:39 by ahmansou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *intarr;
	int i;
	int j;

	if (min >= max)
		return (NULL);
	intarr = (int*)malloc(sizeof(int) * (max - min));
	i = min;
	j = 0;
	while (i < max)
	{
		intarr[j] = i;
		i++;
		j++;
	}
	return (intarr);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	if (min >= max)
		return (0);
	*range = ft_range(min, max);
	if (*range == 0)
		return (0);
	return (max - min);
}
