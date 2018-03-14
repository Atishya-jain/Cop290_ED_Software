/*! \file */
#include <bits/stdc++.h>
#include "2DProcessingSrc.cpp"
#include "3DProcessingSrc.cpp"
#include "structs.cpp"
using namespace std;

#ifndef _GRAPH_H
#define _GRAPH_H
	/*! \namespace graph
	    \brief Graph namespace.

	    This namespace contains the graphs which will be accessed by all the other classes to edit
	*/
	namespace graph{
	  // Data Members
	  map<string, vector<point> > ThreeDGraph; /*!< This is the filename*/
	  map<string, vector<point> > TwoDGraph[3]; /*!< This is flag for checking interactive input or file input from the user*/ 
	  bool ThreeDOrTwoD = false; /*!< This is flag for checking whether 3d graph is worked upon or 2D graph. True implies 3D graph*/
	};
#endif