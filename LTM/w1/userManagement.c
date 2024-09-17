#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Account {
    char username[50];
    char password[50];
    int status;  //1: active, 0: blocked
    struct Account *next;
} Account;

Account *head = NULL;
Account *currentUser = NULL;  //nguowi dung da dang nhap

void loadAccounts() {
    FILE *file = fopen("account.txt", "r");
    if (!file) {
        printf("Cant open file account.txt!\n");
        return;
    }

    Account *temp;
    while (!feof(file)) {
        temp = (Account *)malloc(sizeof(Account));
        fscanf(file, "%s %s %d\n", temp->username, temp->password, &temp->status);
        temp->next = head;
        head = temp;
    }

    fclose(file);
}

void saveAccounts() {
    FILE *file = fopen("account.txt", "w");
    if (!file) {
        printf("Cant open file account.txt!\n");
        return;
    }

    Account *temp = head;
    while (temp != NULL) {
        fprintf(file, "%s %s %d\n", temp->username, temp->password, temp->status);
        temp = temp->next;
    }

    fclose(file);
}

void registerAccount() {
    char username[50], password[50];
    printf("1\tUsername: ");
    scanf("%s", username);

    Account *temp = head;
    while (temp != NULL) {
        if (strcmp(temp->username, username) == 0) {
            printf("Account existed\n");
            return;
        }
        temp = temp->next;
    }

    printf("Password: ");
    scanf("%s", password);

    Account *newAccount = (Account *)malloc(sizeof(Account));
    strcpy(newAccount->username, username);
    strcpy(newAccount->password, password);
    newAccount->status = 1;
    newAccount->next = head;
    head = newAccount;

    saveAccounts();
    printf("Successful registration\n");
}

void signIn() {
    char username[50], password[50];
    printf("2\tUsername: ");
    scanf("%s", username);

    Account *temp = head;
    int attempts = 0;

    while (temp != NULL) {
        if (strcmp(temp->username, username) == 0) {
            if (temp->status == 0) {
                printf("Account is blocked\n");
                return;
            }

            while (attempts < 3) {
                printf("Password: ");
                scanf("%s", password);
                if (strcmp(temp->password, password) == 0) {
                    currentUser = temp;
                    printf("Hello %s\n", temp->username);
                    return;
                }
                printf("Password is incorrect\n");
                attempts++;
            }
            temp->status = 0;
            saveAccounts();
            printf("Password is incorrect. Account is blocked\n");
            return;
        }
        temp = temp->next;
    }
    printf("Cannot find account\n");
}

void searchAccount() {
    char username[50];
    printf("3\tUsername: ");
    scanf("%s", username);

    Account *temp = head;
    while (temp != NULL) {
        if (strcmp(temp->username, username) == 0) {
            printf("Account is %s\n", temp->status == 1 ? "active" : "blocked");
            return;
        }
        temp = temp->next;
    }
    printf("Cannot find account\n");
}

void signOut() {
    char username[50];
    printf("4\tUsername: ");
    scanf("%s", username);

    if (currentUser != NULL && strcmp(currentUser->username, username) == 0) {
        printf("Goodbye %s\n", currentUser->username);
        currentUser = NULL;
    } else if (currentUser == NULL) {
        printf("Account is not sign in\n");
    } else {
        printf("Cannot find account\n");
    }
}

void menu() {
    int choice;
    do {
        printf("USER MANAGEMENT PROGRAM\n");
        printf("1. Register\n");
        printf("2. Sign in\n");
        printf("3. Search\n");
        printf("4. Sign out\n");
        printf("Your choice (1-4, other to quit): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                registerAccount();
                break;
            case 2:
                signIn();
                break;
            case 3:
                searchAccount();
                break;
            case 4:
                signOut();
                break;
            default:
                printf("End program!\n");
                break;
        }
    } while (choice >= 1 && choice <= 4);
}

int main() {
    loadAccounts();
    menu();
    return 0;
}
