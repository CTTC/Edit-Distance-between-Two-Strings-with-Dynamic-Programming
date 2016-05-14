# Edit-Distance-between-Two-Strings-with-Dynamic-Programming

Use dynamic programming principle to find the edit distance between two strings. The edit distance between two strings is the minimum number of insertions, deletions, and mismatches in an alignment of two strings.

###Input Format: two lines of input strings consisting of lower case latin letters
###Output: edit distance

###Example:
####Input:
```
shorts
ports
```
####Output:
```
3
```
Explanation: One needs to delete 's' at the begining, add 's' at the end of word 'short' to match 'ports'. After these two operations, there is still a mismatch letter between two words. So the total cost of alignment is 3.
