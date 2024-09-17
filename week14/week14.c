#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// Bài thực hành 1a
void baiThucHanh1a() {
    struct myStructure {
        int myNum;
        char myLetter;
    };
    struct myStructure s1;
    s1.myNum = 13;
    s1.myLetter = 'B';
    printf("My number: %d\n", s1.myNum);
    printf("My letter: %c\n", s1.myLetter);
}

// Bài thực hành 1b
void baiThucHanh1b() {
    struct myStructure {
        int myNum;
        char myLetter;
    };
    struct myStructure s1, s2, s3;
    s1.myNum = 13;
    s1.myLetter = 'B';
    s2.myNum = 20;
    s2.myLetter = 'C';
    s3.myNum = s1.myNum + s2.myNum;
    s3.myLetter = 'A';
    printf("s2 - My number: %d, My letter: %c\n", s2.myNum, s2.myLetter);
    printf("s3 - My number: %d, My letter: %c\n", s3.myNum, s3.myLetter);
}

// Bài thực hành 2
void baiThucHanh2() {
    struct myStructure {
        int myNum;
        char myLetter;
        char myString[30];
    };
    struct myStructure s1;
    strcpy(s1.myString, "Some text");
    printf("My string: %s\n", s1.myString);
}

// Bài thực hành 3
void baiThucHanh3() {
    struct myStructure {
        int myNum;
        char myLetter;
        char myString[30];
    };
    struct myStructure s1 = {13, 'B', "Some text"};
    printf("%d %c %s\n", s1.myNum, s1.myLetter, s1.myString);
}

// Bài thực hành 4
void baiThucHanh4() {
    struct myStructure {
        int myNum;
        char myLetter;
        char myString[30];
    };
    struct myStructure s1 = {13, 'B', "Some text"};
    struct myStructure s2;
    s2 = s1;
    printf("%d %c %s\n", s2.myNum, s2.myLetter, s2.myString);
}

// Bài thực hành 5
void baiThucHanh5() {
    struct myStructure {
        int myNum;
        char myLetter;
        char myString[30];
    };
    struct myStructure s1 = {13, 'B', "Some text"};
    struct myStructure s2;
    s2 = s1;
    s2.myNum = 30;
    s2.myLetter = 'C';
    strcpy(s2.myString, "Something else");
    printf("%d %c %s\n", s1.myNum, s1.myLetter, s1.myString);
    printf("%d %c %s\n", s2.myNum, s2.myLetter, s2.myString);
}

// Bài thực hành 6
void baiThucHanh6() {
    struct EmpAddress {
        char *ename;
        char stname[20];
        int pincode;
    };
    struct EmpAddress employee = {"John Alter", "Court Street", 654134};
    struct EmpAddress *pt = &employee;
    printf(" %s from %s \n", pt->ename, (*pt).stname);
}

// Bài thực hành 7
void baiThucHanh7() {
    typedef struct {
        char name[20];
        int age;
        float grade;
    } Student;

    Student sv1, sv2;
    Student *pSV;

    printf("Nhap ten: ");
    scanf("%s", sv1.name);
    printf("Nhap tuoi: ");
    scanf("%d", &sv1.age);
    printf("Nhap diem: ");
    scanf("%f", &sv1.grade);

    sv2 = sv1;
    strcpy(sv2.name, "New Name");
    sv2.age = 22;

    printf("SV1: %s %d %.2f\n", sv1.name, sv1.age, sv1.grade);
    printf("SV2: %s %d %.2f\n", sv2.name, sv2.age, sv2.grade);

    pSV = &sv1;
    strcpy(pSV->name, "Pointer Name");
    pSV->age = 21;

    printf("SV1 (Modified by pointer): %s %d %.2f\n", sv1.name, sv1.age, sv1.grade);
}

// Bài thực hành 8a
typedef struct {
    unsigned char day;
    unsigned char month;
    int year;
} Date;

