#include <stdio.h>

void PrintCharWithBlank(int blanks, int size, char ch);

int main(void) {
	char ch;
	int height, blank;
	
	printf("사용할 문자? ");
	scanf("%c", &ch);
	printf("높이와 여백의 크기? ");
	scanf("%d %d", &height, &blank);

  if(height < 0 || blank < 0)
    printf("잘못 입력하셨습니다.");
  else	
	  PrintCharWithBlank(blank, height, ch);
	
	return 0;
}

void PrintCharWithBlank(int blanks, int size, char ch){
  /*
    blanks = blank + size - 1
  */
  int totalblank = blanks + size - 1;

  for(int i = 0; i < size; i++){
    for(int j = 0; j < totalblank; j++){
      printf(" ");
    }
    totalblank--;
    for(int j = 0; j < i + 1; j++){
      printf("%c", ch);
    }
    printf("\n");
  }
  
}

