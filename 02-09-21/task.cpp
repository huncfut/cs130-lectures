#include <cstdio>

struct Picture {
  int width;
  int height;
};

struct Pixel {
  char b, g, r;
};

int main(int argc, char** argv) {
  FILE* fin, fout;

  // Check for arguments
  if(argc < 3) return 0;

  // Open files
  fin = fopen(argv[1]);
  fout = fopen(argv[2]);

  // Pixel array
  Pixel pixels = new Pixel[width][height];
  // Read pixels
  
  return 0;
}
