#include <stdio.h>

void
main() {
  int i, j, a, number[30];
  printf("Enter the numbers \n");
  for (i = 0; i < 10; ++i)
    scanf("%d", & number[i]);
  for (i = 0; i < 10; ++i)
  {
    for (j = i + 1; j < 10; ++j)
    {
      if (number[i] > number[j])
      {
        a = number[i];
        number[i] = number[j];
        number[j] = a;
      }
    }
  }
  printf("\nThe numbers arranged in ascending order are given below \n");
  for (i = 0; i < 10; ++i)
    printf("%d\n", number[i]);
}
