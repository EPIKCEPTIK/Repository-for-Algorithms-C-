#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
int linSearch(int arr[], int searchedNumber, int size);
void showArr(int arr[], int size); 

int main()
{
    const int arrSize = 10;
    int arr[arrSize];
    int searchedNumber = 0;
    int indexOfElement = 0; 
    srand(time(NULL));
    for (int i = 0; i < arrSize; i++)
    {
        arr[i] =  + rand() % 50;
    }

    showArr(arr, arrSize);

    cout << "What number should you look for? ";
    cin >> searchedNumber;

    
    indexOfElement = linSearch(arr, searchedNumber, arrSize);

    if (indexOfElement != -1)
    {
        
        cout << "Value " << searchedNumber << " is in the cell with index: " << indexOfElement << endl;
    }
    else
    {
        
        cout << "There is no such value in the array" << endl;
    }
    return 0;
}


void showArr(int arr[], int arrSize)

{
    for (int i = 0; i < arrSize; i++)
    {
        cout << setw(4) << arr[i];
        
        if ((i + 1) % 10 == 0)
        {
            cout << endl;
        }

    }
    
}

int linSearch(int arr[], int searchedNumber, int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] == searchedNumber)
            return i;
    }
    return -1;
}
