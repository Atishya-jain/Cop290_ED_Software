/*! \file */
#include<bits/stdc++.h>
#include <InputSrc.cpp>
#include <OutputSrc.cpp>
#include <2DProcessingSrc.cpp>
#include <3DProcessingSrc.cpp>
#include <InteractiveSrc.cpp>


/*! \class Output
    \brief Render and save class.

    This class contains the methods to render the object on screen as well as save it in a file.
*/
class Output
{
    // Access specifier
    public:

    // Data Members
    string 2DGraph[3]; /*!< This is the array of orthographic projections */
    string 3DGraph;  /*!< This is the 3D graph */
 
	//! A Member function.
    /*!
      \sa RenderOutput3D()
      \param filename a string argument.
      \param flag3Dfile boolean character to tell the type of file (3D/2D).
    */
    void RenderOutput3D()
    {
    }

 
	//! A Member function.
    /*!
      \sa RenderOutput2D()
      \param filename a string argument.
      \param flag3Dfile boolean character to tell the type of file (3D/2D).
    */
    void RenderOutput2D()
    {
    }

	//! A Member function.
    /*!
      \sa saveToFile3D()
      \param filename a string argument.
      \param flag3Dfile boolean character to tell the type of file (3D/2D).
    */
    void saveToFile3D()
    {
    }


	//! A Member function.
    /*!
      \sa saveToFile2D()
      \param filename a string argument.
      \param flag3Dfile boolean character to tell the type of file (3D/2D).
    */
    void saveToFile2D()
    {
    }
};
