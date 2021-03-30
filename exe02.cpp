# include <iostream >

 using namespace std ;
 int main () {
 int x;
 int *px;
 int *py;
 x = 5;
 px = &x;
 py = px;
  cout << "x = " << x << endl ;
 cout << "&x = " << &x << endl ;
 cout << "px = " << px << endl ;
 cout << "*px = " << *px << endl ;
 cout << "*py = " << *py << endl ;
 cout << "&px = " << &px << endl ;
 cout << "&py = " << &py << endl ;
 return 0;
}
