/*! \file */
#include<bits/stdc++.h>
#include <InputSrc.cpp>
#include <OutputSrc.cpp>
#include <2DProcessingSrc.cpp>
#include <3DProcessingSrc.cpp>
#include <InteractiveSrc.cpp>


/*! \class Interactive_editor
    \brief Editor class.

    This class contains the methods to edit a drawing or to play with a model drawing
*/
class Interactive_editor
{
  // Access specifier
  public:

  // Data Members
  ThreeDGraph obj3d; /*!< 3D object*/
  TwoDGraph obj2d[3]; /*!< Array of 2D objects*/
  TwoDGraph planeObj; /*!< This object is to store a plane's datastructure*/
  bool saved = false; /*!< This flag is set to identify whether user has something left to be saved*/
  bool type = false; /*!< Type is to tell whether it is a 3D or 2D graph here. True means 3D.*/
  int TwoDFileNumber = 0; /*!< This identifies the projection we are working with of 2D objects. By Default it is set to 1st projection*/
  bool drawing = false; /*!< This flag is set to identify whether user wants to draw or input a file. By Default it is set to file*/
  bool lineDraw = false; /*!< This flag is set to identify whether user wants to draw a line or not*/
  bool circleDraw = false; /*!< This flag is set to identify whether user wants to draw a circle or not*/
  bool erase = false; /*!< This flag is set to identify whether user wants to erase something or not*/
  bool extrude = false; /*!< This flag is set to identify whether user wants to extrude something or not*/
  bool selectPlane = false; /*!< This flag is set to identify whether user wants to select a plane or not*/
  bool selectPoint = false; /*!< This flag is set to identify whether user wants to select a point or not*/
  bool selectline = false; /*!< This flag is set to identify whether user wants to select a line or not*/
  int point1 = 0; /*!< This is a point's location on the coordinates*/
  int point2 = 0; /*!< This is a point's location on the coordinates*/
  int point3 = 0; /*!< This is a point's location on the coordinates*/
  int thickness = 0; /*!< This is the thickness of the line*/
  int color = 0; /*!< This is the color of the line*/
  int height = 0; /*!< This is the height of extrusion*/
  int centre = 0; /*!< This is the height of extrusion*/
  /*!
     Will set the options/settings user desires
    \param drawing To check if user wants to draw something or want to edit the current drawing.
    \param linedraw To check if user wants to draw a line.
    \param circledraw To check if user wants to draw a cicle.
    \param erase To check if user wants to erase something.
    \param extrude To check if user wants to extrude a plane.
    \param flag3Dfile To check if file is input or an intercative input.
  */
  void userInput(){
    /*
        Display the options
        cin >> something
    */
    if(/*Some condition to change to drawing mode*/){
      drawing = true;
    }else{
      drawing = false;
    }

    if(drawing){
      /*Set of options related to drawing*/
      if(lineDraw){
        drawLine();
      }
      if(circleDraw){
        drawCircle();
      }
      if(erase){
        eraseIt();
      }
      if(extrude){
        extrusion();
      }
      if(selectPlane){
      	setPlane();
      }
      if(selectPoint){
      	setPoint();
      }
      if(selectLine){
      	setLine();
      }
    }else{
      if(exit){
      	/*We need to check the condition of whether anything is left to be saved or not*/
      	if(saved){
	      	displayOptions();
      	}else{
      		cout << "Some files are left to be saved. You might loose your work";
      		userInput();
      	}
      }
      if(save){
      	if(type){
      		out.3DGraph = obj3d;
      	}else{
      		out.2DGraph[TwoDFileNumber] = obj2d.[TwoDFileNumber];
      	}
      }
      // set of options not related to drawing
    }
  }
  
  /*!
     Will display the options/settings user desires
  */
  void displayOptions(){
    /*Display various options*/
  }

  /*!
     Will set the options/settings user desires
    \param poin1 To get 1st point of line.
    \param poin2 To get 2nd point of line.
    \param thickness To get thickness of line.
    \param color To get color of the line.
  */
  void drawLine(){
    /*Display various options*/
    userInput();
  }

  /*!
     Will set the options/settings user desires
    \param centre To get center of circle.
    \param point2 To get a point on circumference.
    \param thickness To get thickness of circle.
    \param color To get color of the circle.
  */
  void drawCircle(){
    /*Display various options*/
    userInput();
  }

  /*!
     Will set the options/settings user desires
  */
  void eraseIt(){
    /*Display various options*/
    userInput();
  }

  /*!
     Will extrude the object
     \param plane
     \param height
  */
  void extrude(){
    /*Display various options*/
    userInput();
  }

  /*!
     Will set the plane the user wants to select to some data structure
     \param point1
     \param point2
     \param point3
  */
  void setPlane(){
  	/*Set the plane here to some data structure*/
  	userInput();
  }

  /*!
     Will set a point user wants to select to some data structure
     \param point1
  */
  void setPoint(){
  	/*Set the point here to some data structure*/
  	userInput();
  }

  /*!
     Will set the line the user wants to select to some data structure
     \param point1
     \param point2
  */
  void setline(){
  	/*Set the line here to some data structure*/
  	userInput();
  }
};
