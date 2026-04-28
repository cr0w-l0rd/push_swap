/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 15:03:35 by mbiusing          #+#    #+#             */
/*   Updated: 2026/04/28 15:53:02 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	init_stack(t_stack *stack)
{
	stack->head = NULL;
	stack->tail = NULL;
	stack->size = 0;
}

t_node	*new_node(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->num = value;
	node->next = node;
	node->prev = node;
	return (node);
}

void	add_back(t_stack *stack, int value)
{
	t_node	*node;

	node = new_node(value);
	if (!node)
		return ;
	if (stack->size == 0)
	{
		stack->head = node;
		stack->tail = node;
	}
	else
	{
		node->prev = stack->tail;
		node->next = stack->head;
		stack->tail->next = node;
		stack->head->prev = node;
		stack->tail = node;
	}
	stack->size++;
}

int	build_stack(t_stack *a, int *values, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		add_back(a, values[i]);
		i++;
	}
	if (a->size != size)
		return (0);
	return (1);
}
