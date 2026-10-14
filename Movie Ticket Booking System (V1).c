Movie Ticket Booking System (V1)
Question.

Implement a movie ticket booking system for a theatre with N rows and M columns of seats. Initially, all seats are available. Each seat is identified by its row and column number using zero-based indexing.

The system supports booking seats, cancelling bookings, checking seat availability, and calculating screen occupancy.

Operations
Type 1: Book a seat at row r and column c. If the seat is already booked, print Seat already booked.
Type 2: Cancel the booking at row r and column c. If the seat is empty, print Seat is empty.
Type 3: Display the total number of booked and available seats.
Type 4: Find the first available seat in row r. If no seat is available, print Seat not available in Row-r.
Type 5: Calculate the screen occupancy percentage and display it to two decimal places.
Input Format
The first line contains two integers N and M, representing the number of rows and columns.
The second line contains an integer Q, representing the number of queries.
The next Q lines contain queries of types 1, 2, 3, 4, or 5.
Output Format

Print the result of each query on a new line, following the exact format specified in the problem statement.

Constraints
1 <= N, M <= 10
5 <= Q <= 250
0 <= r < N
0 <= c < M
Example Input
3 4
12
1 1 1
1 2 3
1 1 1
2 0 1
2 2 3
4 1
1 1 0
1 1 3
1 1 2
4 1
3
5

Example Output
Query-1: Seat booked at (1,1)
Query-2: Seat booked at (2,3)
Query-3: Seat already booked
Query-4: Seat is empty
Query-5: Booking cancelled for (2,3)
Query-6: Position of first available seat in Row-1 is 0
Query-7: Seat booked at (1,0)
Query-8: Seat booked at (1,3)
Query-9: Seat booked at (1,2)
Query-10: Seat not available in Row-1
Query-11: Total booked seats = 4, Total available seats = 8
Query-12: Occupancy percentage = 33.33%

Solution in C
#include <stdio.h>

int main() {
    int N, M, Q;
    scanf("%d %d", &N, &M);
    scanf("%d", &Q);

    int seats[10][10] = {0};

    for (int i = 1; i <= Q; i++) {
        int type, r, c;
        scanf("%d", &type);

        switch (type) {
            case 1:
                scanf("%d %d", &r, &c);

                if (seats[r][c] == 1) {
                    printf("Query-%d: Seat already booked\n", i);
                } else {
                    seats[r][c] = 1;
                    printf("Query-%d: Seat booked at (%d,%d)\n", i, r, c);
                }
                break;

            case 2:
                scanf("%d %d", &r, &c);

                if (seats[r][c] == 0) {
                    printf("Query-%d: Seat is empty\n", i);
                } else {
                    seats[r][c] = 0;
                    printf("Query-%d: Booking cancelled for (%d,%d)\n", i, r, c);
                }
                break;

            case 3: {
                int booked = 0;

                for (int j = 0; j < N; j++) {
                    for (int k = 0; k < M; k++) {
                        if (seats[j][k] == 1) {
                            booked++;
                        }
                    }
                }

                printf("Query-%d: Total booked seats = %d, Total available seats = %d\n",
                       i, booked, N * M - booked);
                break;
            }

            case 4:
                scanf("%d", &r);

                c = 0;
                while (c < M && seats[r][c] == 1) {
                    c++;
                }

                if (c < M) {
                    printf("Query-%d: Position of first available seat in Row-%d is %d\n",
                           i, r, c);
                } else {
                    printf("Query-%d: Seat not available in Row-%d\n", i, r);
                }
                break;

            case 5: {
                int booked = 0;

                for (int j = 0; j < N; j++) {
                    for (int k = 0; k < M; k++) {
                        if (seats[j][k] == 1) {
                            booked++;
                        }
                    }
                }

                double percentage = (double)booked * 100.0 / (N * M);

                printf("Query-%d: Occupancy percentage = %.2f%%\n",
                       i, percentage);
                break;
            }
        }
    }

    return 0;
}

Explanation
Initialize seats: Create a two-dimensional array seats[10][10] initialized to 0. A value of 0 represents an available seat, while 1 represents a booked seat.
Process queries: Use a loop to process each query and number it from 1 to Q.
Book a seat: Check whether the seat is already booked. If not, mark it as booked.
Cancel a booking: Check whether the seat is booked. If so, mark it as available.
Count seats: Traverse the matrix to count booked seats. Subtract this count from N * M to find available seats.
Find the first available seat: Scan the specified row from column 0 onward and stop at the first available seat.
Calculate occupancy: Divide the number of booked seats by the total number of seats and multiply by 100. Use %.2f to print two decimal places.
Time Complexity
Booking and cancellation: O(1) per query.
First available seat: O(M) per query.
Counting booked seats and calculating occupancy: O(N × M) per query.
Overall: O(Q × N × M) in the worst case.
Space Complexity

O(N × M) for storing the seating arrangement.
