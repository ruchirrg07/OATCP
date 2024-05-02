# Brief Words

This repository presents a C++ program for generating brief words from input strings.

## Algorithm Overview

The algorithm aims to generate brief words from given input strings. Here's an overview of the approach:

1. **Input Reading**: Read the number of input strings `n` and the strings themselves from the input file.

2. **Recursive Function Definition**: Define a recursive function `briefWords` to generate all possible combinations of brief words from a given string.

3. **Brief Word Generation**: Iterate over each input string and generate brief words of lengths `1` to `4` using the `briefWords` function. Store the unique brief words in a `set` to avoid duplicates.

4. **Output Generation**: Output the generated brief words for each input string.

## Implementation Details

The implementation is carried out in C++ and includes the following key points:

- Read the number of input strings `n` and the strings from the input file.
- Implement a recursive function `briefWords` to generate brief words of lengths `1` to `4` from a given string.
- Utilize a `set` to store unique brief words and avoid duplicates.
- Iterate over each input string, generate brief words, and output them.

## Example

Consider the following input strings:

```
3
hello
world
code
```

The algorithm will produce the following brief words for each input string:

```
h
e
l
o
he
el
lo

w
o
r
l
d
wo
or
rl
ld

c
o
d
e
co
od
de
```