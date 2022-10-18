#include <stdio.h>

void PrintStar(int size);

int main(void) {

  int size[10];

  printf("숫자 10개를 입력 ");
  for(int i = 0; i < 10; i++){
    scanf("%d", &size[i]);
  }
  for(int i = 0; i < 10; i++){
    PrintStar(size[i]);
  }
  
  return 0;
}

void PrintStar(int size){
  for(int i = 0; i < size; i++){
    printf("*");
  }
  printf("\n");
}
