#include <stdio.h>

// **pointer = A pointer is a variable that stores the memory address of another variable**
// **benefits = they helps avoid wasting memory by allowing you pass the address of a large data structure instead of copying the entire datat**

void birthday(int* age);

int main() {
  
  int age = 21;
  int *pAge = &age;

  birthday(&age);
  printf("You are %d years old", age);
  return 0;
}
void birthday(int* age) {
  (*age)++;
}