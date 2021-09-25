### Squares of Character Counts

Given a string S with lower-case alphabets of N length and an integer K. Write an efficient program to find the sum of squares of the count of every unique character in S after removing any K characters from it.<br/>
>Note: You need to remove K characters in such a way that the sum should be the minimum. S does not contain spaces.
<hr>

### Input

First line contains a string S <br/>
Second line contains a single integer K
<hr>

### Output

Print a single integer based on the above context
<hr>

### Explanation

If S = ljjjkk and K = 1 <br/>
If we remove one 'j' from S, then the sum of squares of the count of <br/>
every unique character in S will be (1^2 + 2^2 + 2^2) = 9.
<hr>

### Constraints

1 <= N <= 10^5 <br/>
K <= N
<hr>

### Sample Input 1

```
ljjjkk
1
```
<hr>

### Sample Output 1
```
9
```
<hr>

### Sample Input 2

```
aaahhaaha
2
```
<hr>

### Sample Output 2
```
25
```

