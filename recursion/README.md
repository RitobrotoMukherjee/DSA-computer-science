## Recursion
> When function calls itself directly or indidrectly is called as recursion. This process sometimes make the code look good and more readable.

## Properties
- Base condition is needed to stop the recursion otherwise infinite loop will occur.
- Performing the same operations multiple times with different inputs till reach base case.
- In every step, we try smaller inputs to make the problem smaller.

## How recursion are stored in memory
> Recursion uses more memory, because the recursive function adds to the stack with each recursive call, and keeps the values there until the call is finished. The recursive function uses LIFO (LAST FILL FIRST OUT) Structure just like the stack data structure.