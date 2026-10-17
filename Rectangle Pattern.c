Rectangle Pattern
Question

Given an integer N, print an N × N rectangle pattern using numbers and a * character. Each row contains numbers in descending order from N to 1, with the * replacing the number corresponding to the current row.

Input Format

A single integer N.

Output Format

Print the rectangle pattern with N rows and N characters in each row.

Constraints

1 <= N <= 50

Example Input
5

Example Output
5432*
543*1
54*21
5*321
*4321

Solution in C
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = n; j >= 1; j--) {
            if (j == i) {
                printf("*");
            } else {
                printf("%d", j);
            }
        }
        printf("\n");
    }

    return 0;
}

Explanation
Read the integer n.
The outer loop controls the rows from 1 to n.
The inner loop prints numbers in descending order from n to 1.
If the column number j equals the row number i, print * instead of the number.
Print a newline after each row.
Time Complexity

O(N²) — The program processes N × N positions.

Space Complexity

O(1) — Only a constant amount of extra memory is used.
