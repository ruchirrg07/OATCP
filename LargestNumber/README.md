# Largest Number

This repository hosts an algorithm designed to determine the maximum number achievable by concatenating a given array of integers.

## Algorithm Overview

The algorithm follows these steps to identify the largest number:

1. Custom Comparison Function: 
- A custom comparison function named compare is defined. 
- It evaluates whether concatenating two integers yields a larger number when the first integer precedes the second.

2. Sorting: 
- The array of integers is sorted using the custom comparison function. 
- This ensures that the integers are arranged in a manner that facilitates the formation of the largest possible number when concatenated.

3. Concatenation: 
- The sorted integers are concatenated to form a resulting string.

4. Validity Check: 
- The algorithm verifies whether the first character of the resulting string is `'0'`. 
- If it is, indicating a potential invalid number start, the string `"0"` is returned. 
- Otherwise, the resulting string is returned.

## Implementation Details

This algorithm can be implemented in any programming language that supports custom comparison functions, such as C++, Python, or Java. Here are the key steps involved:

- Define the custom comparison function, compare.
- Read the array of integers.
- Sort the array of integers using the custom comparison function.
- Concatenate the sorted integers to form the resulting string.
- Check if the first character of the resulting string is `'0'` and return `"0"` if true; otherwise, return the resulting string.

## Example

Consider the following array of integers:

```
[3, 30, 34, 5, 9]
```

Using the algorithm described above, the largest number that can be formed by concatenating these integers is `9534330`.