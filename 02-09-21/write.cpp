#include <cstdio>
#include <iostream>

struct Test {
  int i;
  float j;
  double k;
};

int main() {
  Test t = {0xdeadbeef, 6.25, 3.14};
  FILE* fl;

  fl = fopen("test.bin", "wb");
  if(nullptr == fl) {
    perror("test.bin");
    return -1;
  }

  int result = fwrite(&t, 1, sizeof(t), fl);
  printf("fwrite wrote %d\n", result);

  fseek(fl, 0, SEEK_END);
  printf("File size: %ld\n", ftell(fl));
  fclose(fl);
  return 0;
}
