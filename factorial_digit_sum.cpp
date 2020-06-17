#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

long long factsum(int n)
{
 //have to use vector in it as size is very large
    long arr[n+1];
    arr[0]=1;
    arr[1]=1;
    for(long i=2;i<=n;++i)
    {
        arr[i]=i*arr[i-1];
    }
    long long sum=0;
    int p=0;
    int res =arr[n];
    while(res!=0)
    {
        p=res%10;
        sum=sum+p;
        res=res/10;

    }
    return sum;
}



int main()
{
    int n ;
    cin >> n;
    cout <<factsum(n);
    return 0;
}