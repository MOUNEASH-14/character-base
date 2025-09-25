#include <stdio.h>
int main() {
    int a, b, c, d;
    printf("Enter four sides: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0) 
        printf("Sides must be positive.\n");
    else if (a == b && b == c && c == d) 
        printf("It is a Square.\n");
    else if (a == c && b == d) 
        printf("It is a Rectangle.\n");
    else 
        printf("It is neither a Square nor a Rectangle.\n");
    return 0;
}

 
	
 
 
 