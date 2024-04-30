# Minimum Integer

This repository presents a C++ implementation for solving a Minimum Integer problem. The task involves determining the minimum possible number by removing `k` digits from a given number string.

## Algorithm Overview

The algorithm proceeds as follows:

1. **Function Definition**: Define a function, `minimumInteger`, that accepts a string `s` representing the number and an integer `k` indicating the number of digits to remove.

2. **Stack Initialization**: Initialize a stack, `st`, to store the digits of the number.

3. **Digit Comparison and Removal**: 
    - Iterate through each digit of the input string:
    - Compare the current digit with the top of the stack. If the current digit is smaller than the top of the stack and there are still digits to remove (`k > 0`), remove digits from the stack until either the stack is empty or the top of the stack is smaller than or equal to the current digit.
    - If the stack is empty and the current digit is `0`, proceed to the next digit.
    - Push the current digit onto the stack.

4. **Finalization**: 
    - If there are still digits to remove after processing all digits, pop digits from the stack until `k` becomes `0`.
    - If the stack is empty, return `"0"` since no digits remain after removal.
    - Otherwise, construct the minimum number string by popping digits from the stack and appending them to the result string.

5. **Result Return**: Return the result string.

## Implementation Details

The implementation is completed in C++ and consists of a single main function. Here are the main points:

- Read the input string `s` and the integer `k` from the input file.
- Call the function `minimumInteger` to determine the minimum possible number after removing `k` digits.
- Output the result string to the output file.

## Example

For instance, consider the following input:

```
1432219
3
```

Using the described algorithm, the minimum possible number after removing `3` digits is `1219`.