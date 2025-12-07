#include <iostream>
#include <cmath>
using namespace std;
int Əo_Ho(int a[]){
    int min,max,əo,ho;
    min=a[0];
    max=a[0];;
    for (int i=0;i<25;i++){
        if (min>a[i]){
            min=a[i];
            }
        if (max<a[i]){
            max=a[i];
            }
    }
    əo=(min+max)/2;
    ho=pow((min*max),(0.5));
    cout<<əo<<endl;
    return ho;
}
int main(){
    int a[25];
    cout<<"Elementləri daxil edin :"<<endl;
    for (int i=0;i<25;i++){
        cin>>a[i];
        }
    cout<<"Ədədi və Həndəsi orta :";
    cout<<Əo_Ho(a);
}