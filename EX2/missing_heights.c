#include <stdio.h>

int main (){


    int h1,h2,h3;
    double avg;

    printf("Enter the three known heights (cm): ");
    scanf("%d %d %d", &h1, &h2, &h3);

    printf("Enter the average height of all 5 people: ");
    scanf("%lf", &avg);

    int total = (avg * 5);
    int missing = total - (h1+h2+h3);

    int height1  = missing / 2;          
    int height2 = missing - height1;

    printf("The missing heights are %d cm and %d cm\n", height1, height2);

    return 0;
}
