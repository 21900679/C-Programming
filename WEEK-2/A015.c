#include <stdio.h>

int main(void) {
	int birth_year;   // 태어난 년도 
	int age;          // 나이

  printf("Birth year? ");
  scanf("%d", &birth_year);

  age = 2022 - birth_year + 1;

  if(age < 7)
    printf("유아입니다.");
  else if(7 <= age && age < 13)
    printf("어린이입니다.");
  else if(13 <= age && age < 20)
    printf("청소년입니다.");
  else if(20 <= age && age < 30)
    printf("청년입니다.");
  else if(30 <= age && age < 60)
    printf("중년입니다.");
  else
    printf("노년입니다.");
	
	return 0;
}
