#include <stdio.h>
#include "my_mat.h"
int main()
{
char a;
scanf("%c",  &a);
while (a!='D')
{
    if(a=='A'){
      matrixA();
    }
    if(a=='B'){
        matrixB();
    }
    if(a=='C'){
        matrixB();
    }

    scanf("%c",  &a);

}
return 0;
}