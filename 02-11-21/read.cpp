#include <cstdio>
#include <cstdint>

struct Header {
  uint16_t version;
  uint16_t offset;
  uint32_t length;
};

struct Value {
  uint32_t key;
  int32_t value;
};

int main(int argc, char** argv) {
  FILE* fin;
  Header hdr;

  // Open the file
  fin = fopen("inclass.bin", "rb");
  if(nullptr == fin) {
    perror("inclass.bin");
    return -1;
  }

  // Read header
  fread(&hdr, 1, sizeof(Header), fin);

  // Read values
  Value* values = new Value[hdr.length / sizeof(Value)];
  fseek(fin, hdr.offset, SEEK_SET);
  fread(values, 1, hdr.length, fin);

  fclose(fin);

  printf("4th Value: %d\n", values[4].value);

  
  delete[] values;
  return 0;
}
