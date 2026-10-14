#include <stdio.h>

int main(){

    double length = 8.5;
    double width = 4.2;
    double height = 3.0;
    double perimeter, area, volume;

    perimeter = length + width;
    area = width * length * 2;
    volume = width * height * length;

    printf("Length = %.2f\nWidth = %.2f\nHeight = %.2f\nPerimeter = %.2f\nArea = %.2f\nVolume = %.2f", length, width, height, perimeter, area, volume);

    return 0;
}
