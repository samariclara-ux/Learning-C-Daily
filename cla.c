#include "stdio.h"

// ** enums = A user-defined data type that consists of a set of named integer constants**
// ** Benefits = replaces numbers with readable names**

typedef enum {SUNDAY=1, MONDAY=2, TUESDAY=3, WEDNESDAY=4, THURSDAY=5, FRIDAY=6, SATURDAY=7} Day;

int main() {
    Day today = TUESDAY;
  
    if (today == SUNDAY || today == SATURDAY) {
        printf("It's a weekend !\n");
    }
    else {
      printf("It's a weekday !\n");
    }
    return 0;
}