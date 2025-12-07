#include <iostream>
using namespace std;
int Cəm(int A[10]){
    int b, c, k = 0;
    cout << "b Ədədini daxil edin :";
    cin >> b;
    cout << "c Ədədini daxil edin :";
    cin >> c;
    for (int i = 0; i < 10; i++){
        if ((b < A[i]) && (A[i] < c)){
            k = k + A[i];
            }
        }
    return k;
}
int main(){
    int A[10], c = 0;
    for (int i = 0; i < 10; i++){
        cout << i + 1 << "-ci elementi daxil edin :";
        cin >> A[i];
        }
    cout << Cəm(A);
}