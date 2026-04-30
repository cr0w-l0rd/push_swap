/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 15:21:27 by mbiusing          #+#    #+#             */
/*   Updated: 2026/04/30 19:42:16 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	get_rank(int *values, int index, int size)
{
	int	rank;
	int	i;

	rank = 0;
	i = 0;
	while (i < size)
	{
		if (values[i] < values[index])
			rank++;
		i++;
	}
	return (rank);
}

void	get_sorted_index(int *values, int size)
{
	int	i;
	int	*ranked;

	ranked = malloc(sizeof(int) * size);
	if (!ranked)
		return ;
	i = 0;
	while (i < size)
	{
		ranked[i] = get_rank(values, i, size);
		i++;
	}
	i = 0;
	while (i < size)
	{
		values[i] = ranked[i];
		i++;
	}
	free(ranked);
}
