# Counting Subgrids

This repository showcases a C++ implementation for counting subgrids in a given matrix. The task involves determining the number of subgrids in a matrix where each subgrid consists solely of 1s.

## Algorithm Overview

The algorithm follows these steps:

1. **Input Reading**: Read the input matrix `grid` from the input file.

2. **Matrix Dimension Calculation**: Calculate the dimensions `n` of the input matrix.

3. **Row Conversion**: 
    - Initialize an empty vector `row` of size `n` to store the integer representation of each row of the matrix. 
    - Convert each row of the matrix into an integer representation by treating each row as a binary number.

4. **Subgrid Counting**: 
    - Iterate through each pair of rows in the matrix and count the number of common set bits between them using the `bitwise AND` operation. 
    - Calculate the number of subgrids formed by the common set bits using the formula `(bits * (bits - 1)) / 2`.

5. **Total Subgrid Count**: Add the count of subgrids `cnt` formed by each pair of rows to the total count `ans`.

6. **Result Output**: Output the total count of subgrids to the output file.

## Implementation Details

The implementation is executed in C++ and comprises a single main function. Here are the key points:

- Read the input matrix `grid` from the input file
- Convert each row of the matrix into an integer representation.
- Iterate through each pair of rows and count the number of common set bits.
- Calculate the number of subgrids formed by each pair of rows and add them to the total count.
- Output the total count of subgrids to the output file.

## Example

Consider the following input:

```
3
1 0 1
1 1 1
1 1 0
```

Using the described algorithm, the total count of subgrids formed by `1s` in the given matrix is `14`.
