/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 15:21:27 by mbiusing          #+#    #+#             */
/*   Updated: 2026/04/28 16:44:54 by mbiusing         ###   ########.fr       */
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
	int	*copy;
	int	i;

	copy = malloc(sizeof(int) * size);
	if (!copy)
		return ;
	i = 0;
	while (i < size)
	{
		copy[i] = get_rank(values, i, size);
		i++;
	}
	i = 0;
	while (i < size)
	{
		values[i] = copy[i];
		i++;
	}
	free(copy);
}
