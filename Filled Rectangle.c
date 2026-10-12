Filled Rectangle
Question

Given two integers N and M, print a filled rectangle pattern of size N × M using the * character.
Input Format

The first line contains two integers, N and M, representing the number of rows and columns.

Output Format

Print a rectangle consisting of N rows and M stars in each row.

Constraints
1 <= N <= 10
1 <= M <= 10
Example Input
3 5

Example Output
*****
*****
*****

Solution in C
#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

Explanation
Read the number of rows n and columns m.
The outer loop runs n times to print each row.
The inner loop prints m stars in each row.
After printing each row, printf("\n") moves to the next line.
Time Complexity

O(N × M) — Each position in the rectangle is printed once.

Space Complexity

O(1) — Only a constant amount of extra memory is used.
