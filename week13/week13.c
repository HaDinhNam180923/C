#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#define ARRAY_SIZE 10
#define MAX_PRODUCTS 10
#define MAX_LENGTH 80

int menu();
void bth1a();
void bth1b();
void bth2();
void bth3();
void bth4();
void bth5();
void bth6();
void bth7();
void bth8();
void bth9();
void bth10();
void bth11();
void bth12();
void bth13();
void bth14();
void bth15();
void bth16();
void bth17();
void bth18();
void bth19();

int main() {
    int tuy_chon = 0;
    tuy_chon = menu();
    switch(tuy_chon) {
        case 1: bth1a(); break;
        case 2: bth1b(); break;
        case 3: bth2(); break;
        case 4: bth3(); break;
        case 5: bth4(); break;
        case 6: bth5(); break;
        case 7: bth6(); break;
        case 8: bth7(); break;
        case 9: bth8(); break;
        case 10: bth9(); break;
        case 11: bth10(); break;
        case 12: bth11(); break;
        case 13: bth12(); break;
        case 14: bth13(); break;
        case 15: bth14(); break;
        case 16: bth15(); break;
        case 17: bth16(); break;
        case 18: bth17(); break;
        case 19: bth18(); break;
        case 20: bth19(); break;
        default: printf("Lua chon khong hop le\n"); break;
    }
    return 0;
}

int menu() {
    int tuy_chon = 0;
    printf("\n1. Bai thuc hanh 1a");
    printf("\n2. Bai thuc hanh 1b");
    printf("\n3. Bai thuc hanh 2");
    printf("\n4. Bai thuc hanh 3");
    printf("\n5. Bai thuc hanh 4");
    printf("\n6. Bai thuc hanh 5");
    printf("\n7. Bai thuc hanh 6");
    printf("\n8. Bai thuc hanh 7");
    printf("\n9. Bai thuc hanh 8");
    printf("\n10. Bai thuc hanh 9");
    printf("\n11. Bai thuc hanh 10");
    printf("\n12. Bai thuc hanh 11");
    printf("\n13. Bai thuc hanh 12");
    printf("\n14. Bai thuc hanh 13");
    printf("\n15. Bai thuc hanh 14");
    printf("\n16. Bai thuc hanh 15");
    printf("\n17. Bai thuc hanh 16");
    printf("\n18. Bai thuc hanh 17");
    printf("\n19. Bai thuc hanh 18");
    printf("\n20. Bai thuc hanh 19");
    printf("\n------------------");
    printf("\nNhap tuy chon: ");
    scanf("%d", &tuy_chon);
    system("cls");
    return tuy_chon;
}

void bth1a() {
    char s1[20] = "Happy ";
    char s2[] = "New Year ";
    char s3[40] = "";
    printf("s1 = %s \ns2 = %s \n", s1, s2);
    printf("strcat(s1, s2) = %s \n", strcat(s1, s2));
    printf("strncat(s3, s1, 6) = %s\n", strncat(s3, s1, 6));
    printf("strcat(s3, s1) = %s\n", strcat(s3, s1));
}

void bth1b() {
    char str1[100], str2[100];
    printf("Nhap xau thu nhat: ");
    scanf("%s", str1);
    printf("Nhap xau thu hai: ");
    scanf("%s", str2);
    printf("Tong do dai hai xau la: %lu\n", strlen(str1) + strlen(str2));
}

void bth2() {
    char str[100];
    printf("Nhap mot dong van ban: ");
    scanf(" %[^\n]", str);
    int count = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ') count++;
    }
    printf("So dau cach la: %d\n", count);
}

void bth3() {
    char str[100], replace_what, replace_with;
    printf("Nhap xau: ");
    scanf(" %[^\n]", str);
    printf("Nhap ky tu can thay the: ");
    scanf(" %c", &replace_what);
    printf("Nhap ky tu thay the: ");
    scanf(" %c", &replace_with);
    for (int i = 0; str[i]; i++) {
        if (str[i] == replace_what) str[i] = replace_with;
    }
    printf("Xau sau khi thay the: %s\n", str);
}

void bth4() {
    char str[100];
    int valid = 1;
    printf("Nhap ma khach hang: ");
    scanf("%s", str);
    if (strlen(str) != 7) valid = 0;
    for (int i = 0; i < 3; i++) {
        if (!isalpha(str[i])) valid = 0;
    }
    for (int i = 3; i < 7; i++) {
        if (!isdigit(str[i])) valid = 0;
    }
    if (valid) {
        printf("Ma khach hang hop le\n");
    } else {
        printf("Ma khach hang khong hop le\n");
    }
}

void bth5() {
    char src[100], dest[100];
    printf("Nhap xau nguon: ");
    scanf("%s", src);
    char *p = dest;
    char *q = src; // Biến tạm thời để duyệt qua chuỗi nguồn
    while (*q != '\0') {
        *p++ = *q++;
    }
    *p = '\0';
    printf("Xau dich: %s\n", dest);
}
void nameSlice(char userName[])
{
    int count = 0;
    while (userName[count] != ' ' &&
    userName[count] != '\0')
    count++;
    if (userName[count] == ' ')
    userName[count] = '\0';
}
void bth6(){
    char name[41];
    printf("Enter your first and last names, separatedby a space:\n");
    gets(name);
    nameSlice(name);
    printf("Your first name is: %s\n", name);
}

void bth7() {
    char name[100];
    printf("Nhap ho va ten: ");
    gets(name);
    char *lastName = strrchr(name, ' ');
    if (lastName) {
        printf("Ten: %s\n", lastName + 1);
    } else {
        printf("Chi co mot tu\n");
    }
}

