Inverted Pyramid
Question

Given an integer N, print a hollow half-inverted pyramid pattern using *. The first row contains N stars, and each subsequent row contains one fewer star. Only the boundary positions contain stars, while the interior positions contain spaces.

Input Format

A single integer N, representing the size of the pattern.

Output Format

Print the hollow half-inverted pyramid pattern using * and spaces.

Constraints

1 <= N <= 50

Example Input
5

Example Output
* * * * *
*     *
*   *
* *
*

Solution in C
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) {
            if (i == 1 || j == 1 || j == n - i + 1) {
                printf("*");
            } else {
                printf(" ");
            }

            if (j < n - i + 1) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

Explanation
Read the integer n.
The outer loop controls the rows from 1 to n.
The inner loop prints n - i + 1 positions in each row.
Print * when the current position is on the first row, the first column, or the last column of that row.
Print a space for the interior positions.
Add a space between adjacent positions to match the required pattern.
Print a newline after each row.
Time Complexity

O(N²) — The nested loops process at most N × N positions.

Space Complexity

O(1) — Only a constant amount of extra memory is used.
