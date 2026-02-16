#include <stdio.h>
#include <ctype.h>

int main() {
  //** QUIZ GAME**
  char questions[][100] = {
    "What is the largest planet in the solar system?",
    "What is the hotest planet?",
    "What planet has the most moons?",
    "Is the Earth flat?"};

    char options[][100] = {
      "A.Jupiter\nB.Saturn\nC.Uranus\nD.Neptune",
      "A.Jupiter\nB.Venus\nC.Earth\nD.Mars",
      "A.Earth\nB.Mars\n.CJupiter\nD.Saturn",
      "A.Yes\nB.No\nC.Maybe\nD.sometimes"};

    char answerKey[] = {'A', 'B', 'D', 'B'};

    int questionCount = sizeof(questions) / sizeof(questions[0]);
    char guess = '\0';
    int score = 0;

    printf("*** QUIZ GAME ***\n");

    for (int i = 0; i < questionCount; i++) {
      printf("\n%s\n", questions[i]);
      printf("%s\n", options[i]);
      printf("Enter your choice: ");
      scanf(" %c", &guess);

      if (guess == answerKey[i]) {
        guess = toupper(guess); 
         printf("CORRECT!\n");
         
         score++;
       
      } else {
        printf("WRONG!\n");
      }
    }

    printf("\n Your score is %d out of %d points\n", score, questionCount);
    return 0;
  }

