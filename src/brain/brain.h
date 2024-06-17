/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 15:30:19 by sezequie          #+#    #+#             */
/*   Updated: 2024/06/17 09:11:58 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H


void	sa_innit(t_stack_node **a, t_stack_node **b);
void	simulated_annealing(t_stack_node *stacks[2]);

#endif