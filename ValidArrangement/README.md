# Valid Arrangement

This repository presents a C++ implementation for discovering a valid arrangement of pairs.

## Algorithm Overview

The algorithm aims to identify a valid arrangement of pairs provided as input. Here's an overview of the approach:

1. **Graph Construction**: Construct a graph from the pairs, where each node represents a number, and an edge exists between two nodes if they form a pair.

2. **Source Node Determination**: Determine the source node in the graph. The source node is identified as the one with one more outgoing edge than incoming edges.

3. **Depth-First Search (DFS)**: Perform a depth-first search (DFS) starting from the source node to find a path that traverses all edges exactly once. Utilize a stack to keep track of the current path.

4. **Arrangement Construction**: If a valid path is discovered, construct the arrangement by adding pairs corresponding to the edges traversed in the path.

5. **Result Return**: Return the valid arrangement if found; otherwise, indicate that no valid arrangement exists.

## Implementation Details

The implementation is accomplished in C++ and involves the following key points:

- Read the number of pairs `n` and the pairs from the input file.
- Construct a graph from the pairs and determine the source node.
- Perform DFS to find a valid path covering all edges exactly once.
- If a valid path is found, construct the arrangement from the path and output it.
- If no valid arrangement is found, indicate it in the output.

## Example

Consider the following input pairs:

```
6
1 2
1 3
2 4
3 5
4 6
5 6
```

The algorithm might produce the following valid arrangement:

```
1 2
2 4
4 6
6 5
5 3
3 1
```

This indicates a valid arrangement of pairs where each pair connects two consecutive numbers.