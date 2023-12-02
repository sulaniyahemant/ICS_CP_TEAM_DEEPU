#include <stdio.h>

int main() {
    int choice;
    float side, base, length, breadth, height, area, radius;
    float major_axis, minor_axis, outer_radius, inner_radius;
    float diagonal_1, diagonal_2;

    printf(" 1_Circle\n");
    printf(" 2_Rectangle\n");
    printf(" 3_Triangle\n");
    printf(" 4_Square\n");
    printf(" 5_Annulus\n");
    printf(" 6_Sphere\n");
    printf(" 7_Ellipse\n");
    printf(" 8_Parallelogram\n");
    printf(" 9_Cylinder\n");
    printf(" 10_rhomus\n");
   
    printf("Enter the choice\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the radius\n");
            scanf("%f", &radius);
            area = 3.142 * radius * radius;
            printf("Area of a circle is: %f\n", area);
            break;

        case 2:
            printf("Enter the breadth and length\n");
            scanf("%f %f", &breadth, &length);
            area = breadth * length;
            printf("Area of a Rectangle is: %f\n", area);
            break;

        case 3:
            printf("Enter the base and height\n");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("Area of a Triangle is: %f\n", area);
            break;

        case 4:
            printf("Enter the side\n");
            scanf("%f", &side);
            area = side * side;
            printf("Area of a Square is: %f\n", area);
            break;

        case 5:
            printf("Enter outer_radius and inner_radius\n");
            scanf("%f %f", &outer_radius, &inner_radius);
            area = 3.142 * (outer_radius * outer_radius - inner_radius * inner_radius);
            printf("Area of an Annulus is: %f\n", area);
            break;

        case 6:
            printf("Enter the radius\n");
            scanf("%f", &radius);
            area = 4 * 3.142 * radius * radius;
            printf("Area of a Sphere is: %f\n", area);
            break;

        case 7:
            printf("Enter the major_axis and minor_axis\n");
            scanf("%f %f", &major_axis, &minor_axis);
            area = 3.142 * major_axis * minor_axis;
            printf("Area of an Ellipse is: %f\n", area);
            break;

        case 8:
            printf("Enter the base and height\n");
            scanf("%f %f", &base, &height);
            area = base * height;
            printf("Area of a Parallelogram is: %f\n", area);
            break;
            
        case 9:
            printf("Enter the radius and height\n");
            scanf("%f %f", &radius, &height);
            area = 2 * 3.14 * radius * height;
            printf("Area of a cylinder is: %f\n", area);
            break;
            
        case 10:
            printf("Enter the diagonal_1 and diagonal_2");
            scanf("%f %f", &diagonal_1, &diagonal_2);
            area = 0.5 * diagonal_1 * diagonal_2;
            printf("Area of a rhombus is: %f\n", area);
            break;

        default:
            printf("Error in choice\n");
            break;
    }

    return 0;
}