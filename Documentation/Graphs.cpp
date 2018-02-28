/*! \file */
#include <bits/stdc++.h>
#include <2DProcessingSrc.cpp>
#include <3DProcessingSrc.cpp>
/*! \namespace graph
    \brief Graph namespace.

    This namespace contains the graphs which will be accessed by all the other classes to edit
*/
namespace graph
{
  // Data Members
  String ThreeDgraph; /*!< This is the filename*/
  String TwoDgraphs[3]; /*!< This is flag for checking interactive input or file input from the user*/ 
  bool ThreeDOrTwoD = false; /*!< This is flag for checking whether 3d graph is worked upon or 2D graph. True implies 3D graph*/
  
  // objects of 3d and 2d class for unsaved processing	
  ThreeDGraph_class 3dObjMain;
  TwoDGraph_class 2dObjMain;
};

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