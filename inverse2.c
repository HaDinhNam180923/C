#include <stdio.h>
#include <string.h>

int main() {
    char sentence[256];

    printf("Nhap cau dao nguoc: ");
    fgets(sentence, sizeof(sentence), stdin);

    // loai bo \n
    int len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }

    len = strlen(sentence);
	int i, j;
    for (i = len - 1; i >= 0; i--) {
        if (sentence[i]==' ') {
        	j = i;
        	do {
        		j = j + 1;
        		printf("%c",sentence[j]);
			} while(sentence[j+1] == ' ');	
		}
		
}
	do {
        j = 0;
        printf("%c",sentence[j]);
		} while(sentence[j] == ' ');
    printf("\n");

    return 0;
}