Date input_date() {
    Date tmp;
    printf("Nhap ngay: ");
    scanf("%hhu", &tmp.day);
    printf("Nhap thang: ");
    scanf("%hhu", &tmp.month);
    printf("Nhap nam: ");
    scanf("%d", &tmp.year);
    return tmp;
}

int datecmp(Date d1, Date d2) {
    if (d1.year < d2.year) return -1;
    if (d1.year > d2.year) return 1;
    if (d1.month < d2.month) return -1;
    if (d1.month > d2.month) return 1;
    if (d1.day < d2.day) return -1;
    if (d1.day > d2.day) return 1;
    return 0;
}

void baiThucHanh8a() {
    Date date1 = input_date();
    Date date2 = input_date();
    int cmp = datecmp(date1, date2);
    if (cmp == 0) printf("Hai ngay bang nhau.\n");
    else if (cmp < 0) printf("Ngay 1 nho hon Ngay 2.\n");
    else printf("Ngay 1 lon hon Ngay 2.\n");
}

// Bài thực hành 8b
void input_date_ptr(Date *d) {
    printf("Nhap ngay: ");
    scanf("%hhu", &d->day);
    printf("Nhap thang: ");
    scanf("%hhu", &d->month);
    printf("Nhap nam: ");
    scanf("%d", &d->year);
}

void update_date(Date *d) {
    printf("Cap nhat ngay: ");
    scanf("%hhu", &d->day);
    printf("Cap nhat thang: ");
    scanf("%hhu", &d->month);
    printf("Cap nhat nam: ");
    scanf("%d", &d->year);
}

void baiThucHanh8b() {
    Date d1, d2;
    input_date_ptr(&d1);
    update_date(&d1);
    input_date_ptr(&d2);
    int cmp = datecmp(d1, d2);
    if (cmp == 0) printf("Hai ngay bang nhau.\n");
    else if (cmp < 0) printf("Ngay 1 nho hon Ngay 2.\n");
    else printf("Ngay 1 lon hon Ngay 2.\n");
}

// Bài thực hành 9
typedef struct {
    int total_rain;
    int high_temp;
    int low_temp;
} Weather;

void baiThucHanh9() {
    const int MONTHS = 12;
    Weather data[MONTHS];
    int total_rain = 0;
    int max_temp = -100, min_temp = 100;
    int max_month = 0, min_month = 0;

    for (int i = 0; i < MONTHS; i++) {
        printf("Nhap thong tin thang %d\n", i + 1);
        printf("Tong luong mua: ");
        scanf("%d", &data[i].total_rain);
        printf("Nhiet do cao nhat: ");
        scanf("%d", &data[i].high_temp);
        printf("Nhiet do thap nhat: ");
        scanf("%d", &data[i].low_temp);
        total_rain += data[i].total_rain;
        if (data[i].high_temp > max_temp) {
            max_temp = data[i].high_temp;
            max_month = i;
        }
        if (data[i].low_temp < min_temp) {
            min_temp = data[i].low_temp;
            min_month = i;
        }
    }

    printf("Luong mua trung binh: %d\n", total_rain / MONTHS);
    printf("Tong luong mua: %d\n", total_rain);
    printf("Nhiet do cao nhat trong thang %d: %d\n", max_month + 1, max_temp);
    printf("Nhiet do thap nhat trong thang %d: %d\n", min_month + 1, min_temp);
}

// Bài thực hành 10
typedef struct {
    char id[20];
    char name[31];
    float grade;
    char classement;
} Student_10;

void classify_student(Student_10 *s) {
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
    Student_10 *studentA = (Student_10 *)a;
    Student_10 *studentB = (Student_10 *)b;
    if (studentB->grade > studentA->grade) return 1;
    if (studentB->grade < studentA->grade) return -1;
    return 0;
}

