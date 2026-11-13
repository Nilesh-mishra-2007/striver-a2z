#include <iostream>

using namespace std;

void pattren3(int n){
    for(int i=1;i<=n;i++){

        for (int j=1;j<=i;j++){
            cout<<i ;
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    pattren3(n);
    return 0;
}