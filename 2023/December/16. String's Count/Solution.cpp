// String's Count
// December 16, 2023
// C++ Code

long long int countStr(long long int n){
    return 1 + 2*n + n*(n-1)*(n+1)/2;
}