int strend(char *s, char *t)
{
    int Result = 0;
    int s_length = 0;
    int t_length = 0;
    /* get the lengths of the strings */
    s_length = strlen(s);
    t_length = strlen(t);
    if(t_length <= s_length) {
        /* advance the s pointer to where the string t would have to start in string s */
        s += s_length - t_length;
        /* and make the compare using strcmp */
        if(0 == strcmp(s, t)) {
            Result = 1;
        }
    }
    return Result;
}
void bth8(){
    char *s1 = "some really long string.";
    char *s2 = "ng.";
    char *s3 = "ng";
    if(strend(s1, s2)) {
        printf("The string (%s) has (%s) at the end.\n", s1, s2);
    } else {
        printf("The string (%s) doesn't have (%s) at the end.\n", s1, s2);
    }
    if(strend(s1, s3)){
        printf("The string (%s) has (%s) at the end.\n", s1, s3);
    }
    else {
        printf("The string (%s) doesn't have (%s) at the end.\n", s1, s3);
    }
}

void bth9() {
    char *products[] = {"TV127  31 inch Television", "CD057  CD Player", "TA877  Answering Machine", "CS409  Car Stereo", "PC655  Personal Computer"};
    char query[10];
    printf("Nhap ma san pham: ");
    scanf("%s", query);
    for (int i = 0; i < 5; i++) {
        if (strstr(products[i], query)) {
            printf("Mo ta: %s\n", products[i]);
            return;
        }
    }
    printf("Khong tim thay san pham\n");
}

char* str_any(char* str1, char* str2)
{
    while (*str1 != '\0')
    {
    if (strchr(str2, *str1) != NULL) {
        return str1;
    }
    ++str1;
    }
return NULL;
}
void bth10(){
    char* punc = ".,;:!?";
    char s[MAX_LENGTH + 1];
    char *p;
    printf("Please enter a line of text\n");
    scanf("%100s", s);
    for (p = str_any(s, punc); p != NULL; p = str_any(p + 1, punc))
    {
    *p = ' ';
    }
    printf("Resulting string is:\n%s\n", s);
}

void swap (char *x, char *y)
{
    char *t = x;
    x = y;
    y = t;
}
void bth11(){
    char *x = "ABC";
    char *y = "DEF";
    char *t;
    swap(x, y);
    printf("(%s, %s)", x, y);
    t = x;
    x = y;
    y = t;
    printf("\n(%s, %s)", x, y);
}

int countWords(char str[]) {
    int count = 0;
    int inWord = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            inWord = 0;
        } else if (inWord == 0) {
            inWord = 1;
            count++;
        }
    }

    return count;
}
void bth12(){
    char str[81];
    fgets(str, sizeof(str), stdin);
    size_t length = strlen(str);
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
    }

    int wordCount = countWords(str);

    printf("%d\n", wordCount);
}

void bth13() {
     char str[MAX_LENGTH];
    int freq[256] = {0};  // Mảng lưu tần suất xuất hiện của các ký tự
    int maxCount = 0;
    char maxChar;

    // Đọc xâu ký tự từ đầu vào
    fgets(str, sizeof(str), stdin);

    // Kiểm tra và bỏ ký tự newline ở cuối xâu nếu có
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    // Tính tần suất xuất hiện của các ký tự, bỏ qua khoảng trống
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ' ') {
            freq[(unsigned char)str[i]]++;
            if (freq[(unsigned char)str[i]] > maxCount) {
                maxCount = freq[(unsigned char)str[i]];
                maxChar = str[i];
            }
        }
    }

    // In kết quả
    printf("%c %d\n", maxChar, maxCount);

}

#define MAX_STRINGS 25

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

void bth14() {
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
}

void extractSubstring(char *source, int position, int length, char *result) {
    strncpy(result, source + position, length);
    result[length] = '\0'; // Thêm ký tự null để kết thúc chuỗi
}

void bth15(){
    char str[100], result[100];
    int position, length;

    printf("Input the string: ");
    fgets(str, sizeof(str), stdin);
    // Xóa ký tự newline nếu có
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    printf("Input the position to start extraction: ");
    scanf("%d", &position);

    printf("Input the length of substring: ");
    scanf("%d", &length);

    // Kiểm tra điều kiện chỉ số
    if (position < 0 || position >= strlen(str)) {
        printf("Invalid position.\n");
    } else if (length < 0 || position + length > strlen(str)) {
        printf("Invalid length.\n");
    } else {
        extractSubstring(str, position, length, result);
        printf("The substring retrieved from the string is: \"%s\"\n", result);
    }


}

int count_occurrences(char *string, char *target) {
    int count = 0;
    char *ptr = string;

    while ((ptr = strstr(ptr, target)) != NULL) {
        count++;
        ptr += strlen(target);
    }

    return count;
}

void bth16() {
    char string[MAX_LENGTH];
    char target[MAX_LENGTH];

    fgets(string, MAX_LENGTH, stdin);
    fgets(target, MAX_LENGTH, stdin);

    target[strcspn(target, "\n")] = '\0';

    int occurrences = count_occurrences(string, target);
    printf("%s %d\n", target, occurrences);
}

void bth17(){
    char str[100];
    int i, j = 0;
    fgets(str, sizeof(str), stdin);
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }
    for (i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("%s\n", str);
}



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

void bth18() {
    char sentence[MAX_LENGTH];
    int longest, shortest;

    fgets(sentence, MAX_LENGTH, stdin);
    sentence[strcspn(sentence, "\n")] = '\0';

    find_longest_shortest_word(sentence, &longest, &shortest);
    printf("%d %d\n", longest, shortest);
}

void bth19() {
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
}
