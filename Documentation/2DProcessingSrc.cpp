/*! \file */
#include <bits/stdc++.h>
#include <Graphs.cpp>


/*! \class TwoDGraph_class
    \brief 2D behaviour class.

    This class has all the functionalities that a 2D object can possess
    in the software. It can be rotated and converted into isometric from 2 orthographic projections
    along some plane.  
*/
class TwoDGraph_class
{
    // Access specifier
    public:

    // Data Members
    static string TwoDGraphMain; /*!< This is an orthographic projection */
    static string TwoDGraph1; /*!< This is an orthographic projection */
    static string TwoDGraph2; /*!< This is an orthographic projection */

	//! A Member function.
    /*!
      \sa TwoDtoThreeD()
      \param filename a string argument.
      \param flag3Dfile boolean character to tell the type of file (3D/2D).
    */
    void TwoDtoThreeD()
    {
    }

	//! A Member function.
    /*!
      \sa faceRecognition()
      \param filename a string argument.
      \param flag3Dfile boolean character to tell the type of file (3D/2D).
    */
    void faceRecognition()
    {
    }    

	//! A Member function.
    /*!
      \sa HiddenEdgeTest()
      \param filename a string argument.
      \param flag3Dfile boolean character to tell the type of file (3D/2D).
    */
    void HiddenEdgeTest()
    {
    }

	//! A Member function.
    /*!
      \sa FalseNodeDetect()
      \param filename a string argument.
      \param flag3Dfile boolean character to tell the type of file (3D/2D).
    */
    void FalseNodeDetect()
    {
    }
};
