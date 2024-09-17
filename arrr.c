#include <stdio.h>

#define MAX_SIZE 100

void insertAtStart(int arr[], int *size, int value) {
    if (*size < MAX_SIZE) {
        for (int i = *size; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = value;
        (*size)++;
    }
}

void append(int arr[], int *size, int value) {
    if (*size < MAX_SIZE) {
        arr[*size] = value;
        (*size)++;
    }
}

void printInterleavedArrays(int arr1[], int size1, int arr2[], int size2) {
    int i = 0, j = 0;

    while (i < size1 || j < size2) {
        if (i < size1) {
            printf("%d ", arr1[i]);
            i++;
        }

        if (j < size2) {
            printf("%d ", arr2[j]);
            j++;
        }
    }
}

int main() {
    int arr1[MAX_SIZE], arr2[MAX_SIZE];
    int size1 = 0, size2 = 0;

    char command;
    int arrNum, value;

    while (1) {
        scanf("%c", &command);

        if (command == '#') {
            break;
        }

        scanf("%d %d", &arrNum, &value);

        if (command == 'I') {
            if (arrNum == 1) {
                insertAtStart(arr1, &size1, value);
            } else if (arrNum == 2) {
                insertAtStart(arr2, &size2, value);
            }
        } else if (command == 'A') {
            if (arrNum == 1) {
                append(arr1, &size1, value);
            } else if (arrNum == 2) {
                append(arr2, &size2, value);
            }
        }
    }

    // Print interleaved arrays
    printInterleavedArrays(arr1, size1, arr2, size2);

    return 0;
}
