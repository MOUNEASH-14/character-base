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
    else if(ch>='0' && ch<='9')
       printf("it is digit");
    else
       printf("it is symbol");
    return 0;   
}
	
 
 
 