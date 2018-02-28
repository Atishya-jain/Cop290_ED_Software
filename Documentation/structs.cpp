/*! \file */
#include <bits/stdc++.h>

/*! \struct point
    \brief Struct point.

    This struct contains the representation of the points on coordinate axis 
    which can be accessed by all the other classes to edit.
*/
struct point {
	float x;
	float y;
	string x;	
};

/*! \struct plane
    \brief Struct plane.

    This struct contains the representation of a plane on coordinate axis 
    which can be accessed by all the other classes to edit.
    This plane is of the form x + Ay + Bz = C which is a unique representation of any plane
*/
struct plane {
	float A;
	float B;
	float C;	
};