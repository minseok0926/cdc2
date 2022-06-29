1 - 1번 문제
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
1-2번 문제
#include <stdio.h>
#include <string.h>
int main() {
  int ar2[6][5] = {0};
  int i, j;
  int a;
  int b;
  int c = 0;
  scanf("%d", &b);
  a = 1;
  for(i = 0; i < 6; i++){
    for(j = 0; j < 5; j++){
      ar2[i][j] = a;
      a++;
    }
  }
  for(i = 0; i < 5; i++){
    printf("%d학년  %d반 인원은 %2d\n", b, i+1, ar2[b][i]);
    c += ar2[b][i];
  }
  printf("총 인원 : %d\n", c);
  return 0;
  }
1-3번 문제
#include <stdio.h>
#include <string.h>
int main() {
  int ar2[6][5] = {0};
  int i, j;
  int a;
  int ban;
  int c = 0;
  scanf("%d", &ban);
  a = 1;
  for(i = 0; i < 6; i++){
    for(j = 0; j < 5; j++){
      ar2[i][j] = a;
      a++;
    }
  }
  for(i = 0; i < 6; i++){
    printf("%d학년  %d반 인원은 %2d\n", i+1, ban, ar2[i][ban-1]);
    c += ar2[i][ban-1];
  }
  printf("총 인원 : %d\n", c);
  return 0;
  }
