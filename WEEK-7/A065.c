#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int coins;      // 사용자의 코인 수. (최초에 입력받음)
  int number[3];  // 랜덤하게 만들어진 슬롯머신의 숫자 3개 
  int dummy;      // 게임스타트를 위한 의미 없는 입력 숫자 
  int i = 1;          // 반복문을 위한 변수
  int same = 1;
  srand(time(0));

  printf("사용하실 코인의 개수를 입력하세요. ");
  scanf("%d", &coins);

  while(coins > 0){
    same = 1;
    printf("게임 %d회 Start!!! (아무 숫자나 입력하세요) ", i);
    scanf("%d", &dummy);
    coins--;
    for(int j = 0; j < 3; j++){
      number[j] = rand()%9 + 1;
    }
    for(int j = 0; j < 3; j++){
      for(int x = 0; x < j; x++){
        if(number[j] == number[x])
          same++;
      }
    }
    printf("게임 결과 : %d %d %d ---->", number[0], number[1], number[2]);
    if(same == 1)
      printf("꽝입니다... 아쉽군요\n");
    else if(same == 3){
      printf("숫자 3개 일치... 코인 4개 증정\n");
      coins = coins + 4;
    }
    else if(same == 2){
      printf("숫자 2개 일치... 코인 2개 증정\n");
      coins = coins + 2;
    }
  }
  printf("남아있는 코인은 0개입니다.\n\n게임 종료!!");
  
  return 0;
}
