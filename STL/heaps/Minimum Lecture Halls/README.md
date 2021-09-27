### Minimum Lecture Halls

Given an array A of N lecture time intervals consisting of start time 
and end time. Considering the fact that no two lectures happen 
simultaneously, Write an efficient program to find the minimum 
number of lecture halls needed that will result in conducting all 
lectures.
>Note: If an interval's end time matches another interval's start time, 
then the intervals are not considered as overlapping.
<hr>

### Input

First line contains a single integer N<br/>
N lines follow, each line contains two space separated integers 
representing the start time and the end time of an interval respectively
<hr>

### Output

Print a single integer based on the above context.
<hr>

### Constraints

1 <= N <= 10^5<br/>
0 <= start time, end time <= 1000<br/>
start time < end time
<hr>

### Sample Input 1

```
3
0 10
8 12
13 15
```
<hr>

### Sample Output 1
```
2
```
<hr>

### Sample Input 2

```
2
0 5
10 14
```
<hr>

### Sample Output 2
```
1
```

