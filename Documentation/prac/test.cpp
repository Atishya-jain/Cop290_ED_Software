#include<bits/stdc++.h>
using namespace std;


namespace Base{
	int a = 0;
};

class A{	
public:
	void setval(int x){
		Base::a = x;
	}
	int getval(){
		return Base::a;
	}
};

class B: public A{
};

int main(){

	cout << "hi" << endl;
	A obj;
	B obj1;

	cout << obj.getval() << endl;
	obj.setval(10);
	cout << obj.getval() << endl;
	obj1.setval(20);
	cout << obj.getval() << endl;
	cout << obj1.getval() << endl;
	return 0;
}