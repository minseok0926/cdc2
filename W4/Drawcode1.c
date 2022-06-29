#include <stdio.h>
#include <string.h>
int main() {
  int ar2[6][5] = {0};
  int i, j;
  int a;
  a = 1;
  for(i = 0; i < 6; i++){
    for(j = 0; j < 5; j++){
      ar2[i][j] = a;
      a++;
    }
  }
  for(i = 0; i < 6; i++){
    j = 0;
    for(j = 0; j < 5; j++){
      printf("%d ", ar2[i][j]);
    }
    printf("\n");
  }
  return 0;
  }
