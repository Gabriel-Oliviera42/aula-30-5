#include <stdio.h>

int main(void) {
  int NU, CH, TE = 0;

  system ("clear");
  printf("Entre com um numero de 1 a 100: ");
  scanf("%d",&NU);
  system ("clear");
  do {
    printf("qual o numero: ");
    scanf("%d",&CH);
    if (CH > NU)
      printf("o chute é alto\n");
    if (CH < NU)
      printf("o chute é baixo\n");
    TE++;
  } while (CH != NU);
  printf("acertou com %d tentativas\n",TE);
  return 0;
}