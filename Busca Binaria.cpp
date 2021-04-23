#include <iostream>
#include <iostream>

using namespace std;

  int main() {
  int buscaBinaria (int chave , int a[], int n);
  
  int buscaBinaria ( int a[], int n, int x);
  void ordena (int a[], int n);
  int i;
  int esq = 0;
  int dir= 1;
  i = (esq + dir )/2;
 esq = i + 1;
 dir = i - 1;
 cout << "i = " << i << endl ;
 cout << "1 = " << 1 << endl ;
 cout << "2 = " << 2 << endl ;
 cout << "3 = " << 5 << endl ;
 cout << "4 = " << 8 << endl ;
 cout << "5 = " << 10 << endl ;
 cout << "6 = " << 12 << endl ;


    return 0;
 
}
