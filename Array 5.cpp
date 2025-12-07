#include <iostream>
using namespace std;
void Deyis(int a, int b){
    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << " " << b;
}
int main(){
    int n, m, k, r;
    cout << "A massivinin elementleri sayini daxil edin :";
    cin >> n;
    cout << "B massivinin elementleri sayini daxil edin :";
    cin >> m;
    int A[n], B[m], maxA, maxB;
    cout << "A massivinin elementlerini daxil edin :";
    for (int i = 0; i < n; i++){
        cin >> A[i];
        }
    cout << "B massivinin elementlerini daxil edin :";
    for (int i = 0; i < m; i++){
        cin >> B[i];
        }
    maxA = A[0];
    for (int i = 0; i < n; i++) {
        if (maxA < A[i]){
            maxA = A[i];
            }
        }
    maxB = B[0];
    for (int i = 0; i < m; i++){
        if (maxB < B[i]){
            maxB = B[i];
            }
        }
    for (int i = 0; i < n; i++){
        if (maxA == A[i]){
            k = i;
            }
        }
    for (int i = 0; i < m; i++){
        if (maxB == B[i]){
            r = i;
            }
        }
    Deyis(A[k], B[r]);
}