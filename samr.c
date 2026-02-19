#include <stdio.h>

// **  array of struct = array where each element contains a struct**
// ** helps organize related data in a structured way **
typedef struct{
    char model[25];
    int year;
    float price;
}car;

int main() {
  car cars[]={{"mustang", 2025, 32000},
              {"corvette", 2026, 68000},
              {"challenger", 2024, 29000}};
  int number = sizeof(cars) / sizeof(cars[0]);

  for(int i=0; i < number; i++){
    printf("%s %d $%.2f\n", cars[i].model, cars[i].year, cars[i].price);
  }
}
