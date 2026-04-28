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
- main program :3

parse.c
- count_numbers
- fill_values
- parse_input

validate.c
- is_valid_num
- ft_atol
- check_dup

simplify.c
- convert OG numbers into indexes

stack_init.c
- init_stack
- new_node
- add_back
- build_stack
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
- sort_stack
- sort_three
- sort_small
- radix_sort

sort_utils.c
- get_max_bits
- radix_sort

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
3. [patsubst](https://www.gnu.org/software/make/manual/html_node/Text-Functions.html) -> learnt this from gracious' push_swap when i evalled her
4. [abbastoof's push_swap github](https://github.com/abbastoof/Push_Swap) -> got stumped on how to simplify the numbers to get the sorted index
5. [push_swap tester](https://github.com/gemartin99/Push-Swap-Tester) -> basic checker
6. [circular doubly linked list](https://www.geeksforgeeks.org/dsa/introduction-to-circular-doubly-linked-list/)

### Resources Peers Suggested:

1. []()

### AI Usage:
- Explain pros & cons of the type of data structure to implement (also asked some peers why they picked certain data structures)
- Explain certain parts that i just cant with bro
- Help with debugging