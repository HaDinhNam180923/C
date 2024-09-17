#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
  // kiem tra so luong doi so
  if (argc < 3) {
    printf("%s <file 1> <file 2>\n", argv[0]);
    return 1;
  }

  // ma tap tin nguon
  FILE *f_src = fopen(argv[1], "rb");
  if (f_src == NULL) {
    printf("File not found: %s\n", argv[1]);
    exit(1);
  }

  // Ma tap tin dich
  FILE *f_dst = fopen(argv[2], "wb");
  if (f_dst == NULL) {
    printf("File not found: %s\n", argv[2]);
    return 1;
  }

  // sao chep du lieu theo khoi
  size_t size = 1024;
  char *buffer = malloc(size);
  while (1) {
    // doc du lieu tap tin nguon
    size_t nread = fread(buffer, 1, size, f_src);
    if (nread == 0) {
      // du lieu duoc sao chep het
      break;
    } else if (nread < 0) {
      printf("Error: %s\n", argv[1]);
      return 1;
    }

    // ghi du lieu
    size_t nwrite = fwrite(buffer, 1, nread, f_dst);
    if (nwrite < nread) {
      printf("Error: %s\n", argv[2]);
      return 1;
    }
  }

  // dong file
  fclose(f_src);
  fclose(f_dst);

  return 0;
}

