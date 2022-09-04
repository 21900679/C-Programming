#include <stdio.h>

int main(void) {
	int month, day;   // 월, 일
	int day_count = 0;    // 1년 중 날 수

  printf("Month? ");
  scanf("%d", &month);
  printf("Day? ");
  scanf("%d", &day);

  if(month > 12)
    printf("잘못 입력하셨습니다.");

  switch(month){
    case 12:
      if(month == 12 && day > 31){
        printf("잘못 입력하셨습니다.");
        break;
      }
      day_count = day_count + 30;
    case 11:
      if(month == 11 && day > 30){
        printf("잘못 입력하셨습니다.");
        break;
      }
      day_count = day_count + 31;
    case 10:
      if(month == 10 && day > 31){
        printf("잘못 입력하셨습니다.");
        break;
      }
      day_count = day_count + 30;
    case 9:
      if(month == 9 && day > 30){
        printf("잘못 입력하셨습니다.");
        break;
      }
      day_count = day_count + 31;
    case 8:
      if(month == 8 && day > 31){
        printf("잘못 입력하셨습니다.");
        break;
      }
      day_count = day_count + 31;
    case 7:
      if(month == 7 && day > 31){
        printf("잘못 입력하셨습니다.");
        break;
      }
      day_count = day_count + 30;
    case 6:
      if(month == 6 && day > 30){
        printf("잘못 입력하셨습니다.");
        break;
      }
      day_count = day_count + 31;
    case 5:
      if(month == 5 && day > 31){
        printf("잘못 입력하셨습니다.");
        break;
      }
      day_count = day_count + 30;
    case 4:
      if(month == 4 && day > 30){
        printf("잘못 입력하셨습니다.");
        break;
      }
      day_count = day_count + 31;
    case 3:
      if(month == 3 && day > 31){
        printf("잘못 입력하셨습니다.");
        break;
      }
      day_count = day_count + 28;
    case 2:
      if(month == 2 && day > 28){
        printf("잘못 입력하셨습니다.");
        break;
      }
      day_count = day_count + 31;
    case 1:
      if(month == 1 && day > 31){
        printf("잘못 입력하셨습니다.");
        break;
      }
      day_count = day_count + day;
      printf("이 날짜는 1년 중 %d번째 날에 해당됩니다.", day_count);
      break;
  }  

	return 0;
}
