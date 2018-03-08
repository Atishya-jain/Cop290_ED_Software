/*! \file */
#include <bits/stdc++.h>
#include "structs.cpp"
#include "Graphs.cpp"
#include "OutputSrc.cpp"
#include "2DProcessingSrc.cpp"
#include "3DProcessingSrc.cpp"
using namespace std;

/*! \class Interactive_editor
    \brief Editor class.
  
    This class contains the methods to edit a drawing or to play with a model drawing
*/
class Interactive_editor: public Output
{
  // Access specifier
  public:

  // Data Members
  // ThreeDGraph_class obj3d(graph::ThreeDgraph); /*!< 3D object local copy to work on*/
  // TwoDGraph_class obj2d[3](_NULL,_NULL,_NULL); /*!< Array of 2D objects local copy to work on*/
  // TwoDGraph_class planeObj(graph::TwoDgraphs[0],graph::TwoDgraphs[1],graph::TwoDgraphs[2]); /*!< This object is to store a plane's datastructure*/
  vector<vector<point> > MyPlane; /*!< This is a plane */
  pair<float,float> point; /*!< This object is to store a point's datastructure*/
  pair<pair<float,float>,pair<float,float>> line; /*!< This object is to store a line's datastructure*/
  bool exitYesNo; /*!< This flag is set to identify whether user has to exit*/
  bool saved; /*!< This flag is set to identify whether user has something left to be saved*/
  bool saveToFile;/*!< This flag is set to identify whether user has something to be saved in a file*/
  bool save;/*!< This flag is set to identify whether user has pressed save button*/
  bool type; /*!< Type is to tell whether it is a 3D or 2D graph here. True means 3D.*/
  int TwoDFileNumber; /*!< This identifies the projection we are working with of 2D objects. By Default it is set to 1st projection*/
  bool drawing; /*!< This flag is set to identify whether user wants to draw or input a file. By Default it is set to file*/
  bool lineDraw; /*!< This flag is set to identify whether user wants to draw a line or not*/
  bool circleDraw; /*!< This flag is set to identify whether user wants to draw a circle or not*/
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


  Interactive_editor(){
  	// obj3d.ThreeDGraph = ThreeDGraph; // To create a copy of main graph in graph class in here
// /*Why you added "main"*/  	obj2d[0].TwoDGraphMain = TwoDGraphs[0]; // To create a copy of main 2D graph in graph class in here
  	// obj2d[1].TwoDGraphMain = TwoDGraphs[1]; // To create a copy of main 2D graph in graph class in here
  	// obj2d[2].TwoDGraphMain = TwoDGraphs[2]; // To create a copy of main 2D graph in graph class in here
  TwoDGraph_class planeObj(MyPlane,MyPlane,MyPlane); /*!< This object is to store a plane's datastructure*/
  	
    saved = false;
    saveToFile = false;
    save = false;
  	type = graph::ThreeDOrTwoD;
  	TwoDFileNumber = 0;
  	drawing = false;
  	lineDraw = false;
  	circleDraw = false;
  	erase = false;
  	extrudeYesNo = false;
  	selectPlane = false;
  	selectPoint = false;
  	selectLine = false;
  	Convert2Dto3D = false;
  	Convert3Dto2D = false;
  	rotate = false;
  	point1 = 0;
  	point2 = 0;
  	point3 = 0;
  	thickness = 0;
  	color = 0;
  	height = 0;
  	centre = 0;
  }
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
  	if(lineDraw){
  		drawLine();
  		saved = false;	
  		lineDraw = false;
  	}
  	if(circleDraw){
  		drawCircle();
  		circleDraw = false;
  	}
  	if(erase){
  		eraseIt();
  		saved = false;	
  		erase = false;
  	}
  	if(extrudeYesNo){
  		extrude();
  		saved = false;	
  		extrudeYesNo = false;
  	}
  	if(selectPlane){
  		setPlane();
  		saved = false;	
  		selectPlane = false;
  	}
  	if(selectPoint){
  		setPoint();
  		saved = false;	
  		selectPoint = false;
  	}
  	if(selectLine){
  		setLine();
  		saved = false;	
  		selectLine = false;
  	}
  	if(Convert2Dto3D){
  		graph::TwoDObjMain.TwoDtoThreeD();
  		saved = false;	
  		Convert2Dto3D = false;
  	}
  	if(Convert3Dto2D){
  		graph::ThreeDObjMain.ThreeDToOrthographic();
  		saved = false;	
  		Convert3Dto2D = false;
  	}
  	if(rotate){
      float angle;
      edge axis;
      struct point tempPointA, tempPointB;
      float x,y,z;
      string ptLabel;

      cout << "Enter angle of rotation in degrees: ";
      cin >> angle;

      cout << "Enter x y z label (all inputs with a space between them) for point1: ";
      cin >> x >> y >> z >> ptLabel;
      tempPointA.x = x;
      tempPointA.y = y;
      tempPointA.z = z;
      tempPointA.label = ptLabel;

      cout << "Enter x y z label (all inputs with a space between them) for point2: ";
      cin >> x >> y >> z >> ptLabel;
      tempPointB.x = x;
      tempPointB.y = y;
      tempPointB.z = z;
      tempPointB.label = ptLabel;

      axis.p1 = tempPointA;
      axis.p2 = tempPointB;
  		
      graph::ThreeDObjMain.ModelRotation(angle,axis);
  		saved = false;	
  		rotate = false;
  	}
  	if(saveToFile){
  		if(type){
  			saveToFile3D();
  		}else{
  			saveToFile2D();
  		}
  	}
  	if(exitYesNo){
  		/*We need to check the condition of whether anything is left to be saved or not*/
  		if(saved){
  	  		displayOptions();
  		}else{
  			cout << "Some files are left to be saved. You might loose your work";
  			userInput();
  		}
  		exitYesNo = false;
  	}
  	if(save){
  		graph::ThreeDgraph = graph::ThreeDObjMain.ThreeDGraph;
  		graph::TwoDgraphs[TwoDFileNumber] = graph::TwoDObjMain.TwoDGraphMain[TwoDFileNumber];
      save = false;
  		saved = true;
  	}
  }
  
  /*!
     Will display the options/settings user desires
  */
  void displayOptions(){
    /*Display various options*/
    userInput();
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
  void setLine(){
  	/*Set the line here to some data structure*/
  	userInput();
  }
};
