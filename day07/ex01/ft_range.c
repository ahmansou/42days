/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmansou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 16:28:05 by ahmansou          #+#    #+#             */
/*   Updated: 2019/01/31 16:31:36 by ahmansou         ###   ########.fr       */
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
