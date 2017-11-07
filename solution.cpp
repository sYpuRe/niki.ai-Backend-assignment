#include<bits/stdc++.h>
using namespace std;
long long counter(long long n){
if (n==1)
    return 1;
if (n==2)
    return 1;
if (n==3)
    return 2;
if (n==4)
    return 3;
long k=n/2;
if(n%2==0)
    return (counter(k)*counter(k)+counter(k-1)*counter(k-1));
else
    return(counter(k)*counter(k+1)+counter(k-1)*counter(k));

}
main(){

int t;
long long n;
cin>>t;
while(t--){
    cin>>n;
    cout<<counter(n+3);
}

}
