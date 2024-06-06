#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <iostream>

using namespace std;
int main(void) 
{
    int i, j, n, ind;
    cout << "\n\n Enter the number to which you need to make an array of prime numbers: ";
    scanf("%d", &n);
    char *a= new char[n + 1];
    for (i = 1; i <= n; i++) {
        a[i] = 1;
    }
    for (i = 1; 2 * i * (i + 1) < n; i++)
    {
        for (j = i; ind = 2 * i * j + i + j, ind <= n; j++) {
            a[ind] = 0;
        }
    }
    int temp = 0;
    for (i = 1; i <= n; i++){   
        if (a[i]) {
            if (temp == 0) {
               printf("%d ", 2 * i + 1);
               temp +=2;
            }
            else {
                temp--;
            }
           
        }
    }
    return 0;
}
