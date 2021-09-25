### Unique Puzzles

Given three friends who like to solve exciting puzzles, a solved puzzle is identified uniquely by a positive number less than or equal to 10000. Write a program to find who among the three has solved more number of puzzles that none of the other two have solved
<hr>

### Input

Input contains three lines, one line for each friend(1, 2, and 3). Each line contains an integer S, representing the number of puzzles solved by that person(1, 2, or 3), followed by a space and S space separated positive numbers representing puzzles solved.
<hr>

### Output

Print in a new line, the friend number(1, 2, or 3), followed by a space and an integer, representing the number of puzzles he solved based on the above context, followed by a space and the sorted list of these puzzles' numbers, where a space separates each puzzle number. <br/>
If there is a tie, print one such line for each tied friend, sorted by the number of the friend. There is a new line at the end of the output.
Note: 0 is also a tie.
<hr>

### Constraints

1 <= S <= 1000<br/>
1 <= puzzle number <= 10000
<hr>

### Sample Input 1

```
3 1 2 3
4 4 5 6 7
5 8 9 10 11 12
```
<hr>

### Sample Output 1
```
3 5 8 9 10 11 12
```
<hr>

### Sample Input 2

```
2 1 5
2 2 3
3 2 3 1
```
<hr>

### Sample Output 2
```
1 1 5
```
<hr>

### Sample Input 3

```
2 9 4
1 5
1 4
```
<hr>

### Sample Output 3
```
1 1 9
2 1 5
```
<hr>
