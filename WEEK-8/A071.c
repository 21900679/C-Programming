#include <stdio.h>

int ageToGroup(int b);
 
int main(void) {
 int birth_year;     // 입력받은 태어난 년도
  int year[100];      // 각 사람들의 생년 (최대 100명)  
  int count_person = 0;   // 입력된 인원 수
  int count[6] = {0};       // 6가지 연령대별 숫자

  for(int i = 0; i < 100; i++){
    printf("%d번째 사람의 태어난 년도를 입력하시오. ", i+1);
    scanf("%d", &birth_year);

    if(birth_year > 2020)
      break;
    else{
      year[i] = 2022 - birth_year + 1;
      count_person++;
      count[ageToGroup(birth_year)]++;
    }
  }

  for(int i = 0; i < count_person; i++){
    printf("%d번째 사람의 나이는 %d입니다.\n", i+1, year[i]);
  }

  printf("유아는 %d명입니다.\n", count[0]);
  printf("어린이는 %d명 입니다.\n", count[1]);
  printf("청소년은 %d명 입니다.\n", count[2]);
  printf("청년은 %d명 입니다.\n", count[3]);
  printf("중년은 %d명 입니다.\n", count[4]);
  printf("노년은 %d명 입니다.\n", count[5]);

 return 0;
}

int ageToGroup(int b){
  int age;

  age = 2022 - b + 1;

  if(age < 7)
    return 0;
  else if(age < 13)
    return 1;
  else if(age < 20)
    return 2;
  else if(age < 30)
    return 3;
  else if(age < 60)
    return 4;
  else 
    return 5;
}
