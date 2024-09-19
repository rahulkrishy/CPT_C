// Question:
// Given an array A of N integers, returns the smallest positive integer (greater than 0) that does not occur in A.
// For example, given A = [1, 3, 6, 4, 1, 2], the function should return 5.
// Given A = [1, 2, 3], the function should return 4.
// Given A = [−1, −3], the function should return 1.
// Write an efficient algorithm for the following assumptions:
// N is an integer within the range [1..100,000];
// each element of array A is an integer within the range [−1,000,000..1,000,000].

#include <stdio.h>

// Function to perform Bubble Sort on the array
void bubbleSort(int A[], int N) {
    for (int i = 0; i < N; ++i) {
        for (int j = i+1; j < N; ++j) {
            if (A[i] > A[j]) {
                // Swap A[i] and A[j] if they are in the wrong order
                int temp = A[j];
                A[j] = A[i];
                A[i] = temp;
            }
        }
    }
}

// Function to print the sorted array
void printSortedArray(int A[], int N) {
    printf("Sorted Array: {");
    for (int i = 0; i < N; ++i) {
        printf("%d", A[i]);
        if (i < N - 1) {
            printf(", ");
        }
    }
    printf("}\n");
}

// Function to find the smallest positive integer that does not occur in the sorted array
int findSmallestMissing(int A[], int N) {
    int smallest = 1;

    for (int i = 0; i < N; ++i) {
        if (A[i] == smallest) {
            // If the current element is equal to the expected smallest, increment smallest
            smallest++;
        }
    }
    return smallest;
}

int main() {
    // Example usage:
    int A[] = {8,9,2,-5,-6,1,6,8,7,3,4};
    int N = sizeof(A) / sizeof(A[0]);

    // Sorting the array using Bubble Sort
    bubbleSort(A, N);

    // Printing the sorted array
    printSortedArray(A, N);

    // Finding the smallest positive integer that does not occur in the array
    int result = findSmallestMissing(A, N);

    // Printing the result
    printf("Smallest Missing Positive Integer: %d\n", result);

    return 0;
}



