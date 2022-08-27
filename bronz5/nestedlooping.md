# 중첩 반복문

* 1, 2, 3, 4, 5를 5줄 반복하여 출력하는 프로그램  

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
