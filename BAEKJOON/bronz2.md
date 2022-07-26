###  카드게임 (10801번)

[백준 10801](https://www.acmicpc.net/problem/10801)  
[연습](https://www.naver.com)  

#### 문제 접근  
* A와 B의 10판동안 진행된 카드게임 점수를 이용하여 각 라운드에서 누가 승리했는지 확인해야 함  
* 총 10판동안 진행된 게임에서 더 많이 이긴 사람이 누군지 화면에 출력, 만일 비겼으면 D라고 출력    

#### 코드 설명  

* 반복문을 이용하여 a, b의 점수를 각 배열 a, b에 저장  
``` c
    int i;
    for(i = 1; i <= n; ++i)
        scanf("%d", &a[i]);         
    for(i = 1; i <= n; ++i)
```

* 각 배열에서 같은 라운드에 해당되는 인덱스 번호를 이용하여 값을 들고와 비교하고 a, b가 이긴 횟수를 저장할 변수를 증가  
``` c
    int awin, bwin;
    awin = bwin = 0;
    for(i = 1; i <= n; ++i){
        if (a[i] > b[i]) ++awin;
        else if (a[i] < b[i]) ++bwin;
    }
```

* 위 반복을 이용하여 결과를 추출하고 해당 내용에서 더 많이 승리한 사람을 출력  
``` c
    if (awin > bwin) printf("A\n");
    else if (awin < bwin) printf("B\n");
    else printf("D\n");
```

* 전체 코드  
``` c
#include <cstdio>
    
int n = 10;
int a[11], b[11];
    
int main(void){
    int i;
    for(i = 1; i <= n; ++i)
        scanf("%d", &a[i]);         
    for(i = 1; i <= n; ++i)
        scanf("%d", &b[i]);
        
    int awin, bwin;
    awin = bwin = 0;
    for(i = 1; i <= n; ++i){
        if (a[i] > b[i]) ++awin;
        else if (a[i] < b[i]) ++bwin;
    }
        
    if (awin > bwin) printf("A\n");
    else if (awin < bwin) printf("B\n");
    else printf("D\n");
        
    return 0;
}
```
