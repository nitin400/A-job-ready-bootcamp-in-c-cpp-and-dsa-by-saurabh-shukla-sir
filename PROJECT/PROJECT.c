#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include <time.h>
void red();
void reset();
int main()
{
    printf("\t\t\t\tMATRIX PUZZLE\n\n");
        
    red();
    printf("\t\t\t\tRULES OF THE GAME..\n\
    1.You can move only 1 step at a time by arrow key\n\
            move up : by up arrow key\n\
            move Down :by down arrow key\n\
            move left : by left arrow key\n\
    2. You can move number at empty position only.\n\
    3. For each valid move : your total number of move will decreased by 1\n\
    4. Wining situation : number in a 4*4 matrix should be in order from 1 to 15\n\
    5. You can exit the game at any time by pressing 'E' or 'e' \n so Try to win in minimum no of move\n");
    
    reset();


   	unsigned short i, j;

    

    for(i = 0; i < 4;i++) {
    	for(j = 0; j < 4;j++) {

    		printf("%d ", rand()%15);
    	}
    	printf("\n");
    }
    
     
    
    
    
}


void red () {
  printf("\033[1;31m");
}
void reset()
{
    printf("\033[Om");
}




