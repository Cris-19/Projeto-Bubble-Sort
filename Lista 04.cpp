#include <iostream>
   using namespace std;

   void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
 
    //  Criar matrizes tempor�rias //
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
    L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
    R[j] = arr[m + 1 + j];
 
// Mesclar as matrizes tempor�rias de volta em arr [l..r]  //
 
    int i = 0;
 
    int j = 0;
 
    int k = l;
 
    while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
    arr[k] = L[i];
    i++;
}
    else {
    arr[k] = R[j];
    j++;
}
    k++;
    }
 
 // Copie os elementos restantes //

  while (i < n1) {
  arr[k] = L[i];
  i++;
  k++;
}
 
  while (j < n2) {
  arr[k] = R[j];
  j++;
  k++;
}
}
 
  void mergeSort(int arr[],int l,int r){
  if(l>=r){
   return;
 }
    int m =l+ (r-l)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}
 
// Fun��o para imprimir um array  //

   void printArray(int A[], int size)
{
   for (int i = 0; i < size; i++)
   cout << A[i] << " ";
}
 
   int main()
{
    int arr[] = { 10, 14, 12, 4, 6, 8 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
 
    cout << "Given array is \n";
    printArray(arr, arr_size);
 
    mergeSort(arr, 0, arr_size - 1);
    
    cout << "\nSorted array is \n";
    printArray(arr, arr_size);
    return 0;
}
 
