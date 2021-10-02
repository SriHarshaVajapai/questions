### Longest AND Subarray
You are given an integer N. Consider the sequence containing the integers 
1,2,…,N in increasing order (each exactly once). Find the length of the longest 
subarray in this sequence such that the bitwise AND of all elements in the 
subarray is positive.

### Input
The first line contains T denoting the number of test cases. Then the test cases follow. <br/>
Each test case contains a single integer N on a single line

### Output
For each test case, output on a single line the length of the longest subarray that 
satisfy the given property.

### Constraints
1 ≤ T ≤ 10^5<br/>
1 ≤ N ≤ 10^9

### Sample Input 1
```
5
1
2
3
4
7
```

### Sample Output 1
```
1
1
2
2
4
```

### Explanation
**Test case 1**: The only possible subarray we can choose is [1].

**Test case 2**: We can't take the entire sequence [1,2] as a subarray because the bitwise AND of 1 and 2 is zero. We can take either [1] or [2] as a subarray.

**Test case 4**: It is optimal to take the subarray [2,3] and the bitwise AND of 2 and 3 is 2.

**Test case 5**: It is optimal to take the subarray [4,5,6,7] and the bitwise AND of all integers in this subarray is 4.