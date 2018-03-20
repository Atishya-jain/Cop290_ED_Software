#include<bits/stdc++.h>
using namespace std;


// namespace Base{
// 	int a = 0;
// };

class A{	
private:
	int count = 0;
	void setval(int x){
		count = x;
	}
public:
	int getval(bool cond){
		if(cond){
			return count;
		}else{
			setval(5);
			return count;
		}
	}
};

// class B: public A{
// };

int main(){

	cout << "hi" << endl;
	A obj;
	// B obj1;

	cout << obj.getval(true) << endl;
	cout << obj.getval(false) << endl;
	// obj.setval(10);
	// cout << obj.getval() << endl;
	// obj1.setval(20);
	// cout << obj.getval() << endl;
	// cout << obj1.getval() << endl;
	return 0;
}