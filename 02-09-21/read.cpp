#include <cstdio>
#include <iostream>

struct Test {
  int i;
  float j;
  double k;
};

int main() {
  FILE* fl;

  fl = fopen("test.bin", "rb");
  if(nullptr == fl) {
    perror("test.bin");
    return -1;
  }

  Test t;
  float f;
  fseek(fl, sizeof(int), SEEK_SET);
  int result = fread(&f, 1, sizeof(f), fl);
  printf("%f, %ld\n", f, ftell(fl));

  fclose(fl);
  return 0;
}
