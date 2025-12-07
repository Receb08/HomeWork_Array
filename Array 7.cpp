#include <iostream>
using namespace std;
void Element(int X[], int Y[], int n, int m){
    int k = min(n, m);
    for (int i = 0; i < k; i++){
        if (X[i] == Y[i] * Y[i]){
            cout << X[i] << endl;
        }
    }
}
int main(){
    int n, m;
    cout << "X massivinin elementlərinin sayını daxil edin: ";
    cin >> n;
    cout << "Y massivinin elementlərinin sayını daxil edin: ";
    cin >> m;
    int X[n], Y[m];
    cout << "X massivinin elementlərini daxil edin :"<<endl;
    for (int i = 0; i < n; i++){
        cin >> X[i];
        }
    cout << "Y massivinin elementlərini daxil edin :"<<endl;
    for (int i = 0; i < m; i++){
        cin >> Y[i];
        }
    cout << "Sərti ödəyən elementlər :"<<endl;
    Element(X, Y, n, m);
}