#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Nhap cau dao nguoc.\n");
        return 1;
    }

    char reversed[100] = ""; 
	int i;

    for (i = argc - 1; i > 0; i--) {
        strcat(reversed, argv[i]);
        strcat(reversed, " ");
    }


    if (strlen(reversed) > 0) {
        reversed[strlen(reversed) - 1] = '\0';
    }


    printf("%s\n", reversed);

    return 0;
}

