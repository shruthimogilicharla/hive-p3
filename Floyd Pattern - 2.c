Floyd Pattern - 2
Question.

Given an integer N, print a right-angled triangle pattern using integers. The numbers are arranged diagonally, with each row starting from the row number.

Input Format

A single integer N, representing the size of the triangle.

Output Format

Print the right-angled triangle pattern with numbers separated by spaces.

Constraints

1 <= N <= 50

Example Input
5

Example Output
1
2 6
3 7 10
4 8 11 13
5 9 12 14 15

Solution in C
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int num = i;

        for (int j = 1; j <= i; j++) {
            printf("%d", num);

            if (j < i) {
                printf(" ");
            }

            num += n - j;
        }

        printf("\n");
    }

    return 0;
}

Explanation
Read the integer n.
The outer loop controls the rows, from 1 to n.
Initialize num = i so each row starts with its row number.
The inner loop prints i numbers in each row.
Update num using num += n - j to generate the required diagonal sequence.
Print a newline after each row.
Time Complexity

O(N²) — The program prints N(N + 1)/2 numbers.

Space Complexity

O(1) — Only a constant amount of extra memory is used.
