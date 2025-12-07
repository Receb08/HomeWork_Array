#include <iostream>
using namespace std;
void Azalma_Sırası(int a[],int n){
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (a[i]>a[j]){
                a[j]+=a[i];
                a[i]=a[j]-a[i];
                a[j]=a[j]-a[i];
            }
        }
    }
    for (int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
int main(){
    int n=7;
    int a[]={1,14,5,7,3,9,8};
    Azalma_Sırası(a,n);
}