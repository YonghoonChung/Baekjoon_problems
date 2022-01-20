# 02577 

[숫자의 개수](https://www.acmicpc.net/problem/2577)

풀이 전<hr>

1. 숫자를 곱해 sum을 찾는다.
2. arr[10]을 만든다.
3. arr[sum%10]++을 하여 숫자를 구해주고
4. sum /= 10을 한다.

풀이 후 <hr>
```cpp
for(int num : arr){
    cout << num << "\n";
}
```
빠른 for문이 가능하다!

이때 sum을 문자열로 변환하여 풀이도 가능하다
```cpp
#include <string>
...
string s = to_string(sum);

for(char c:s){
    arr[c-'0']++;
}
```
