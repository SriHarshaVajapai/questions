### Minimum Lecture Halls

Given an array A of N bricks' weights. Each time we choose two 
heaviest bricks and smash them. If both the bricks are of the same 
weight, then both of them are destroyed. Otherwise, the brick with 
lesser weight gets destroyed totally, and the other brick gets a new 
weight(absolute difference of these two bricks). In the end, there is 
at most one brick left, return the weight of this brick. If no bricks 
remain, return zero.
<hr>

### Input

First line contains a single integer T. T testcases follow.<br/>
First line of every testcase contains a single integer N.<br/>
Second line of every testcase contains N space separated integers representing the weights of bricks
<hr>

### Output

For every testcase in T, print a single integer based on the above context in a new line.
<hr>

### Constraints

1 <= T <= 100<br/>
1 <= N <= 10^5<br/>
1 <= A[i] <= 10^9
<hr>

### Sample Input 1

```
1
10
1 9 4 3 5 10 7 8 2 6
```
<hr>

### Sample Output 1
```
1
```

