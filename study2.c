#include <stdio.h>

int main(void){
    float f1, f2, f3, f4, f5; scanf("%f %f %f %f %f", &f1, &f2, &f3, &f4, &f5);

    float max_float = f1;

    if (max_float < f2) {
        max_float = f2;
    }

    if (max_float < f3) {
        max_float = f3;
    }

    if (max_float < f4) {
        max_float = f4;
    }

    if (max_float < f5) {
        max_float = f5;
    }

    printf("%.2f", max_float);
    
    return 0;
}
