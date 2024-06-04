# 42 push_swap
Implementing a sorting algorithm in C using stack data structure.

## Algorithm (Almighty Push Swap) WIP
i've been thinking on using an heuristic approach to find the most efficient sequence of steps that leads to the sorted state of the stack.
How so? by letting the algorithm itsel explore nodes (where information relative to the state lays) for the most efficient "pathway" to the sorted state of the stack, starting from the arbitrary initial state of the unsorted stack, using a reference value that i would call "entropy index" which will evaluate the disorder of the stack.
the idea is still very raw but i found out that "Simulated annealing", "local search" and "DAG" (directed acyclic Graphs) are directly related to this very idea.

### Description
The goal of this project is to sort data on a stack with the help of an empty one, with a limited set of instructions, using the lowest possible number of actions. To succeed you'll have to manipulate various types of algorithms and choose the one (of many) most appropriate solution for an optimized data sorting.

 _**push_swap** - calculates and displays on the standard output the smallest number of moves using `push_swap` instruction language that sorts integer arguments received._

---

### Motivation
Yet to be determined.

---

### Moves allowed to be performed on the stack
- **`sa`** - swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements.
- **`sb`** - swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements.
- **`ss`** - sa and sb at the same time.
- **`pa`** - push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty.
- **`pb`** - push b - take the first element at the top of a and put it at the top of b. Do nothing if a is empty.
- **`ra`** - rotate a - shift up all elements of stack a by 1. The first element becomes the last one.
- **`rb`** - rotate b - shift up all elements of stack b by 1. The first element becomes the last one.
- **`rr`** - ra and rb at the same time.
- **`rra`** - reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one.
- **`rrb`** - reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one.
- **`rrr`** - rra and rrb at the same time.

---

### Preparing for the algorithm

_Simulated annealing core algo:_
1. Initialization i := istart, k := 0, ck = c0, Lk := L0);
2. Repeat
3. For l = 0 to Lk do
 • Generate a solution j from the neighborhood Si of the current solution i;
 • If f(j) < f(i) then i := j (j becomes the current solution);
 • Else, j becomes the current solution with probability e (f(i)−f(j)/ck);
4. k := k +1;
5. Compute(Lk, ck);
6. Until ck rougly 0

---

### Terminology
- **APS** - Almighty Push Swap
- **Stack** - A stack of numbers.
- **Node** - A number in the stack.
- **Stack A** - The stack that contains the numbers to be sorted.
- **Stack B** - The stack that is used to sort the numbers.
- **Chunk** - A group of numbers that are sorted in ascending order.
- **Chunk pair** - Two chunks that are consecutively.
- **Chunksize** - The size of the chunk.
- **Number of chunks** - The number of chunks in the stack.
- **Edges** - The first and the last nodes of the stack being the edge.
- **Direction** - From the middle if the node is closer to the top, its North else its South.
- **Cost** - The cost of sending a node to the top of the stack and to the other stack.

---

### Resources
- [**Linked List**](https://en.wikipedia.org/wiki/Linked_list)
- [**Stack Data Structure**](https://en.wikipedia.org/wiki/Stack_(abstract_data_type))
- [**Sorting Algorithms**](https://en.wikipedia.org/wiki/Sorting_algorithm)
- [**Simulated Annealing Paper**](https://enac.hal.science/hal-01887543/document)
- [**Game Tree**](https://en.wikipedia.org/wiki/Game_tree)
- [**Push Swap Visualizer**](https://github.com/o-reo/push_swap_visualizer.git)
- [**Push Swap Tester**](https://github.com/louisabricot/push_swap_tester)
