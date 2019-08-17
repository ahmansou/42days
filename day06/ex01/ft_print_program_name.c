/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmansou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 15:29:21 by ahmansou          #+#    #+#             */
/*   Updated: 2019/01/28 21:26:44 by ahmansou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc >= 1)
		while (argv[0][i] != '\0')
		{
			ft_putchar(argv[0][i]);
			i++;
		}
	ft_putchar('\n');
	return (0);
}
