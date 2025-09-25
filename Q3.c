#include<stdio.h>
int main()
{
    char ch;
    printf("enter the char:");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
       printf("it is  lowercase");
    else if(ch>='A' && ch<='Z')
       printf("it is uppercase");
    else
       printf("it is not alphabet");
    return 0;   
}
	
 
	
 
 
 