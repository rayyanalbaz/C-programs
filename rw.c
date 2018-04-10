#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

char walk[10][10];
int move,row,col,i,j,direction = rand()%4;
char letter='A';
srand(time(NULL)); 



for(i=0;i < 10 ;i++)
{
 for(j=0;j < 10;j++)
 {
  walk[i][j] = '.'; 
  
  }
}



row = 0;
col = 0;
walk[row][col]= 'A';

i=-1;
while( ++i < 4 )
{
    switch(direction) 
    {
        case 0:
            if( row-1 >= 0 && walk[row-1][col] == '.' ) {
                --row;
                i = -1;    
            }
            break;
        case 1:
            if( col+1 < 10 && walk[row][col+1] == '.' ) {
                ++col;
                i = -1;    
            }
            break;
        case 2:
            if( row+1 < 10 && walk[row+1][col] == '.' ) {
                ++row;
                i = -1;
            }
            break;
        case 3:
            if( col-1 >= 0 && walk[row][col-1] == '.' ) {
                --col;
                i = -1;
            }
            break;
    }

    if( i != -1 ) {
        direction = (direction+1)%4;
    }
    else {
        break;
    }
}


 

for(i=0;i<10;i++)
{
 for(j=0;j<10;j++)
 {
   if(j == 9)
     printf("%c%c\n", walk[i][j]);
    else 
     printf("%c%c", walk[i][j]);
 }  
}
return 0;
}

