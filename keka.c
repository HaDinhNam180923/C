#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    int day;
    char name[20];
    int value;
    struct Node* left;
    struct Node* right;
} Node;

typedef struct DateValue {
    int day;
    char name[20];
    int value;
} DateValue;

typedef struct NameChange {
    char oldName[20];
    char newName[20];
} NameChange;

Node* insert(Node* root, int day, char name[], int value) {
    if (root == NULL) {
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->day = day;
        strcpy(newNode->name, name);
        newNode->value = value;
        newNode->left = NULL;
        newNode->right = NULL;
        return newNode;
    }

    int cmp = strcmp(name, root->name);

    if (cmp < 0) {
        root->left = insert(root->left, day, name, value);
    } else if (cmp > 0) {
        root->right = insert(root->right, day, name, value);
    } else {
        
        root->value += value;
    }

    return root;
}

void updateMaxValues(Node* root, DateValue maxValues[], int* currentIndex) {
    if (root != NULL) {
        updateMaxValues(root->left, maxValues, currentIndex);

        if (root->value > maxValues[root->day].value) {
            maxValues[root->day].day = root->day;
            strcpy(maxValues[root->day].name, root->name);
            maxValues[root->day].value = root->value;
        }

        updateMaxValues(root->right, maxValues, currentIndex);
    }
}

int countNameChanges(Node* root, NameChange changes[], int* changeCount, char oldName[], char newName[]) {
    if (root == NULL) {
        return 0;
    }

    int count = 0;

    count += countNameChanges(root->left, changes, changeCount, oldName, newName);

    if (strcmp(root->name, oldName) == 0) {
        strcpy(changes[*changeCount].oldName, oldName);
        strcpy(changes[*changeCount].newName, newName);
        (*changeCount)++;
        strcpy(root->name, newName);
    }

    count += countNameChanges(root->right, changes, changeCount, oldName, newName);

    return count;
}

void printMaxValues(DateValue maxValues[], int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d %s %d\n", maxValues[i].day, maxValues[i].name, maxValues[i].value);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    Node* root = NULL;
    DateValue maxValues[n + 1];
    NameChange changes[n * 2]; // Maximum possible name changes

    for (int i = 0; i <= n; i++) {
        maxValues[i].day = i;
        strcpy(maxValues[i].name, "");
        maxValues[i].value = 0;
    }

    for (int i = 0; i < n; i++) {
        int day, value;
        char name[20];
        scanf("%d %s %d", &day, name, &value);

        root = insert(root, day, name, value);
    }

    int changeCount = 0;
    countNameChanges(root, changes, &changeCount, "Jersey", "Sind");
    countNameChanges(root, changes, &changeCount, "Sind", "Jersey");



    printf("%d", changeCount);
 
    return 0;
}
