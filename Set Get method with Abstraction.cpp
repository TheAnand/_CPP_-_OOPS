#include<iostream>
using namespace std;

class Abs {
  private :
	 int a,b;
  public :
  	void set(int x , int y) {
   		 a = x;
   		 b = y;
 	}
	void get(){
  		cout<<"a "<<a <<endl;
  		cout<<"b "<<b << endl;
	}
};
int main(){
  Abs ob;
  ob.set(10,20);
  ob.get();
  return 0;
}
