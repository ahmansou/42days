/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmansou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 20:43:28 by ahmansou          #+#    #+#             */
/*   Updated: 2019/01/29 21:47:33 by ahmansou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int result;
	int i;
	int is_signed;

	i = 0;
	result = 0;
	is_signed = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	if (str[i] == '-')
	{
		is_signed = -1;
		i++;
	}
	if (str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * is_signed);
}
