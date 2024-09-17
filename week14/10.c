#include <stdio.h>
#include <string.h>

typedef struct {
    char id[20];
    char name[31];
    float grade;
    char classement;
} student;

void classify_student(student *s) {
    if (s->grade >= 9) {
        s->classement = 'A';
    } else if (s->grade >= 8) {
        s->classement = 'B';
    } else if (s->grade >= 6.5) {
        s->classement = 'C';
    } else {
        s->classement = 'D';
    }
}

int compare(const void *a, const void *b) {
    student *studentA = (student *)a;
    student *studentB = (student *)b;
    if (studentB->grade > studentA->grade) return 1;
    if (studentB->grade < studentA->grade) return -1;
    return 0;
}

int main() {
    int n;
    scanf("%d", &n);

    student students[100];

    for (int i = 0; i < n; i++) {
        scanf("%s", students[i].id);
        getchar(); // consume newline character
        fgets(students[i].name, 31, stdin);
        size_t len = strlen(students[i].name);
        if (len > 0 && students[i].name[len-1] == '\n') {
            students[i].name[len-1] = '\0';
        }
        scanf("%f", &students[i].grade);
        classify_student(&students[i]);
    }

    qsort(students, n, sizeof(student), compare);

    for (int i = 0; i < n; i++) {
        printf("%s %s %.1f %c\n", students[i].name, students[i].id, students[i].grade, students[i].classement);
    }

    return 0;
}
