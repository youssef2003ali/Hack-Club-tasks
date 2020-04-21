#include <stdio.h>
#include <cs50.h>
int main(void)
{

    int n = get_int("Height:");
  for (int i = 0; i < n; i++)
  {
      for (int j = n; 0 < j <= n)
      {
          printf("#");
      }
      printf("\n");
      j = j - 1;
  }
}
