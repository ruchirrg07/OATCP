# Maximum Flow

This repository presents a C++ implementation for determining the maximum flow in a network using the Ford-Fulkerson algorithm.

## Problem Overview

The maximum flow problem addresses finding the maximum amount of flow that can be sent from a source node to a sink node in a flow network. In a flow network, nodes (vertices) and directed edges (arcs) with capacities represent the maximum amount of flow that can pass through each edge. The objective is to ascertain the maximum flow that can be transmitted from the source to the sink while adhering to edge capacities and ensuring flow conservation at intermediate nodes.

## Algorithm Overview

The `Ford-Fulkerson` algorithm, a renowned approach for solving the maximum flow problem, functions by iteratively identifying augmenting paths from the source to the sink and incrementing flow along these paths until no more augmenting paths can be found. An augmenting path is a path from the source to the sink where flow can be increased without violating edge capacity constraints.

The algorithm comprises the following steps:

1. **Initialization**: Set the flow on each edge to `0`.
2. **Augmenting Path Search**: While an augmenting path from the source to the sink exists:
   - Find an augmenting path using a breadth-first search (`BFS`) or another path-finding algorithm.
   - Determine the maximum flow that can be sent along the augmenting path.
   - Update the flow along the augmenting path by incrementing the flow on each edge.
3. **Result Return**: Return the maximum flow when no more augmenting paths can be found.

## Implementation Details

The provided implementation in C++ follows these key points:

- Read the input graph from the input file, containing information about the `number of nodes`, the `source` node, the `sink` node, and the `capacities` of the edges.
- Implement the `Ford-Fulkerson` algorithm to determine the maximum flow in the graph.
- Output the maximum flow to the output file.

## Example

Consider the following input graph:

```
6
1 6
1 2 5
1 4 4
2 3 6
4 2 3
4 5 1
3 5 8
3 6 5
5 6 2
-1
```

This input depicts a flow network with `6` nodes, where node `1` is the `source` and node `6` is the `sink`. The `capacities` of the edges are specified in subsequent lines. Using the `Ford-Fulkerson` algorithm, the maximum flow in this network is found to be `7`.