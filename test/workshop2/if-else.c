#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if ( a % 400 == 0 || (a  % 4 == 0 && a % 100 != 0) )
    {
        printf("%d is a leap year. February has 29 days.",a);
    }

    else{
        printf("%d is not a leap year. February has 28 days.",a);
    }
   
    return 0;
}