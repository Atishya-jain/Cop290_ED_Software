// #include "structs.cpp"
#include <bits/stdc++.h>
using namespace std;

struct point {
    	float x;
    	float y;
        float z;
    	string label;	

    	bool operator==(const point& rhs){
		    return (x==rhs.x);
		}
    };

int main(){
	point p1;
	p1.x=1;
	p1.y=1;
	p1.z=1;
	p1.label="1";

	point p2;
	p2.x=2;
	p2.y=2;
	p2.z=1;
	p2.label="1";

	vector<point> a;
	a.push_back(p1);
	a.push_back(p2);

	a.erase(a.begin());
	cout<<a.size()<<endl;
	return 0;
} 