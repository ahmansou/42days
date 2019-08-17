/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmansou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 16:37:45 by ahmansou          #+#    #+#             */
/*   Updated: 2019/01/31 21:45:09 by ahmansou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	k = -1;
	str = malloc(sizeof(argv));
	if (str == NULL)
		return (NULL);
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j])
			str[++k] = argv[i][j];
		str[++k] = '\n';
	}
	str[k] = '\0';
	return (str);
}
