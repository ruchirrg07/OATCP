# Minimum Hamming

This repository presents a C++ implementation for solving the minimum Hamming problem. The task entails finding the minimum Hamming distance between all pairs of integers in an array.

## Algorithm Overview

The algorithm follows these steps:

1. **Input Reading**: Read the input vector `v` containing integers from the input file.

2. **Vector Size Calculation**: Calculate the size `n` of the input vector.

3. **Initialization**: Initialize a variable `ans` to store the minimum Hamming distance.

4. **Bitwise Iteration**: Iterate through each bit position from `0` to `31`:
   - Initialize a variable `cnt` to count the number of integers with the bit set at the current bit position.
   - Iterate through each integer in the input vector and count the number of integers with the bit set at the current bit position.
   - Update `ans` by adding the product of `cnt` and `(n - cnt)`.

5. **Result Output**: Output the result `res` to the output file.

## Implementation Details

The implementation is carried out in C++ and comprises a single main function. Here are the main points:

- Read the input vector `v` from the input file.
- Calculate the size `n` of the input vector.
- Iterate through each bit position and count the number of integers with the bit set at that position.
- Calculate the minimum Hamming distance using the counts of set and unset bits.
- Output the result to the output file.

## Example

Consider the following input:

```
1 3 6
```

Using the algorithm described above, the minimum Hamming distance between all pairs of integers in the array `[1, 3, 6]` is `4`.