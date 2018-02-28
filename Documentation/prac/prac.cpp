#include <bits/stdc++.h>
#include <string>
using namespace std;
/*! \struct point
    \brief Struct point.

    This struct contains the representation of the points on coordinate axis 
    which can be accessed by all the other classes to edit.
*/
struct point {
	float x;
	float y;
    float z;
	string label;	
};

/*! \struct plane
    \brief Struct plane.

    This struct contains the representation of a plane on coordinate axis 
    which can be accessed by all the other classes to edit.
    This plane is of the form x + Ay + Bz = C which is a unique representation of any plane
*/
struct plane {
	string toString(){
		ostringstream s1;
    	s1 << A;
    	ostringstream s2;
    	s2 << B;
    	ostringstream s3;
    	s3 << C;
		return s1.str()+"["+s2.str()+"]"+s3.str();
	}
	plane getPlane(string s){
		int x = s.find("[");
		int y = s.find("]");

		string a = s.substr(0,x);
		string b = s.substr(x+1,y-x-1);
		string c = s.substr(y+1,s.length()-y-1);

		plane ret;
		ret.A = stof(a);
		ret.B = stof(b);
		ret.C = stof(c);
		return ret;


	}
	float A;
	float B;
	float C;	
};


/*! \struct edge
    \brief Struct edge.

    This struct represents an edge, as we know two points uniquely determine a line.
*/
struct edge{
    point p1;
    point p2;
};
int foo(int tmp[]){
	int sum = 0;
	for(int i=0;i<3;i++){
		sum+=tmp[i];
	}
	return sum;
}

int main(){
	plane tmp ;
	tmp.A = 2.3;
	tmp.B = 2.1;
	tmp.C = 2;
	cout<<tmp.toString()<<endl;
	plane x;
	x = tmp.getPlane(tmp.toString());
	cout<<x.A<<endl;
	cout<<x.B<<endl;
	cout<<x.C<<endl;



}
// int main() {
//     ostringstream ss;
//     long num = 123456;
//     ss << num;
//     cout << ss.str() << std::endl;
//     return 0;
// }	