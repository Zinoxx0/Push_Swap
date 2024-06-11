/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   annealing.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:13:03 by sezequie          #+#    #+#             */
/*   Updated: 2024/06/11 15:41:16 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Directed Acyclic Graph Simulated Annealing.
void	simulated_annealing(t_stack_node **a, t_stack_node **b)
{
	float	temperature;
	float	delta_temp;
	float	entropy_index;
	float	delta_entropy;
	float	temp_new_entropy;
	float	probability;
	
	temperature = 1000;
	entropy_index = get_entropy(*a, *b);
	while (entropy_index != 0.0f)
	{
		t_stack_node *new_a = generate_neighbor(*a);
		t_stack_node *new_b = generate_neighbor(*b);
		temp_new_entropy = get_entropy(new_a, new_b);

		if (temp_new_entropy < entropy_index)
		{
			*a = new_a;
			*b = new_b;
			entropy_index = temp_new_entropy;
		}
		else
		{
			delta_entropy = temp_new_entropy - entropy_index;
			probability = exp(-delta_entropy / temperature);
			if (random_float() < probability)
			{
				*a = new_a;
				*b = new_b;
				entropy_index = temp_new_entropy;
			}
			else
			{
				free(new_a);
				free(new_b);
			}
		}
		temperature *= 0.999f;
	}
	free(*a);
	free(*b);
}
