/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmansou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/14 19:04:30 by ahmansou          #+#    #+#             */
/*   Updated: 2019/01/14 20:38:43 by ahmansou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	swp;
	int		len;
	int		i;

	len = 0;
	i = 0;
	while (str[len] != '\0')
		len++;
	len--;
	while (i < len)
	{
		swp = str[i];
		str[i] = str[len];
		str[len] = swp;
		i++;
		len--;
	}
	return (str);
}
