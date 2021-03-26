#include <stdio.h> // Підключення бібліотек
#include <math.h>
int main() {

  int a,b;
  float x;

  printf("Задайте два цілих числа:\n");

  printf("\nВведіть перше число: ");
  scanf("%d", &a);

  printf("Введіть друге число: ");
  scanf("%d", &b);

  //Обчислення

  x = (2*cos(a) - pow(b,2)) / (3*( pow(a,2)- 3*b));
  
  //Відповідь


  printf("Відповідь: %f\n",x );
  return 0;

}
