/*! \file */
#include <bits/stdc++.h>
#include"structs.h"
using namespace std;

#ifndef __INTERACTIVE_H
#define __INTERACTIVE_H
/*! \class Interactive_editor
    \brief Editor class.
  
    This class contains the methods to edit a drawing or to play with a model drawing
*/
class Interactive_editor
{
  // Access specifier
  public:

  // Data Members
	// TwoDGraph_class planeObj; !< This object is to store a plane's datastructure
	// TwoDGraph_class TwoDObjMain;
	// ThreeDGraph_class ThreeDObjMain;

  map<string, vector<point> > MyPlane; /*!< This is a plane */
  // pair<float,float> point; /*!< This object is to store a point's datastructure*/
  // pair<pair<float,float>,pair<float,float>> line; /*!< This object is to store a line's datastructure*/
  bool exitYesNo; /*!< This flag is set to identify whether user has to exit*/
  bool saved; /*!< This flag is set to identify whether user has something left to be saved*/
  bool saveToFile;/*!< This flag is set to identify whether user has something to be saved in a file*/
  bool save;/*!< This flag is set to identify whether user has pressed save button*/
  bool type; /*!< Type is to tell whether it is a 3D or 2D graph here. True means 3D.*/
  int TwoDFileNumber; /*!< This identifies the projection we are working with of 2D objects. By Default it is set to 1st projection*/
  bool drawing; /*!< This flag is set to identify whether user wants to draw or input a file. By Default it is set to file*/
  bool lineDraw; /*!< This flag is set to identify whether user wants to draw a line or not*/
  bool erase; /*!< This flag is set to identify whether user wants to erase something or not*/
  bool extrudeYesNo; /*!< This flag is set to identify whether user wants to extrude something or not*/
  bool selectPlane; /*!< This flag is set to identify whether user wants to select a plane or not*/
  bool selectPoint; /*!< This flag is set to identify whether user wants to select a point or not*/
  bool selectLine; /*!< This flag is set to identify whether user wants to select a line or not*/
  bool Convert2Dto3D; /*!< This flag is set to identify whether user wants to convert 2D to 3D*/
  bool Convert3Dto2D; /*!< This flag is set to identify whether user wants to convert 3D to 2D*/
  bool rotate; /*!< This flag is set to identify whether user wants to rotate a 3D object or not*/
  int point1; /*!< This is a point's location on the coordinates*/
  int point2; /*!< This is a point's location on the coordinates*/
  int point3; /*!< This is a point's location on the coordinates*/
  int thickness; /*!< This is the thickness of the line*/
  int color; /*!< This is the color of the line*/
  int height; /*!< This is the height of extrusion*/
  int centre; /*!< This is the height of extrusion WHAT IS THIS? REPETITION3*/


  Interactive_editor();
    /*!
     Will set the options/settings user desires
    \param drawing To check if user wants to draw something or want to edit the current drawing.
    \param linedraw To check if user wants to draw a line.
    \param circledraw To check if user wants to draw a cicle.
    \param erase To check if user wants to erase something.
    \param extrude To check if user wants to extrude a plane.
    \param flag3Dfile To check if file is input or an intercative input.
  */
  void userInput();
  
  /*!
     Will display the options/settings user desires
  */
  void displayOptions();

  /*!
     Will set the options/settings user desires
    \param poin1 To get 1st point of line.
    \param poin2 To get 2nd point of line.
    \param thickness To get thickness of line.
    \param color To get color of the line.
  */
  void drawLine(point p1, point p2);

  /*!
     Will set the options/settings user desires
  */
  void eraseIt(point p1, point p2);
 /*!
  To print the graph
  */
  void print();
};
#endif
