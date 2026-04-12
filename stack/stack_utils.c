/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 22:55:30 by mbiusing          #+#    #+#             */
/*   Updated: 2026/04/09 23:14:24 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// create node

t_node	*create_node(int value)
{
	t_node	*new_node;

	new_node = (t_node *) malloc(sizeof (t_node));
	new_node -> data = value;
	new_node -> prev = NULL;
	new_node -> next = new_node -> prev;
	return (new_node);
}

int	insert_before_head(t_node **head, int data)
{
	t_node	*new_node;

	new_node = create_node(data);
	if (!new_node)
		return (-1);
	if (*head == NULL)
	{
		*head = new_node;
		return (0);
	}
	new_node -> next = *head;
	*head = new_node;
	return (0);
}

int	delete_head(t_node **head)
{
	t_node	*temp;

	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (0);
}
