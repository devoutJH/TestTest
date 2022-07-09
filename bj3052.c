#include <stdio.h>

int r[42];
int main(void){
    int cnt = 0;
    
    for(int i = 0; i < 10; ++i){
        int num; scanf("%d", &num);
        if (r[num%42] == 0) {
            cnt += 1; r[num%42] = 1;
        }
    }

    printf("%d\n", cnt);
    return 0;
}
