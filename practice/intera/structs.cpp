/*! \file */
#include <bits/stdc++.h>
using namespace std;
#ifndef _STRUCT_H
#define _STRUCT_H
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
        bool operator==(const point& rhs){
            return (x==rhs.x)&&(y==rhs.y)&&(z==rhs.z)&&(label.compare(rhs.label)==0);
        }	
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
        bool Dotted = false;
    };
    
    // int main(){
    //     return 0;
    // }
#endif
