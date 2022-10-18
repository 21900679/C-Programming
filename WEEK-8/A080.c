#include <stdio.h>

int markBingo(int num, int b[5][5]);

void printBingo(int b[5][5]);

int main(void) {
	int bingo[5][5]={0}; // 빙고용 매트릭스
  int number;

  while(1){
    printf("Enter a number(1~25) > ");
    scanf("%d", &number);
    if(number > 25 || number < 1){
      printf("EXIT!\n");
      break;
    }
    else{
      if(markBingo(number, bingo) == 1)
      break;
    else
      continue;
    }
  }
  printBingo(bingo);
}

int markBingo(int num, int b[5][5]){

  int num1, num2, bingo1, bingo2;
  num1 = num / 5;
  num2 = num % 5 - 1;

  if(b[num1][num2] == 0){
    b[num1][num2] = 1;
    bingo1 = bingo2 = 0;
    for(int i = 0; i < 5; i++){
      if(b[num1][i] == 1)
        bingo1++;
    }
    for(int i = 0; i < 5; i++){
      if(b[i][num2] == 1)
        bingo2++;
    }
    if(bingo1 == 5 || bingo2 == 5){
      printf("빙고!\n");
      return 1;
    }
    else
      return -1;
  }
  else{
    printf("중복!\n");
    return 0;
  }
}

void printBingo(int b[5][5]){
  printf("BINGO MATRIX\n");
  printf("---------------------\n");
  for(int i = 0; i < 5; i++){
    printf("| %d | %d | %d | %d | %d |\n", b[i][0], b[i][1], b[i][2], b[i][3], b[i][4]);
  }
  printf("---------------------\n");
}
