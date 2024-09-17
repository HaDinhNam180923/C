#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    getchar();

    char list[n][30];
    char firstName[n][30];
    char temp[30];

    for(int i = 0; i < n; i++) {
        fgets(list[i], 30, stdin);
        list[i][strcspn(list[i], "\n")] = 0;

        char *token = strtok(list[i], " ");
        while(token != NULL) {
            strcpy(firstName[i], token);
            token = strtok(NULL, " ");
        }
    }
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(strcmp(firstName[i], firstName[j]) > 0) {
                strcpy(temp, firstName[i]);
                strcpy(firstName[i], firstName[j]);
                strcpy(firstName[j], temp);
            }
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%s\n", firstName[i]);
    }

    return 0;
}
