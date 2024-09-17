#include <stdio.h>
#include <string.h>

#define MAX_STRINGS 25
#define MAX_LENGTH 81

void sortStrings(char arr[][MAX_LENGTH], int n) {
    char temp[MAX_LENGTH];
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (strcmp(arr[i], arr[j]) > 0) {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }
}

int main() {
    int n;
    char strings[MAX_STRINGS][MAX_LENGTH];

    scanf("%d", &n);
    getchar();

    for (int i = 0; i < n; i++) {
        fgets(strings[i], sizeof(strings[i]), stdin);
        if (strings[i][strlen(strings[i]) - 1] == '\n') {
            strings[i][strlen(strings[i]) - 1] = '\0';
        }
    }

    sortStrings(strings, n);
    for (int i = 0; i < n; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}
