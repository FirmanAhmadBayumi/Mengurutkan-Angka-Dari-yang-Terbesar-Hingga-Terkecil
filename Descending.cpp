#include <iostream>
using namespace std;
int main(){
    int angka[11] = {2, 4, 10, 5, 3, 0, 6, 7, 9, 8, 1};
    bool swap;
    int b;
    int c = 10;
    cout << "Angka Sebelum Diurutkan  : 2 4 10 5 3 0 6 7 9 8 1 " << endl;

    do{
        swap = false;
        for(int i = 0; i <= c - 1; i++){
            if(angka[i] <= angka[i + 1]){
                b = angka[i];
                angka[i] = angka[i + 1];
                angka[i + 1] = b;
                swap = true;
            }
        }
    }
    while(swap);

    cout << "Setelah Diurutkan\t : ";

    for(int i = 0; i <= c; i++){
        cout << angka[i] << " ";
    }
    cout << endl;
    return 0;
}