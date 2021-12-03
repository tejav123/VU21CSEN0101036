#include <stdio.h>

int main()
{
    char ch;
    printf("enter the small letters");
    scanf("%c",&ch);
    switch(ch) 
    {
    case 'a' :
    printf(" is vowel");
    break;
    case 'e' :
    printf(" is vowel"); 
    break; 
    case 'i' : 
    printf(" is vowel");
    break;
    case 'o' :
    printf("vowel");
    break; 
    case 'u' :
    printf("is vowel"); 
    break;  
    
    default :
    printf(" is consonant");
    }
    return 0;
    }
