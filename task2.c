#include <math.h> // Підключення бібліотек
#include <stdio.h>

int main () {
  const int a = 15;
  const int b = 0;
  const int c = -3;
  float y;

  //Обчислення

  y = ((5*a - b + pow(c,2))/(2+c)) + 1;

  // Відповідь

  printf("Відповідь: %f\n",y );
  return 0;

}
