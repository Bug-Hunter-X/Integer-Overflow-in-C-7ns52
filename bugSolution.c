#include <stdio.h>
#include <limits.h>

int main() {
  int a = 10;
  int *ptr = &a;
  
  // Check for potential overflow before incrementing
  if (*ptr < INT_MAX) {
    (*ptr)++; 
  } else {
    printf("Integer overflow detected!\n");
  }
  printf("%d", a);
  return 0;
}
