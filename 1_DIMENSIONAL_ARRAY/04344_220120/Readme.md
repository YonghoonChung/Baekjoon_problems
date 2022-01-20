# [04344](https://www.acmicpc.net/problem/4344)

### 풀기 전 <hr>
평균을 넘는 학생들의 비율을 계산하는 문제

배열을 arr[1000]으로 잡고 시작한다.<br>
각각의 점수를 모두 받아 평균을 구하고 <br>
다시 for문을 돌려 평균보다 높게 나온사람수를 찾아야한다.<br>

### 풀이 중 <hr>
문제가 아주 잘 풀리고 있다 다만 소숫점이 없이 잘떨어지는 것 답이 잘 안나온다 <br>
여기서 나는 이 [사이트에서](https://st-lab.tistory.com/280?category=949960) 공부 중인것을 적어놓으려고 한다.

동적할당 vs 정적할당
```cpp
int main() {
	int arr[5];	// 배열의 정적 할당
}
```
이렇게 실행하면 항상 배열의 공간을 정해줘야 한다 (아마도 아까 내가 안됬던 이유도 여기에 속하지 않았나 싶다.). 이것을 정적배열이라고 한다.
```java
int size;
size = input();
 
int[] arr = new int[size];
```
~~그래! 내가 이거 생각하면서 했더니 안된거였다! 에잇!~~ <br>근데 C와 C++에서 지원한다고 한다<br> ~~아까는 안한다면서!!~~

```cpp
int main() {
	int size;
	cin >> size;
 
	int* arr = (int*)malloc(sizeof(int) * size);
}
```
뭐 이거는 malloc이랑 calloc이니깐 패스 한다. 위 코드는 C와 C++에서 둘다 지원한다

```cpp
int main() {
	int size;
	cin >> size;
 
	int* arr = new int[size];
}
``` 
오히려 C++에서 자바처럼 지원한다.

결국에는 3가지 있다
```cpp
int* arr = new int[size];
int arr[size];
int* arr = (int*)malloc(sizeOf(int) * size);
```
\+ 추가로 Vector도 있다고 한다.

```cpp
int N;
cin >> N;
 
// 동적 배열 선언 및 생성
vector<int> vec;
 
for(int i = 0; i < N; i++) {
	int value;
	cin >> value;
	vec.push_back(value);	// 벡터의 맨 마지막 원소 뒤에 원소 추가
}
```
만약 배열에 {1,2,3,4}가 있는데 push_back(7)을 넣으면 {1,2,3,4,7}이 된다!!!


### 풀이 후<hr>
와 처음에는 왜 이게 안되는건가 싶어서 코드를 하나하나 다 확인했다. 알고보니깐 `cout.fixed;`와`cout << fixed;`는 엄청나게 큰 차이를 갖고 있었다.... 이제는 틀릴수가 없겠다...

또 새로운 걸 알았다
```cpp
for(auto &val : vec) {
	if(val > avg) {
		count++;
	}
}
```
일단은 사용하는 값에 &를 넣어준다 (이유는 아직 모르겠음...) 그것보다 auto가 된다... 이거는 추후에 다시 알거같다.