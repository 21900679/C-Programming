#include <stdio.h>

void PrintChar(int size, char ch);

int main(void) {

  char ch;
  int size[10];

  printf("사용할 문자? ");
  scanf("%c", &ch);
  printf("숫자 10개? ");

  for(int i = 0; i < 10; i++){
    scanf("%d", &size[i]);
  }

  for(int i = 0; i < 10; i++){
    PrintChar(size[i], ch);
  }
  
  return 0;
}

void PrintChar(int size, char ch){
  for(int i = 0; i < size; i++){
    printf("%c", ch);
  }
  printf("\n");
}
