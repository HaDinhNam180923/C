#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 80

void find_longest_shortest_word(char *sentence, int *longest, int *shortest) {
    char *token = strtok(sentence, " ");
    *longest = 0;
    *shortest = MAX_LENGTH;

    while (token != NULL) {
        int len = strlen(token);
        if (len > *longest) {
            *longest = len;
        }
        if (len < *shortest) {
            *shortest = len;
        }
        token = strtok(NULL, " ");
    }
}

int main() {
    char sentence[MAX_LENGTH];
    int longest, shortest;

    fgets(sentence, MAX_LENGTH, stdin);
    sentence[strcspn(sentence, "\n")] = '\0';

    find_longest_shortest_word(sentence, &longest, &shortest);
    printf("%d %d\n", longest, shortest);

    return 0;
}
