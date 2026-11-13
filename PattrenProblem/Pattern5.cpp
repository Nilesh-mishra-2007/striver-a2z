#include <iostream>
using namespace std;
void patren5(int n){
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i+1;j++){
    cout<<"* ";
}
cout<<endl;
}

}


int main() {
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    patren5(n);
    return 0;
}