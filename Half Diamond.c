Half Diamond
Question

Given an integer N, print a half-diamond pattern using *. The pattern increases from 1 star to N stars and then decreases back to 1 star.

Input Format

A single integer N, representing the maximum number of stars in a row.

Output Format

Print the half-diamond pattern using *.

Constraints

1 <= N <= 50

Example Input
5

Example Output
*
**
***
****
*****
****
***
**
*

Solution in C
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Increasing half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Decreasing half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

Explanation
Read the integer n.
The first outer loop prints the increasing half, from 1 star to n stars.
The second outer loop starts at n - 1 to avoid repeating the middle row.
The inner loop prints the required number of stars in each row.
Print a newline after every row.
Time Complexity

O(N²) — The total number of stars printed is proportional to N².

Space Complexity

O(1) — Only a constant amount of extra memory is used.
