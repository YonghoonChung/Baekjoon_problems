# IO_BODMAS
https://www.acmicpc.net/step/1
### 01008 A/B
```c++
cout.precision(12);
cout << fixed;
cout << a / b;
```
`cout.precision(12);`는 출력할때 몇번째 자리수를 보여준다
`cout << fixed;` -> 사용시 뒷자리수가 precision(n)의 n을 기준으로 n번째 소숫점을 만든다

### 02588 곱셈 
1. 
```c++
#include <stdio.h>
#include <stdlib.h>  // atoi 함수가 선언된 헤더파일
 
 
int main(int argc, char const *argv[]) {
    int A;
    char B[4];
 
    scanf("%d", &A);
    scanf("%s", B);
 
    printf("%d\n", A * (B[2] - '0'));
    printf("%d\n", A * (B[1] - '0'));
    printf("%d\n", A * (B[0] - '0'));
    printf("%d\n", A * atoi(B));
    return 0;
}
```
2.
```c++
#include <iostream>
#include <string>   // string, stoi()을 쓰기 위한 헤더파일
 
using namespace std;
 
int main(int argc, char const *argv[]) {
    int A;
    string B;
 
    cin >> A;
    cin >> B;
 
    cout << A * (B[2] - '0') << "\n";
    cout << A * (B[1] - '0') << "\n";
    cout << A * (B[0] - '0') << "\n";
    cout << A * stoi(B) << "\n";    // string -> int(10진수) 로 변환
    return 0;
}
```
3. 나머지연산을 사용하여 문제풀기
```c++
#include <iostream>
 
using namespace std;
 
int main(int argc, char const *argv[]) {
    int A, B;
 
    cin >> A >> B;
 
    cout << A * (B % 10) << "\n";
    cout << A * ((B % 100) / 10) << "\n";
    cout << A * (B / 100) << "\n";
    cout << A * B;
 
    return 0;
}
```
