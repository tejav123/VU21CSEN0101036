#include <stdio.h>

int main() { 
    int a;
    printf("enter the value of a");
    scanf("%d",&a);
    if(a%5==0 && a%11==0) 
    {
    printf(" a is divisble by 5 and 11");
    }
    else 
    {
    printf("a is not divisble bt 5 and 11");
    }
    return 0;
}
