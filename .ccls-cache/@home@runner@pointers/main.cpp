//Write a program to bubble sort an array using pointers

#include<iostream>  
using namespace std;
int main()
{
   int a[6]={ 5,6,3,8,2,1 };
   int  n, temp=0;   
   int *p; 
   p = &a[0];
   n=6;
   
    for ( int i=0; i<n; i++){
      for( int j=0; j<n-1; j++){
          if( *(p+j) > *(p+j+1) ){
               temp = *(p+j);
               *(p+j) = *(p+j+1);
               *(p+j+1)= temp;              
          }           
      }  
}

cout<<"sorted array"<<endl;
for(int i = 0; i<n; i++)  
{
  cout<<*(p + i);
}

  return 0;
}


