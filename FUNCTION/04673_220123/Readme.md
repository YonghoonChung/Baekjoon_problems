# [04674](https://www.acmicpc.net/problem/4673)

### 풀이전 <hr>
while로 풀기보다는 for로 1부터 10000까지 숫자를 사용한다 또 10000칸의 배열을 만든다. 각 수를 통해 d()를 사용하여 만들어진수는 false 없는 수는 true로 만들어 나중에 한번도 추가가 안된 false를 출력한다.

### 풀이 후<hr>
일단은 내 알고리즘이 얼추 맞았다. 다만 내가 놓친게 하나있는데 d()를 사용하는중 원래 담던 범위를 넘어가는 것이다. 그분은 생각을 못하고 있어서 제출했을 때 에러가 나고 다시 풀었다.