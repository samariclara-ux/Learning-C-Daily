#include <stdio.h>
#include <stdbool.h>
int main() {
    // **Ternary operator ?= short hand for if-else statement**
    // ** (condition) ? value-if-true : value-if-false**

int hours = 12;
int minutes = 30;
char *meridiem = (hours > 12) ? "PM" : "AM"; 
printf(" %02d:%02d %s\n", hours, minutes, meridiem);

return 0;
}