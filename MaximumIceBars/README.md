# Maximum Ice Bars

This repository features an algorithm designed to determine the maximum number of ice cream bars a boy can purchase given his budget and the prices of available ice cream bars.

## Algorithm Overview

The algorithm follows these steps to calculate the maximum number of ice cream bars the boy can buy:

1. **Sorting Ice Cream Bars**: The array of ice cream bar prices is arranged in ascending order, ensuring the bars are sorted by price.

2. **Purchase Tracking**: A variable, `ans`, is initialized to `0` to keep track of the quantity of ice cream bars purchased.

3. **Iterative Purchase**: 
- Iterating through each ice cream bar price in the sorted array, the algorithm checks if the boy's current amount of coins is less than or equal to the cost of the ice cream bar. 
- If so, the purchase is made by increasing `ans` by `1` and deducting the price of the ice cream bar from the boy's total coin count. 
- This process repeats until the boy runs out of coins or there are no more ice cream bars available for purchase.

4. **Result Calculation**: Finally, the value of `ans` is returned as the maximum allowed amount of ice cream bars the boy can buy.

## Implementation Details

This algorithm can be implemented in any programming language, such as C++, Python, or Java, following these key points:

- Read the number of available ice cream bars and the boy's budget.
- Read the prices of the ice cream bars into an array `costs`.
- Implement the algorithm to determine the maximum number of ice cream bars the boy can buy.
- Output the result, i.e., the maximum allowed amount of ice cream bars.

## Example

For instance, consider the following input:

```
Number of ice cream bars available: 5
Boy's budget: 20
Prices of ice cream bars: [10, 5, 7, 15, 3]
```

Using the described algorithm, the maximum number of ice cream bars the boy can buy is `3`, with a total cost of `10 + 5 + 3 = 18`, leaving him with `2` units of currency.