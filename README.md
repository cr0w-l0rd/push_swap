*This project has been created as part of the 42 curriculum by mbiusing.*

# push_swap

## DESCRIPTION

`push_swap` is a sorting algorithm project that focuses on sorting a stack of integers using a limited set of operations.

The goal of this project is to understand algorithmic efficiency and optimize the number of operations required to sort data.

This project introduces concepts such as stack manipulation, algorithm design, and complexity optimization under constraints.

By completing this project, students strengthen their knowledge of:

- data structures (stacks)
- sorting algorithms
- algorithm optimization and complexity
- problem-solving under constraints

### Program Structure

```
main.c
- main program flow

parse.c
- count_numbers
- fill_values
- parse_input

validate.c
- is_valid_number
- ft_atol
- has_duplicate

simplify.c
- convert OG numbers into indexes

stack_init.c
- init_stack
- new_node
- add_back
- build_stack

stack_utils.c
- is_sorted

push_ops.c
- pa
- pb

swap_ops.c
- sa
- sb
- ss

rotate_ops.c
- ra
- rb
- rr

reverse_ops.c
- rra
- rrb
- rrr

sort.c
- get_max_bits
- radix_sort
- sort_stack

free_error.c
- free_stack
- free_split
- error_exit
```

## Things To Figure Out Throughout This Project

1. What sorting algorithm to do?
2. What kind of data structure should I implement for the stack?
3. What's better to do, Doubly Circular or just Doubly Linked list?
4. How should I handle different types of input?
5. How should I structure my code?

## What Algorithm Should I Pick?
#### Turk Sort

#### Radix Sort
#### Dual-Pivot Quicksort

### Final Pick (Radix Sort)

## RESOURCES

### Things I Searched For:
1. [push_swap Tutorial using Radix](https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e)
2. [What is & (Bitwise AND) and >> or << (Right/Left Shift Operators)](https://stackoverflow.com/questions/3427585/understanding-the-bitwise-and-operator)
3. []()

### Resources Peers Suggested:

### AI Usage:
- Explain pros & cons of the type of data structure to implement (also asked some peers why they picked certain data structures)