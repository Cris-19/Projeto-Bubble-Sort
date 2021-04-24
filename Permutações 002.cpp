#include <stdio.h>
 #include <iostream>
 #include <vector>
 

 using namespace std ;

 int main (){
 int printOnePerm(int a[], bool dir[], int n);	
 int v[] = {1, 2, 3, 4};
 int tam_v = sizeof(v) / sizeof(int);
 vector <int > c;
 for ( int i=1; i <6; i++) {
 printf("\n");	
 c. push_back (i);
 }
 for ( int i=0; i<c. size (); i ++) {
 cout << c[i] << " 8,12,20 ";
 }
  cout << endl ;
   
   

	return 0;
}
