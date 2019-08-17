/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahmansou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 16:11:23 by ahmansou          #+#    #+#             */
/*   Updated: 2019/01/28 16:27:03 by ahmansou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_param(int argc, char **argv, int *index)
{
	int i;
	int j;

	i = 0;
	while (i < argc - 1)
	{
		j = 0;
		while (argv[index[i]][j] != '\0')
		{
			ft_putchar(argv[index[i]][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	get_index(int argc, int *index)
{
	int i;

	i = 1;
	while (i < argc)
	{
		index[i - 1] = i;
		i++;
	}
}

void	sort_argv(int argc, char **argv, int *index)
{
	int i;
	int j;
	int k;
	int swap;

	i = 0;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc - 1)
		{
			k = 0;
			while (argv[index[i]][k] == argv[index[j]][k])
				k++;
			if (argv[index[i]][k] > argv[index[j]][k])
			{
				swap = index[i];
				index[i] = index[j];
				index[j] = swap;
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int	index[argc - 1];

	get_index(argc, index);
	sort_argv(argc, argv, index);
	print_param(argc, argv, index);
	return (0);
}
