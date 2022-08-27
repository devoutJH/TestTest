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


```C
#include <stdio.h>

int main(void) {
    int n; scanf("%d", &n);
    for(int i = 0; i < n; ++i){
        for(int k = 0; k < n - (i + 1); ++k){
            printf(" ");
        }
        for(int j = 0; j <= i; ++j){
            printf("*");
        }
        printf("\n");
    }
}
```
