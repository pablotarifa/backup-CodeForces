#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x,y,z,sx,sy,sz;

    sx=0;
    sy=0;
    sz=0;

    cin>>n;

if (1<=n && 100>=n){

   while (n--){
    cin>> x>>y>>z;

    sx+=x;
    sy+=y;
    sz+=z;
   }

    if (sx==0 & sy==0 & sz==0) {

        cout<<"YES";

    }else{

        cout<<"NO";
   }
}

    return 0;
}
