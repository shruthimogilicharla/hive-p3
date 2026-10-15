Palindromic Pattern
Question.

Given an integer N, print a palindromic right-angled triangle pattern using uppercase English letters. Each row contains letters in ascending order from A to the row's corresponding letter, followed by letters in descending order back to A.

Input Format

A single integer N, representing the size of the pattern.

Output Format

Print the palindromic right-angled triangle pattern with letters separated by spaces.

Constraints

1 <= N <= 26

Example Input
5

Example Output
A
A B A
A B C B A
A B C D C B A
A B C D E D C B A

Solution in C
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print letters in ascending order
        for (int j = 0; j < i; j++) {
            printf("%c", 'A' + j);

            if (j < i - 1) {
                printf(" ");
            }
        }

        // Print letters in descending order
        for (int j = i - 2; j >= 0; j--) {
            printf(" %c", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}

Explanation
Read the integer n.
The outer loop controls the rows, from 1 to n.
The first inner loop prints letters in ascending order, starting from A.
The second inner loop prints letters in descending order, excluding the middle letter to avoid duplication.
Print a newline after each row.
Time Complexity

O(N²) — The total number of characters printed is proportional to N².

Space Complexity

O(1) — Only a constant amount of extra memory is used.
