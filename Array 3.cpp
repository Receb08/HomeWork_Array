#include <iostream>
using namespace std;
int Məsafə(int a[],int n){
    int sağ=0,sol=0;
    for (int i=0;i<n;i++){
        if (a[i]==0){
            sol=i;
            break;
        }
    }
    for (int i=n-1;i>=0;i--){
        if (a[i]==0){
            sağ=i;
            break;
        }
    }
    return sağ-sol;
}
int main(){
    int n=8;
    int a[]={11,0,-3,2,4,-6,3,0,-2};
    cout<<Məsafə(a,n);
}