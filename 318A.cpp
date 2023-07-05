#include <bits/stdc++.h>

using namespace std;

int main(){
    int z;
    cin >> z;

    for (int t=0; t<z; t++) {

    int n, odds, evens;
    cin>>n;


    evens=0;
    odds=0; 

    int a;

    for (int i=0; i<n; i++) {
        cin>>a;

        if (a%2==0){
            ++evens;
        }else{
            ++odds;
        }
    }

    if (evens == 0 and n%2==0){
        cout<<"NO"<<endl;
    }else if (evens==0 and n%2==1){
        cout<<"YES"<<endl;
    }else if (odds==0){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }

    }


    return 0;
}