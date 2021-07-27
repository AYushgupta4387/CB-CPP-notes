// Replace Bits in N by M

/* You are given two 32 bit numbers, N and M, and 2 bit positions, i and j.
Write a method to set all bits between i and j in N equal to M. This means, M becomes a substring of N located at i and starting at j.
M and N will be given in decimal format. */

/* EXAMPLE -
Input: N = 1000000000
M = 10101, i = 2, j = 3
Output: N = 1001010100 */

#include<iostream>
using namespace std; 

int clearRangeItoJ(int n, int i, int j) {
    int ones = (~0);
    int a = ones << (j + 1);
    int b = (1 << i) - 1;
    int mask = a | b;
    int ans = n & mask;
    return ans;
}

int replaceBits(int n, int m, int i, int j) {
    int n_ = clearRangeItoJ(n, i, j);
    int ans = n_ | (m << i);
    return ans;
}


int main() {
    int n = 15, m = 2;
    int i = 1, j = 3;

    cout << replaceBits(n, m, i, j);

    return 0;
}