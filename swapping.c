#include <stdio.h>
int main() {

    int x,y;
    printf("Enter the two numbers: ");
    scanf("%d %d",&x,&y);
    printf("Before swapping: %d %d\n",x,y);
    x=x-y;
    y=x+y;
    x=y-x;
    printf("After swapping: %d %d",x,y);
    
    return 0;
}
