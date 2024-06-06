#include <iostream>

using namespace std;
void Eratosthenes(bool B[], int N)
{
    int i, P;
    for (P = 2; P <= N; P++)B[P] = true; 
    P = 2;
    while (P * P <= N){
        i = P * P;
        while (i <= N)
        {
            B[i] = false;
            i = i + P;
        }
        P = P + 1;
    }
    int temp = 0;
    cout << "Simple numbers:";
    for (P = 2; P <= N; P++){   
        if (B[P] == true) {
            if (temp == 0) {
                cout << " " << P;
                temp = 1;
            }
            else {
                temp = 0;
            }
        }
    }
}

int main(){
    
    int N;
    cout << "N = "; cin >> N;
    bool* B = new bool[N];
    Eratosthenes(B, N);
    return 0;
}
