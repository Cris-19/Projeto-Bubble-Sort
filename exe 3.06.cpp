#include <iostream>
  
using namespace std;
  
void show(int a[], int arraysize)
{
    for (int i = 0; i < arraysize; ++i)
        cout << a[i] << ",";
}
  
int main()
{
    int a[] = { 1, 7, 6, 9, 8, 3, 5, 4, 2, 0 };
    int asize = sizeof(a) / sizeof(a[0]);
    cout << "\nThe array is : \n";
    show(a, asize);
    
    cout << "\n\nLet's say we want to search for ";
    cout << "\n2 in the array So, we first sort the array";
    cout << "\n\nThe array after sorting is : \n";
    
    show(a, asize);
    cout << "\n\nNow, we do the binary search";
    cout << "\nElement found in the array";

        cout << "\nElement not found in the array";
  
    cout << "\n\nNow, say we want to search for 10";
    cout << "\nElement found in the array";
    
        cout << "\nElement not found in the array";
  
    return 0;
}

