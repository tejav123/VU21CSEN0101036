#include <stdio.h>

int main()  
{
    int a,b,c,d,e,h,g,ch;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b); 
    printf("enter your choice"); 
    scanf("%d",&ch);
    switch(ch)
    { 
        case 1 :
        c=a+b;
        printf("sum is %d",c);
        break;
        case 2 :
        d=a-b;
        printf("sub is %d",d);
        break; 
        case 3 : 
        e=a/b;
        printf("div is %d",e);
        break;
        case 4 : 
        g=a*b;
        printf("mul is %d",g);
        break; 
        case 5 : 
        h=a%b;
        printf("mod is %d",h);
        break;
        default : 
        printf("error");
    }
    
    return 0;
}
