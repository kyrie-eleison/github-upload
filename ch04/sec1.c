#include <stdio.h>

int main(void)
{
  int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, 
  first_sum, second_sum, total;

  printf("first single digit: ");
  scanf("%1d", &d);
  printf("first group");
  scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
  printf("second group");
  scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

  first_sum = i1 + i2 + i3 + i4 + i5;
  second_sum = j1 + j2 + j3 + j4 + j5;
  total = first_sum * 3 + second_sum;

  printf("%d, %d", first_sum, second_sum);
  printf("%d", 9 - ((total - 1) % 10));

  return 0;
}