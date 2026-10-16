#include <stdio.h>

int main(int argc, char* argv[]) {
  if (argc <= 1) {
    fprintf(stderr, "please provide a TOML file path\n");
    return 1;
  }
  char* file_path = argv[1];
  return 0;
}