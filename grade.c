#include <stdio.h>

int main() {

    int num;
    printf("Enter the marks: ");
    scanf("%d",&num);
       if(num<=100&&num>=90){
            printf("Grade A");
        }
        else if(num>=70&&num<=89){
            printf("Grade B");
        }
        else if(num>=60&&num<=79){
            printf("Grade C");
        }
        else if(num>=35 &&num<=59){
            printf("Grade D");
        }
        else if(num>0 && num<35){
            printf("Grade F");
        }
        else{
            printf("Not a valid input");
        }
    
    
    return 0;
}
