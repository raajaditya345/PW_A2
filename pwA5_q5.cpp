//Write a program to calculate the sum of digits of a 3 digit number.
#include <iostream>
using namespace std;
int main (){
    int a;
  cin>>a;
  int sum = 0;
  while(a!=0){
    int r = a%10;
    sum+= r;
    a/= 10;
  }
  cout<<sum<<endl;

    return 0;
}