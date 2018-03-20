#include <stdio.h>

double rect_perim(double length, double width);
double rect_area(double length, double width);

int main(void) {

    double length, width, area;
    printf("Length: ");
    scanf("%lf", &length);
    printf("Width: ");
    scanf("%lf", &width);

    area = rect_area(length, width);

    printf("Area = %lf", area);

    return 0;
}

double rect_area(double length, double width) {

    double area = length * width;
    return area;
}

double rect_perim(double length, double width) {
    return 2*length + 2*area;
}
