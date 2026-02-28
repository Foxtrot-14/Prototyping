#include "average.h"
#include <stdio.h>

int main(void) {
  float avg = get_average(3, 4, 5);
  printf("Average: %.2f\n", avg);
  return 0;
}
