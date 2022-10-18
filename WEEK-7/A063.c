#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void){
  int lotto_com[6];   // 컴퓨터가 만들어 낸 로또 번호
  int lotto_user[6];  // 사용자가 입력한 로또 번호
  int count = 1;          // 현재 만들어지고 있는 로또 번호의 순서(0, 1, 2, 3, 4, 5)
  int match_count = 0;    // 일치하는 로또 번호의 갯수 (0~6)
  int ys = 1;
  srand(time(0));
  
  for(int i = 0; i < 6; i++){
    printf("원하는 %d번째 로또 숫자를 입력 ",i+1);
    scanf("%d", &lotto_user[i]);

    for(int j = 0; j < i; j++){
      if(lotto_user[i] == lotto_user[j] || lotto_user[i] > 45 || lotto_user[i] < 1){
        printf("-> 잘못 입력\n");
        i--;
        break;
      }
    }
  }
  
  lotto_com[0] = rand()%45 + 1;
  while(count < 6){
    ys = 1;
    lotto_com[count] = rand()%45 + 1;
    for(int i = 0; i < count; i++){
      if(lotto_com[count] == lotto_com[i]){
        ys = 0;
        break;
      }
    }
    if(ys == 1)
      count++;
  }
  
  printf("\n이번 주의 로또 당첨 번호는 ");
  for(int i = 0; i < 6; i++){
    printf("%d ", lotto_com[i]);
  }

  for(int i = 0; i < 6; i++){
    if(lotto_com[i]==lotto_user[i])
      match_count++;
  }

  printf("\n\n일치하는 로또 번호는 %d개 입니다.", match_count);  
  
  return 0;
}