void baiThucHanh10() {
   int n;
    scanf("%d", &n);

    Student_10 students[100];

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

    qsort(students, n, sizeof(Student_10), compare);

    for (int i = 0; i < n; i++) {
        printf("%s %s %.1f %c\n", students[i].name, students[i].id, students[i].grade, students[i].classement);
    }
}
typedef struct {
    int numerator;
    int denominator;
} fraction;

// Hàm nhập mảng phân số
void input_fractions(fraction arr[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &arr[i].numerator, &arr[i].denominator);
    }
}

// Hàm in mảng phân số
void print_fractions(fraction arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d/%d\n", arr[i].numerator, arr[i].denominator);
    }
}

// Hàm đảo ngược phân số
void invert_fraction(fraction *f) {
    int temp = f->numerator;
    f->numerator = f->denominator;
    f->denominator = temp;
}

// Hàm so sánh hai phân số
int compare_fractions(const void *a, const void *b) {
    fraction *fracA = (fraction *)a;
    fraction *fracB = (fraction *)b;
    double valA = (double)fracA->numerator / fracA->denominator;
    double valB = (double)fracB->numerator / fracB->denominator;
    if (valA > valB) return 1;
    if (valA < valB) return -1;
    return 0;
}

// Hàm sắp xếp mảng các phân số
void sort_fractions(fraction arr[], int n) {
    qsort(arr, n, sizeof(fraction), compare_fractions);
}
void baiThucHanh11() {
   int n;
    scanf("%d", &n);
    fraction fractions[100];

    input_fractions(fractions, n);

    for (int i = 0; i < n; i++) {
        invert_fraction(&fractions[i]);
    }

    sort_fractions(fractions, n);

    print_fractions(fractions, n);
}

struct employee {
    char *empname;
    int empid;
};
void baiThucHanh12() {
   static struct employee emp1 = {"John", 1001},
                           emp2 = {"Alex", 1002},
                           emp3 = {"Taylor", 1003};
    struct employee (*arr[]) = {&emp1, &emp2, &emp3};
    struct employee (*(*pt)[3]) = &arr;

    // Viết các câu lệnh để in ra thông tin của emp2 sử dụng biến pt
    printf("%s %d\n", (*pt)[1]->empname, (*pt)[1]->empid);


}
// Hàm chính với menu để chọn bài thực hành
int main() {
    int choice;
    do {
        printf("\nChon bai thuc hanh de chay:\n");
        printf("1. Bai thuc hanh 1a\n");
        printf("2. Bai thuc hanh 1b\n");
        printf("3. Bai thuc hanh 2\n");
        printf("4. Bai thuc hanh 3\n");
        printf("5. Bai thuc hanh 4\n");
        printf("6. Bai thuc hanh 5\n");
        printf("7. Bai thuc hanh 6\n");
        printf("8. Bai thuc hanh 7\n");
        printf("9. Bai thuc hanh 8a\n");
        printf("10. Bai thuc hanh 8b\n");
        printf("11. Bai thuc hanh 9\n");
        printf("12. Bai thuc hanh 10\n");
        printf("13. Bai thuc hanh 11\n");
        printf("14. Bai thuc hanh 12\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                baiThucHanh1a();
                break;
            case 2:
                baiThucHanh1b();
                break;
            case 3:
                baiThucHanh2();
                break;
            case 4:
                baiThucHanh3();
                break;
            case 5:
                baiThucHanh4();
                break;
            case 6:
                baiThucHanh5();
                break;
            case 7:
                baiThucHanh6();
                break;
            case 8:
                baiThucHanh7();
                break;
            case 9:
                baiThucHanh8a();
                break;
            case 10:
                baiThucHanh8b();
                break;
            case 11:
                baiThucHanh9();
                break;
            case 12:
                baiThucHanh10();
                break;
            case 13:
                baiThucHanh11();
                break;
            case 14:
                baiThucHanh12();
                break;
            case 0:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
                break;
        }
    } while (choice != 0);

    return 0;
}
