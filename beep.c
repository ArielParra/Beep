#include "Beep.h"

#include <stdlib.h> // atoi()

int main(int argc, char *argv[]) {
  if (argc == 1) {
    printf("Usage: %s <frequency in ms> <duration in ms>\n", argv[0]);
    return 1;
  }
  for (int i = 0; i < (argc - 1) / 2; i++) {
    Beep(atoi(argv[i * 2 + 1]), atoi(argv[i * 2 + 2]));
  }
  return 0;
}
