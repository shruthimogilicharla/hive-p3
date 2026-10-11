Simple Banking System (V1)
Question

Implement a simple banking system that manages 50 accounts. Each account starts with an initial balance of 1000 INR. The system processes queries to deposit money, withdraw money, check account balances, transfer money between accounts, and calculate the average balance across all accounts.

Operations
Type 1: Deposit amount x into account a.
Type 2: Withdraw amount x from account a. If the balance is insufficient, print an error message.
Type 3: Display the balance of account a.
Type 4: Transfer amount x from account a1 to account a2. If the sender has insufficient funds, print an error message.
Type 5: Calculate the average balance across all 50 accounts, formatted to two decimal places.
Input Format
The first line contains an integer Q, the number of queries.
The next Q lines contain queries of types 1, 2, 3, 4, or 5.
Output Format

Print the result of each query on a new line using the exact format specified in the problem statement.

For withdrawal and transfer operations, print Insufficient Balance with the account ID if the account does not have enough funds.

Constraints
1 <= accountId <= 50
5 <= Q <= 250
1 <= amount <= 10000
Example Input
12
1 5 500
3 5
1 42 1000
3 42
4 42 14 2500
4 42 14 1500
3 42
3 14
2 5 250
3 5
2 5 1500
5

Example Output
Query-1: Deposited 500 INR to Account-5
Query-2: Available Balance in Account-5 is 1500 INR
Query-3: Deposited 1000 INR to Account-42
Query-4: Available Balance in Account-42 is 2000 INR
Query-5: Insufficient Balance in Account-42
Query-6: Transferred 1500 INR from Account-42 to Account-14
Query-7: Available Balance in Account-42 is 500 INR
Query-8: Available Balance in Account-14 is 2500 INR
Query-9: 250 INR has been withdrawn from Account-5
Query-10: Available Balance in Account-5 is 1250 INR
Query-11: Insufficient Balance in Account-5
Query-12: Average Balance across all the accounts is 1025.00 INR

Solution in C
#include <stdio.h>

int main() {
    int q;
    scanf("%d", &q);

    int bal[51];

    // Initialize all 50 accounts with 1000 INR
    for (int i = 1; i <= 50; i++) {
        bal[i] = 1000;
    }

    for (int i = 1; i <= q; i++) {
        int type, a, b, x;
        scanf("%d", &type);

        switch (type) {
            case 1:
                scanf("%d %d", &a, &x);
                bal[a] += x;

                printf("Query-%d: Deposited %d INR to Account-%d\n",
                       i, x, a);
                break;

            case 2:
                scanf("%d %d", &a, &x);

                if (bal[a] >= x) {
                    bal[a] -= x;

                    printf("Query-%d: %d INR has been withdrawn from Account-%d\n",
                           i, x, a);
                } else {
                    printf("Query-%d: Insufficient Balance in Account-%d\n",
                           i, a);
                }
                break;

            case 3:
                scanf("%d", &a);

                printf("Query-%d: Available Balance in Account-%d is %d INR\n",
                       i, a, bal[a]);
                break;

            case 4:
                scanf("%d %d %d", &a, &b, &x);

                if (bal[a] >= x) {
                    bal[a] -= x;
                    bal[b] += x;

                    printf("Query-%d: Transferred %d INR from Account-%d to Account-%d\n",
                           i, x, a, b);
                } else {
                    printf("Query-%d: Insufficient Balance in Account-%d\n",
                           i, a);
                }
                break;

            case 5: {
                double total = 0;

                for (int j = 1; j <= 50; j++) {
                    total += bal[j];
                }

                printf("Query-%d: Average Balance across all the accounts is %.2f INR\n",
                       i, total / 50.0);
                break;
            }
        }
    }

    return 0;
}

Explanation
Initialize accounts: Create an array bal[51] and initialize accounts 1 through 50 with 1000 INR each.
Process queries: Use a loop to process all Q queries and number them from 1 to Q.
Deposit: Add the specified amount to the account balance.
Withdraw: Check whether the balance is sufficient before deducting the amount.
Check balance: Print the current balance of the requested account.
Transfer: Check the sender's balance, then deduct the amount from the sender and add it to the receiver.
Average balance: Calculate the total balance of all 50 accounts and divide it by 50.0. Use %.2f to display two decimal places.
Time Complexity
Deposit, withdrawal, balance inquiry, and transfer: O(1) per query.
Average balance query: O(50), which is effectively O(1) because the number of accounts is fixed.
Overall: O(Q) for the fixed number of 50 accounts.
Space Complexity

O(1) because the system stores a fixed number of 50 account balances.
