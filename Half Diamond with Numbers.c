Half Diamond with Numbers.

Question
Given an integer N, print a half-diamond pattern using numbers. The pattern increases from 1 to N and then decreases back to 1.

Input Format

A single integer N.

Output Format

Print the half-diamond pattern using numbers separated by spaces.

Constraints

1 <= N <= 100

Example Input
5

Example Output
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

Solution in C
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    // Increasing half
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);

            if (j < i) {
                printf(" ");
            }
        }
        printf("\n");
    }

    // Decreasing half
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);

            if (j < i) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

Explanation
Read the integer n.
The first outer loop prints rows from 1 to n.
The inner loop prints numbers from 1 to i in each row.
The second outer loop starts at n - 1 to avoid repeating the middle row.
The inner loop prints numbers from 1 to i for each decreasing row.
Print spaces between numbers and a newline after each row.
Time Complexity

O(N²) — The total number of numbers printed is proportional to N².

Space Complexity

O(1) — Only a constant amount of extra memory is used.
