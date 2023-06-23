#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;

  for(int i = 0; i<t;i++){
    int a,b,c,n;

    cin>>a>>b>>c>>n ;

    int sum,maxi;
    maxi=max({a,b,c});
    sum = a + b + c + n;

    if(sum % 3 == 0 && sum/3>=maxi){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }

  }
    return 0;
}