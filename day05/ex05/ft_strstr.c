/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmansou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 21:41:38 by ahmansou          #+#    #+#             */
/*   Updated: 2019/01/29 23:11:09 by ahmansou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!to_find[0])
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && to_find[j])
			j++;
		if (!to_find[j])
			return (str + i);
		j = 0;
		i++;
	}
	return (0);
}
