#include <stdio.h>

struct Box
 {
    float length;
    float width;
    float height;
};

float calculateVolume(struct Box *box) {
    return box->length * box->width * box->height;
}

float calculateSurfaceArea(struct Box *box) {
    return 2 * (box->length * box->width + box->length * box->height + box->width * box->height);
}

int main() {
    struct Box box;
    struct Box *boxPtr = &box;
    (*boxPtr).length = 5.5;
    (*boxPtr).width = 3.2;
    (*boxPtr).height = 2.8;

    printf("Volume: %.2f\n", calculateVolume(boxPtr));
    printf("Surface Area: %.2f\n", calculateSurfaceArea(boxPtr));
    boxPtr->length = 5.5;
    boxPtr->width = 4.2;
    boxPtr->height = 3.8;

    printf("Volume: %.2f\n", calculateVolume(boxPtr));
    printf("Surface Area: %.2f\n", calculateSurfaceArea(boxPtr));

    return 0;
}

