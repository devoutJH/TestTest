# 더하기 사이클 (번호 1110)
[문제](https://www.acmicpc.net/problem/1110)  
 
### 문제  
> 이 문제 특정한 규칙에 따라 몇 번 진행해야 다시 원래의 수로 돌아오는지 출력하는 문제  
> 원래의 수의 십의자리와 일의자리를 더해서 새로운 수의 일의 자리로, 원래의 수의 일의자리를 십의자리로 만드는 규칙  
> `나누기`, `나머지 연산`을 이용하여 해결  

### 해결 코드  

``` c
#include <stdio.h>

int main(void){
    int n = 0, num; scanf("%d", &num);
    int new_num = num;
    do{
        new_num = (new_num % 10) * 10 + ((new_num / 10) + (new_num % 10)) % 10;
        ++n;
    }while ( new_num != num);
    printf("%d", n);
    return 0;
}
```
