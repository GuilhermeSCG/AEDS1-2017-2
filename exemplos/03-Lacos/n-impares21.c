#include <stdio.h>

int main(void) {
  int n;
  int impar;
  
  printf("Quantos números ímpares? ");
  scanf("%d", &n);

  impar = 1;
  for (; n > 0; n--) {
    printf("%d\n", impar);
    impar += 2;
  }
}
