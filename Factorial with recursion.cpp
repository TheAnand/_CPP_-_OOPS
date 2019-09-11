#include<iostream>
using namespace std;
int Fact(int num){
  if(num!=0){
      return num * Fact(num-1);
  }
  else
      return 1;
}
int main() {
    int n;
    cout<<"Enter number :";
    cin>>n;
    int temp = Fact(n);
    cout<<"Factorial of given number is :"<<temp;
}
