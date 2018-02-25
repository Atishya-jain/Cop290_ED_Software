/*! \file */
#include<bits/stdc++.h>
#include <Index.cpp>
#include <Graphs.cpp>
#include <InputSrc.cpp>
#include <OutputSrc.cpp>
#include <2DProcessingSrc.cpp>
#include <InteractiveSrc.cpp>


/*! \class ThreeDGraph_class
    \brief 3D behaviour class.

    This class has all the functionalities that a 3D object can possess
    in the software. It can be rotated, projected along some plane or 
    can give its orthographic projections
*/
class ThreeDGraph_class
{
    // Access specifier
    public:
    // Data Members
    static string ThreeDGraph; /*!< This is the 3D graph representation */
 
	//! A Member function.
    /*!
      \sa ModelRotation()
      \param filename a string argument.
      \param flag3Dfile boolean character to tell the type of file (3D/2D).
    */
    void ModelRotation()
    {
    }

	//! A Member function.
    /*!
      \sa PlanerProjection()
      \param filename a string argument.
      \param flag3Dfile boolean character to tell the type of file (3D/2D).
    */
    void PlanarProjection()
    {
    }

	//! A Member function.
    /*!
      \sa ThreeDToOrthographic()
      \param filename a string argument.
      \param flag3Dfile boolean character to tell the type of file (3D/2D).
    */
    void ThreeDToOrthographic()
    {
    }    

	//! A Member function.
    /*!
      \sa HiddenEdgeCheck()
      \param filename a string argument.
      \param flag3Dfile boolean character to tell the type of file (3D/2D).
    */
    void HiddenEdgeCheck()
    {
    }
};
