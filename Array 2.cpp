#include <iostream>
using namespace std;
int Ən_Kiçik_Müsbət(int a[],int n){
    int min;
    for (int i=0;i<n;i++){
        if (a[i]>0){
            min=a[i];   
        }
    }
    for (int i=0;i<n;i++){
        if (a[i]>0){
            if (min>a[i]){
                min=a[i];
            }
        }
    }
    return min;
}
int main(){
    int n=8;
    int a[]={11,0,-3,2,4,-6,3,-2};
    cout<<Ən_Kiçik_Müsbət(a,n);
}