/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 21:49:18 by mbiusing          #+#    #+#             */
/*   Updated: 2026/04/09 23:08:49 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
Basic Stacks Ops
push		- inserts element at top of stack
pop			- removes top most element of stack
peek		- returns (topmost element) of stack
is_empty	- returns (true) if stack is empty
*/

t_node	*push(t_stack *top, int value)
{
	t_node	*new_node;

	new_node = (t_node *) malloc(sizeof(t_node));
	new_node -> data = value;
	new_node -> next = top;
	top = new_node;
	return (top);
}

int	pop(t_node **stack)
{
	if (is_empty(stack))
	{
		ft_printf("Stack Underflow\n");
		return (-1);
	}
	delete_head(stack);
}

int	peek(t_node **stack)
{
	if (!is_empty(stack))
		return ((*stack)->data);
	else
		return (-1);
}

int	is_empty(t_node **stack)
{
	return (*stack == NULL);
}
