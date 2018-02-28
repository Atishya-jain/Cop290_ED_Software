/*! \file */
#include <bits/stdc++.h>
#include <structs.cpp>

/*! \class TwoDGraph_class
    \brief 2D behaviour class.

    This class has all the functionalities that a 2D object can possess
    in the software. It can be rotated and converted into isometric from 2 orthographic projections
    along some plane.  
*/
class TwoDGraph_class{
    // Access specifier
    public:

    // Data Members
      //ITNE GANDE NAAM KYU
    static vector<vector<point> > TwoDGraphMain; /*!< This is an orthographic projection */
    static vector<vector<point> > TwoDGraph1; /*!< This is an orthographic projection */
    static vector<vector<point> > TwoDGraph2; /*!< This is an orthographic projection */
    static vector<vector<point> > ThreeDGraph; /*!< This is the 3D graph representation */
    static map<string,vector<vector<edge> > > faceSet; /*!<This consists of the faces. It would be a dictionary with face equation as keys as values as those edges which lie in that plane*/
    // Constructor
    TwoDGraph_class(vector<vector<point> > graph1, vector<vector<point> > graph2, vector<vector<point> > graph3){
      TwoDGraphMain = graph1;
      TwoDGraph2 = graph2;
      TwoDGraph3 = graph3;
      // ThreeDGraph = null;
      // faceSet = null;
    }

	//! A Member function.
    /*!
      \sa TwoDtoThreeD()
      \param filename a string argument.
      \param flag3Dfile boolean character to tell the type of file (3D/2D).
    */
    void TwoDtoThreeD(){
      //write the code to convert 2d to 3d here
    }

	//! A Member function.
    /*!
      \sa faceRecognition()
      \param filename a string argument.
      \param flag3Dfile boolean character to tell the type of file (3D/2D).
    */
    void faceRecognition(){
      // set up the faceset here
    }    

	//! A Member function.
    /*!
      \sa HiddenEdgeTest()
      \param filename a string argument.
      \param flag3Dfile boolean character to tell the type of file (3D/2D).
    */
    void HiddenEdgeTest(){
      //use the face set to detect false hidden edges and remove them if found
    }

	//! A Member function.
    /*!
      \sa FalseNodeDetect()
      \param filename a string argument.
      \param flag3Dfile boolean character to tell the type of file (3D/2D).
    */
    void FalseNodeDetect(){
      //delete all the false nodes
    }
};
