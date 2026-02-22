#include <stdio.h>
#include <stdlib.h>

// maloc function in c that dynamically allocates a specific number of bytes in memory.
int main() {
  int number = 0;
  printf("Enter the number of grades: ");
  scanf("%d", &number);

  char *grades = (char *)malloc(number * sizeof(char));
  if (grades == NULL) {
    printf("Memory allocation failed\n");
    return 1; 
  }
  for (int i = 0; i < number; i++) {
    printf("Enter grade %d: ", i + 1);
    scanf(" %c", &grades[i]);
  }
  for(int i = 0; i < number; i++) {
    printf("%c ", grades[i]);
  }
  free(grades);
  grades = NULL;
  return 0;
}