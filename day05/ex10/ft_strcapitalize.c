/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmansou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 16:41:32 by ahmansou          #+#    #+#             */
/*   Updated: 2019/01/29 21:55:02 by ahmansou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_alpha(char c)
{
	if ((c >= 97 && c <= 122) ||
			(c >= 65 && c <= 90) ||
			(c >= 48 && c <= 57))
		return (1);
	return (0);
}

int		lowercase(char c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

int		uppercase(char c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		while (is_alpha(str[i]))
		{
			if (lowercase(str[i]) && (i == 0 || !is_alpha(str[i - 1])))
				str[i] = str[i] - 32;
			if (uppercase(str[i]) && i != 0 && is_alpha(str[i - 1]))
				str[i] = str[i] + 32;
			i++;
		}
		i++;
	}
	return (str);
}
