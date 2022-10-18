#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int main(void) {
  
	char code[10][10];
  srand(time(0));

  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 3; j++)
      code[i][j] = 'A' + rand() % 26;
    code[i][3] = '-';
  }
  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 6; j++)
    code[i][j+4] = rand() % 10 + '0';
  }

  printf("10개의 코드가 생성되었습니다.\n");
  for(int i = 0; i < 10; i++){
    printf("Code #%d : ", i + 1);
    for(int j = 0; j < 10; j++){
      printf("%c", code[i][j]);
    }
    printf("\n");
  }
	return 0;
}

