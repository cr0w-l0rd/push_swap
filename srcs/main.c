/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 14:59:15 by mbiusing          #+#    #+#             */
/*   Updated: 2026/04/30 19:39:27 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int ac, char **av)
{
	t_stack	a;
	t_stack	b;
	int		*values;
	int		size;

	if (ac < 2)
		return (0);
	init_stack(&a);
	init_stack(&b);
	values = NULL;
	if (!parse_input(ac, av, &values, &size))
		error_exit();
	get_sorted_index(values, size);
	if (!build_stack(&a, values, size))
	{
		free(values);
		free_stack(&a);
		error_exit();
	}
	free(values);
	sort_stack(&a, &b);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
