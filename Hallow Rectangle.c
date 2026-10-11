Hollow Rectangle
Question

Given two integers W and L, print a hollow rectangle pattern using *. The boundary of the rectangle should contain stars, while the inside should contain spaces.

Input Format

A single line containing two integers W and L, representing the width and length of the rectangle.

Output Format

Print the hollow rectangle pattern using * and spaces.

Constraints
2 <= W <= 50
2 <= L <= 50
Example Input
5 4

Example Output
*****
*   *
*   *
*****

Solution in C
#include <stdio.h>

int main() {
    int W, L;
    scanf("%d %d", &W, &L);

    for (int i = 1; i <= L; i++) {
        for (int j = 1; j <= W; j++) {
            if (i == 1 || i == L || j == 1 || j == W) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

Explanation
Read the width W and length L.
The outer loop controls the rows.
The inner loop controls the columns.
Print * if the current position is on the boundary (first row, last row, first column, or last column).
Otherwise, print a space to create the hollow interior.
Print a newline after each row.
Time Complexity

O(W * L) — Each position in the rectangle is processed once.

Space Complexity

O(1) — Only a constant amount of extra memory is used.
