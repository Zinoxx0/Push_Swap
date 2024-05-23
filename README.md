# 42push_swap
Implementing a sorting algorithm in C using stack data structure.

## Algorithm (Almighty Push Swap)

### Description
The goal of this project is to sort data on a stack, with a limited set of instructions, using the lowest possible number of actions. To succeed you'll have to manipulate various types of algorithms and choose the one (of many) most appropriate solution for an optimized data sorting.

 _**push_swap** - calculates and displays on the standard output the smallest number of moves using `push_swap` instruction language that sorts integer arguments received._

---

### Motivation
We thought creating our own algorithm to sort data would be a fun challenge.
After a lot of trial and error we finally came up with a solution that works.
The final version of the algorithm is a many many iterations of the initial idea.
We learned a lot about how to optimize code and how to use the stack data structure.
This project helped us to improve our problem-solving skills, our ability to work in a team
and algorithmical thinking.

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
- [**Big O Notation**](https://en.wikipedia.org/wiki/Big_O_notation)
- [**Push Swap Visualizer**](https://github.com/o-reo/push_swap_visualizer.git)
- [**Push Swap Tester**](https://github.com/louisabricot/push_swap_tester)
