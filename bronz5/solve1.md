[백준 - 문제 2754](https://www.acmicpc.net/problem/2754)  
```
#include <iostream>

int main(void){
    std::string str; std::cin >> str;
    std::cout << std::fixed;
    std::cout.precision(1);
    
    if(str == "A+") std::cout << 4.3;
    else if(str == "A0") std::cout << 4.0;
    else if(str == "A-") std::cout << 3.7;
    else if(str == "B+") std::cout << 3.3;
    else if(str == "B0") std::cout << 3.0;
    else if(str == "B-") std::cout << 2.7;
    else if(str == "C+") std::cout << 2.3;
    else if(str == "C0") std::cout << 2.0;
    else if(str == "C-") std::cout << 1.7;
    else if(str == "D+") std::cout << 1.3;
    else if(str == "D0") std::cout << 1.0;
    else if(str == "D-") std::cout << 0.7;
    else std::cout << 0.0;

    return 0;
}
```
