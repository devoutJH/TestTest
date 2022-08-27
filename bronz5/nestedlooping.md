# 중첩 반복문

```c
#include <stdio.h>

int main(void) {
    for(int i = 0; i < 5; ++i){
        for(int j = 1; j < 6; ++j){
            printf("%d ", j);
        }
        printf("\n");
    }
}
```
