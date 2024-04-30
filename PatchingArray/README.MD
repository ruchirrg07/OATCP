# Patching Array

This repository presents a C++ implementation for addressing the patching array problem. The task entails determining the minimum number of patches required to create an array containing positive integers from `1` to `n`, inclusive.

## Algorithm Overview

The algorithm proceeds as follows:

1. **Function Definition**: Define a function, `patchingArray`, that accepts a vector `nums` containing integers and an integer `n`.

2. **Variable Initialization**: Initialize variables `mx` and `ans` to `0`.

3. **Iterative Processing**: Iterate through each element `num` in the `nums` vector:
   - While `num` is greater than (`mx + 1`), increment `ans`, and update `mx` to `2 * mx + 1`.
   - If `mx` becomes greater than or equal to `n`, return `ans`.
   - Update `mx` by adding `num`.
   - If `mx` becomes greater than or equal to `n`, return `ans`.
   - If `mx` is still less than `n`, increment `ans` until `mx` becomes greater than or equal to `n`.

4. **Result Return**: Return `ans` as the minimum number of patches required.

## Implementation Details

The implementation is carried out in C++ and comprises a single main function. Here are the key points:

- Read the input vector `nums` and the integer `n` from the input file.
- Invoke the function `patchingArray` to determine the minimum number of patches required.
- Output the result to the output file.

## Example

Consider the following input:

```
1 3
6
```

Using the described algorithm, the minimum number of patches required to create an array containing positive integers from `1` to `6` is `1`.