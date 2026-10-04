#include <stdio.h>

int main (){

    float length,width,fence_perimeter;


    printf("Enter the perimeter of the fence: ");
    scanf("%f", &fence_perimeter);

    length = fence_perimeter / 3.5;
    width = length * (3.0/4.0);

    printf("Length = %.2f\n", length);
    printf("Width = %.2f\n", width);

    return 0;

}