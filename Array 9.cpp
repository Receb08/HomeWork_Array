#include <iostream>
using namespace std ;
void Yeni_Massin(int a[],int b[],int n,int m){
    int k;
    cout<<"1-ci Massivdə seçilən k-cı elementi daxil edin :";
    cin>>k;
    int yu=m+n;
    int c[yu],d=0;
    for(int i=0;i<=k;i++){
        c[d++]=a[i];
    }
    for(int i=0;i<m;i++){
        c[d++]=b[i];
    }
    for(int i=k+1;i<n;i++){
        c[d++]=a[i];
    }
    cout<<"Yeni Massiv :";
    for (int i=0;i<yu;i++){
        cout<<c[i]<<endl;
        }
}
int main(){
    int n,m;
    cout<<"1-ci Massivin uzunluğunu daxil edin :";
    cin>>n;
    int a[n];
    cout<<"1-ci Massivin elementlərini daxil edin :";
    for (int i=0;i<n;i++){
        cin>>a[i];
        }
    cout<<"2-ci Massivin uzunluğunu daxil edin :";
    cin>>m;
    int b[m];
    cout<<"2-ci Massivin elementlərini daxil edin :";
    for (int i=0;i<m;i++){
        cin>>b[i];
        }
    Yeni_Massin(a, b, n, m);
}