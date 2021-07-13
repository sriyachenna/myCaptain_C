#include <stdio.h>

int main() {
    int num;
    printf("1.Pizza- Rs 239\n2.Burger- Rs 129\n3.Pasta- Rs 179\n4.French Fries- Rs 99\n5.Sandwich, Rs 149\nEnter the choice of number:");
    scanf("%d",&num);
    switch(num){
        case 1:
        printf("Food Item- Pizza\nPrice- Rs 239");
        break;
        case 2:
        printf("Food Item- Burger\nPrice- Rs 129");
        break;
        case 3:
        printf("Food Item- Pasta\nPrice- Rs 179");
        break;
        case 4:
        printf("Food Item- French Fries\nPrice- Rs 99");
        break;
        case 5:
        printf("Food Item- Sandwich\nPrice- Rs 149");
        break;
        default:
        printf("Not a valid input. Please try again");
        break;
    }
    
    
    return 0;
}
