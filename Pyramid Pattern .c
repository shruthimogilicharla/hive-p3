Pyramid Pattern
Question.

Given an integer N, print a pyramid pattern using *. The pyramid should contain N rows, with each row centered using spaces and containing an increasing number of stars.

Input Format

A single integer N, representing the height of the pyramid.

Output Format

Print the pyramid pattern using spaces and * characters.

Constraints

1 <= N <= 50

Example Input
5

Example Output
    *
   ***
  *****
 *******
*********

Solution in C
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        // Print leading spaces
        for (int j = 0; j < n - i - 1; j++) {
            printf(" ");
        }

        // Print stars
        for (int k = 0; k < 2 * i + 1; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

Explanation
Read the integer n.
The outer loop controls the number of rows.
The first inner loop prints leading spaces to center the pyramid.
The second inner loop prints stars, increasing by two in each row.
Print a newline after each row.
Time Complexity

O(N²) — The number of characters printed is proportional to N².

Space Complexity

O(1) — Only a constant amount of extra memory is used.
