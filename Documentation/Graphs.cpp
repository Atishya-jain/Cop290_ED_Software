/*! \file */
#include <bits/stdc++.h>
#include <Index.cpp>
#include <OutputSrc.cpp>
#include <InputSrc.cpp>
#include <2DProcessingSrc.cpp>
#include <3DProcessingSrc.cpp>
#include <InteractiveSrc.cpp>

/*! \namespace graph
    \brief Graph namespace.

    This namespace contains the graphs which will be accessed by all the other classes to edit
*/
namespace graph
{
  // Data Members
  string ThreeDgraph; /*!< This is the filename*/
  string TwoDgraphs[3]; /*!< This is flag for checking interactive input or file input from the user*/ 
  boolean ThreeDOrTwoD = false; /*!< This is flag for checking whether 3d graph is worked upon or 2D graph. True implies 3D graph*/
};
