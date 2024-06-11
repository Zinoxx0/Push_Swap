/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sezequie <sezequie@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:13:03 by sezequie          #+#    #+#             */
/*   Updated: 2024/06/11 10:27:55 by sezequie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//Directed Acyclic Graph Simulated Annealing.
void	segs(t_stack_node **a, t_stack_node **b)
{
}
/*  IMPUT FOR AI
okay, i'm doing this project in C programming in which i need to find a very efficient list of "moves" to sort an arbitrary stack of numbers with the help of an empty stacks, the moves i can perform on he stacks are the following:

sa (swap a): Swap the first 2 elements at the top of stack a.
Do nothing if there is only one or no elements.
sb (swap b): Swap the first 2 elements at the top of stack b.
Do nothing if there is only one or no elements.
ss : sa and sb at the same time.
pa (push a): Take the first element at the top of b and put it at the top of a.
Do nothing if b is empty.
pb (push b): Take the first element at the top of a and put it at the top of b.
Do nothing if a is empty.
ra (rotate a): Shift up all elements of stack a by 1.
The first element becomes the last one.
rb (rotate b): Shift up all elements of stack b by 1.
The first element becomes the last one.
rr : ra and rb at the same time.
rra (reverse rotate a): Shift down all elements of stack a by 1.
The last element becomes the first one.
rrb (reverse rotate b): Shift down all elements of stack b by 1.
The last element becomes the first one.
rrr : rra and rrb at the same time.

so to accomplish this goal i already coded the foundation of the project, which is the implementation of the structure to create the stacks using linked lists, as well as the code to perform the all the moves listed above... but i'm yet to implement the actual logic.

to handle the projects i decided to use a heuristic approach, i plan on using simulated annealing to be able to get a very efficient list of moves to sort the stacks, how? i plan on mapping the stack to a node graph that the simulated annealing algorithm can explore... each node of the graph would represent the "state of the graph" after a move is done, (the connection between the nodes would be the move itself), or to put it simply, i have to calculate a "entropy index" that lets the simulated annealing know if the stack is more or less sorted, for instance; let the initial node be the raw arbitrary state of the stack, then the following nodes connected to it would be the same stack IF "X" movement is performed, resulting in the "entropy index" either increasing or decreasing.
NOTE that this "entropy index" has to be well calculated because it needs to take into consideration the "sortedness" of the items inside stack A and stack B, for example: if all items are sorted on stack A, let the entropy index be 0, however, if all items are sorted on B, let the entropy index be higher than 0, since the items MUST be sorted on A. simultaneously, if all items are unsorted in stack A let the entropy index be high but if after few moves there are some items get shifted onto stack B and are partially sorted, then let the "entropy index" be lower than the previous state.

here i let you see how does my .h looks like so you have an idea hof the code that iºve done:

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdbool.h>
# include "libft/src/libft.h"
# include "libft/ft_printf/ft_printf.h"
# include <unistd.h>
# include <stdlib.h>
# include "brain/brain.h"

typedef struct s_stack_node
{
    int                 value;
    int                 current_position;
    int                 sorted_id;
    int                 push_price;
    bool                above_median;
    bool                cheapest;
    struct s_stack_node *next;
    struct s_stack_node *prev;
}               t_stack_node;

//*** Handle errors-free ***
void            free_matrix(char **argv);
void            error_free(t_stack_node **a, char **argv, bool flag_argc_2);
void            free_stack(t_stack_node **stack);
int             error_repetition(t_stack_node *a, int nbr);
int             error_syntax(char *str_nbr);

//*** Stack creation ***
void            stack_init(t_stack_node **a, char **argv, bool flag_argc_2);

//*** linked list utils ***
void            append_node(t_stack_node **stack, int nbr);
t_stack_node    *find_last_node(t_stack_node *head);
t_stack_node    *find_smallest(t_stack_node *stack);
bool            stack_sorted(t_stack_node *stack);
int             stack_len(t_stack_node *stack);

//*** Commands ***
void            sa(t_stack_node **a, bool checker);
void            sb(t_stack_node **b, bool checker);
void            ss(t_stack_node **a, t_stack_node **b, bool checker);
void            ra(t_stack_node **a, bool checker);
void            rb(t_stack_node **b, bool checker);
void            rr(t_stack_node **a, t_stack_node **b, bool checker);
void            rra(t_stack_node **a, bool checker);
void            rrb(t_stack_node **b, bool checker);
void            rrr(t_stack_node **a, t_stack_node **b, bool checker);
void            pa(t_stack_node **a, t_stack_node **b, bool checker);
void            pb(t_stack_node **b, t_stack_node **a, bool checker);

//*** Sorting ***

#endif

please note that "# include "brain/brain.h"" is where all the actual functions of the logic will be implemented, also note that the structure i have provided is barebones and somewhat of a placeholder since i have yet to figure out all the values that i should have inside it.
*/
