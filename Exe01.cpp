#include <iostream>
#include <list>
#include <queue>

using namespace std;
int main() {
	
  int n;
 cout << " Digite  o  tamanho  do  arranjo : ";
  cin >> n;

 int *v;

 v = new int[n];
 for ( int i = 0; i < n; i++) {
 	
 cin >> v[i];
 }
 int chave , posicao = 0;
  {
 cout << " Digite  o  elemento  que  deseja   buscar : ";
 cin >> chave ;
  if ( posicao == -1){
 cout << "O  elemento  n�o  existe " << endl ;
 } else {
cout << " Elemento  na  posic �o v[" << posicao <<
"]" << endl ;
 }
 } while ( chave != -1);
 return 0;
 }
 
  int buscasequencial ( int a[], int n, int x)
 {
 for ( int i = 0; i<n; i++){
 if (a[i]== x){
 return i;
 }
 }
 return -1;
 }


 
 

