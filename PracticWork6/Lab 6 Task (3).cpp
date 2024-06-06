#include <iostream>
#include <time.h>
using namespace std;
void Eratosthenes(bool B[], int maxEl)
{
    int i, P;
    for (P = 2; P <= maxEl; P++)B[P] = true;
    P = 2;
    while (P * P <= maxEl) {
        i = P * P;
        while (i <= maxEl)
        {
            B[i] = false;
            i = i + P;
        }
        P = P + 1;
    }
    
    cout << "Simple numbers:";
    for (P = 2; P <= maxEl; P++) {
        if (B[P] == true) {
             cout << " " << P;
            
        }
    }
    cout << endl << endl;
}
void Array(int array[], int N){
    for (int i = 0; i < N; i++) {
        array[i] = rand() % 1000;
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N - 1; j++) {
            int temp = 0;
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    
    
}
void ArrayCout(int array[], int N) {
    cout << "Array with random numbers: " << endl;
    for (int i = 0; i < N; i++) {
        cout << array[i] << " ";
    }
    cout << endl<<endl;
}
int MaxEl(int array[], int N) {
    int maxEl = 0;
    for (int i = 0; i < N; i++) {
        if (maxEl < array[i]) {
            maxEl = array[i];
        }
    }
    return maxEl;
}
int sizeOfArray(int array[], int N, bool B[], int maxEl, int sizeOfarrComEl = 0) {

    for (int i = 0; i < N; i++) {
        for (int P = 2; P <= maxEl; P++) {
            if (B[P] == true && P == array[i]) {
                sizeOfarrComEl++;


            }
        }
    }
    return sizeOfarrComEl;
}
void ArrayOfCommonElements(int array[], int N, bool B[], int maxEl, int sizeOfarrComEl = 0){
    if (sizeOfarrComEl > 1) {
        int* arrComEl = new int[sizeOfarrComEl];
        int temp = 0;
        for (int i = 0; i < N; i++) {
            for (int P = 2; P <= maxEl; P++) {
                if (B[P] == true && P == array[i]) {
                    arrComEl[temp] = array[i];
                    temp++;

                }

            }
        }
        cout << "Array: ";
        for (int i = 0; i < sizeOfarrComEl; i++) {
            cout << arrComEl[i] << " ";
        }
    }
    else {
        cout << "There are no common elements";
        
    }
}
int main() {
    srand(time(NULL));
    int N;
    while (true){
        cout << "Enter the number of elements(max - 100): ";
        cin >> N;
        if (N > 1 && N < 101) {
            break;
        }
        else {
            cout << "Try again" << endl;
        }
    }

    int* array = new int[N];
    Array(array,N);
    int maxEl = MaxEl(array,N);
   
    bool* B = new bool[maxEl];
    cout << endl;
    Eratosthenes(B, maxEl);
    
    ArrayCout(array, N);
    
    ArrayOfCommonElements(array,N,B,maxEl);
}
