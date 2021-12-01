#include <stdio.h>
#include "my_mat.h"
int main(){

char c;
scanf("%c",  &c);
while (c!='D')
{
    if(c=='A'){
      matrixA();
    }
    if(c=='B'){
        matrixB();
    }
    if(c=='C'){
        matrixC();
        printf("\n");
    }

    scanf("%c",  &c);

}
return 0;
}