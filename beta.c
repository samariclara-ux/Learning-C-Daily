#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};

struct Node *head = NULL;

void insert(int x)
{
  struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
  if (newNode == NULL)
  {
    printf("Memory allocation failed.\n");
    return;
  }
  newNode->data = x;
  newNode->next = head;
  head = newNode;
}

void print()
{
  struct Node *temp = head;
  printf("List is: ");
  while (temp != NULL)
  {
    printf("%d ", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

int main()
{
  int n, x;
  printf("How many numbers? \n");
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {
    printf("Enter the number: \n");
    scanf("%d", &x);
    insert(x);
    print();
  }
  return 0;
}