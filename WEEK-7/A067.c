#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
  int size;
  int pattern[10][10] = {0};

  srand(time(0));
  printf("Enter size >>  ");
  scanf("%d", &size);

  for(int i = 0; i < size; i++){
    pattern[rand() % 10][rand() % 10] = 1;
  }

  for(int i = 0; i < 10; i++){
    for(int j = 0; j < 10; j++){
      if(pattern[i][j] == 0)
        printf("+");
      else
        printf("@");
    }
    printf("\n");
  }
  
	return 0;
}
