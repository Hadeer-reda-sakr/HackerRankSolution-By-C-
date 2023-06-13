#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define max 1000
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    int a[max],n;
    
    cin>>n;
    for(int i = 1 ;i<=n;i++){
        cin>>a[i];
    }
    
    for(int i = 0 ;i<n;i++){
        cout<<a[n-i]<<" ";
    }
    return 0;
}
