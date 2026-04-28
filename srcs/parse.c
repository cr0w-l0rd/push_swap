/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 15:36:14 by mbiusing          #+#    #+#             */
/*   Updated: 2026/04/28 15:58:31 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	count_numbers(char **av)
{
	int		i;
	int		j;
	int		count;
	char	**split;

	i = 1;
	count = 0;
	while (av[i])
	{
		split = ft_split(av[i], ' ');
		if (!split)
			return (-1);
		j = 0;
		while (split[j++])
			count++;
		free_split(split);
		i++;
	}
	return (count);
}

static int	fill_split(char **split, int *values, int *k)
{
	int		j;
	long	n;

	j = 0;
	while (split[j])
	{
		if (!is_valid_number(split[j]))
			return (0);
		n = ft_atol(split[j]);
		if (n < -2147483648 || n > 2147483647)
			return (0);
		values[(*k)++] = (int)n;
		j++;
	}
	return (1);
}

int	fill_values(char **av, int *values)
{
	int		i;
	int		k;
	char	**split;

	i = 1;
	k = 0;
	while (av[i])
	{
		split = ft_split(av[i], ' ');
		if (!split || !split[0])
			return (free_split(split), 0);
		if (!fill_split(split, values, &k))
			return (free_split(split), 0);
		free_split(split);
		i++;
	}
	return (1);
}

int	parse_input(int ac, char **av, int **values, int *size)
{
	(void)ac;
	*size = count_numbers(av);
	if (*size <= 0)
		return (0);
	*values = malloc(sizeof(int) * (*size));
	if (!*values)
		return (0);
	if (!fill_values(av, *values))
		return (free(*values), 0);
	if (has_duplicate(*values, *size))
		return (free(*values), 0);
	return (1);
}
