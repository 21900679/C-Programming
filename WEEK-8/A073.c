#include <stdio.h>

int askBiman(int height, int weight);

int main(void) {

  int height, weight;

  for(int i = 0; i < 10; i++){
    printf("%d번째 사람 신장과 체중? ", i+1);
    scanf("%d %d", &height, &weight);

    if(height < 0 || weight < 0){
      printf("잘못 입력하셨습니다.\n");
      continue;
    }
    
    if(askBiman(height, weight) == 0)
      printf("저체중\n");
    else if(askBiman(height, weight) == 1)
      printf("정상\n");
    else if(askBiman(height, weight) == 2)
      printf("과체중\n");
    else if(askBiman(height, weight) == 3)
      printf("경도비만\n");
    else
      printf("고도비만\n");
  }
  
  return 0;
}

int askBiman(int height, int weight){

  double bmi;

  bmi = weight / ((height * 0.01)*(height * 0.01));

  if(bmi < 18.5)
    return 0;
  else if(bmi < 23)
    return 1;
  else if(bmi < 25)
    return 2;
  else if(bmi < 30)
    return 3;
  else
    return 4;
}
