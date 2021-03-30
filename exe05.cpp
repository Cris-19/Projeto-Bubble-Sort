
 # include <iostream >

 using namespace std ;
 int main () {
 int x;
 x = 5;
  cout << "x  externo  = " << x << endl ;
   for ( int i = 0; i < 1; i ++){
 int x;
 x = 7;
 cout << "x  interno  = " << x << endl ;
  cout << "i  interno  = " << i << endl ;
 }
 cout << "x  externo  = " << x << endl ;
 
 return 0 ;
}
