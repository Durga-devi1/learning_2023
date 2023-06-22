#include <stdio.h>

typedef struct
 {
    int x;
    int y;
} 
Point;

void swapFields(Point* p1, Point* p2);

int main()
 {
    Point point1, point2;

    printf("Enter values for point 1 (x and y): ");
    scanf("%d %d", &point1.x, &point1.y);

    printf("Enter values for point 2 (x and y): ");
    scanf("%d %d", &point2.x, &point2.y);

    printf("\nBefore swapping:\n");
    printf("Point 1: x = %d, y = %d\n", point1.x, point1.y);
    printf("Point 2: x = %d, y = %d\n", point2.x, point2.y);

    swapFields(&point1, &point2);

    printf("\nAfter swapping:\n");
    printf("Point 1: x = %d, y = %d\n", point1.x, point1.y);
    printf("Point 2: x = %d, y = %d\n", point2.x, point2.y);

    return 0;
}

void swapFields(Point* p1, Point* p2)
 {
    Point temp;

    temp.x = p1->x;
    temp.y = p1->y;

    p1->x = p2->x;
    p1->y = p2->y;

    p2->x = temp.x;
    p2->y = temp.y;
}

