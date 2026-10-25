Question: Floyd Pattern - 1

    
Given an integer N, print a right-angled triangle pattern using consecutive integers, starting from 1.

Input Format

A single integer N, representing the number of rows.

Output Format

Print a right-angled triangle with N rows. Each row contains consecutive integers separated by spaces.

Constraints

1 <= N <= 50

Example Input
6

Example Output
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21

Solution in C
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int num = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", num);

            if (j < i) {
                printf(" ");
            }

            num++;
        }
        printf("\n");
    }

    return 0;
}

Explanation
Read the number of rows n.
Initialize num = 1 to print consecutive integers starting from 1.
The outer loop controls the number of rows.
The inner loop prints i numbers in row i.
Increment num after printing each number.
Print a newline after each row.
Time Complexity

O(N²), because the total number of printed integers is N * (N + 1) / 2.

Space Complexity

O(1), because the program uses only a constant amount of extra memory.
