#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

typedef struct Node LIST;

int generate() {
    return rand() % 201 - 100; // Sinh số nguyên trong khoảng [-100, 100]
}

LIST* createNode(int value) {
    LIST *newNode = (LIST*)malloc(sizeof(LIST));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

LIST* createList(int n) {
    LIST *head = NULL;
    for (int i = 0; i < n; ++i) {
        int value = generate();
        LIST *newNode = createNode(value);
        newNode->next = head;
        head = newNode;
    }
    return head;
}

void reverse(LIST **L) {
    LIST *prev = NULL, *current = *L, *next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *L = prev;
}

void sort(LIST **L) {
    // TODO: Implement sorting algorithm (e.g., bubble sort, quicksort)
}

void display(LIST *L) {
    while (L != NULL) {
        printf("%d ", L->data);
        L = L->next;
    }
    printf("\n");
}

int main() {
    LIST *myList = NULL;
    int choice, n;

    do {
        printf("\nMenu:\n");
        printf("1. Tạo danh sách\n");
        printf("2. Đảo ngược danh sách\n");
        printf("3. Sắp xếp danh sách giảm dần\n");
        printf("4. Hiển thị danh sách\n");
        printf("5. Quit\n");
        printf("Chọn: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Nhập số phần tử của danh sách: ");
                scanf("%d", &n);
                myList = createList(n);
                break;
            case 2:
                reverse(&myList);
                printf("Danh sách sau khi đảo ngược:\n");
                display(myList);
                break;
            case 3:
                sort(&myList);
                printf("Danh sách sau khi sắp xếp:\n");
                display(myList);
                break;
            case 4:
                printf("Danh sách:\n");
                display(myList);
                break;
            case 5:
                printf("Kết thúc chương trình.\n");
                break;
            default:
                printf("Chọn không hợp lệ. Vui lòng chọn lại.\n");
        }
    } while (choice != 5);

    return 0;
}
