/*! \file */
#include<bits/stdc++.h>

/*! \class Input
    \brief Input class.

    This class contains the methods to input content from a file or drawing etc..
*/
class Input
{
  // Access specifier
  public:

  // Data Members
  string filename; /*!< This is the filename*/
  bool file = false; /*!< This is flag for checking interactive input or file input from the user*/ 
  bool flag3Dfile = false; /*!< This is the recognition of 2D or 3D input file*/
  ThreeDGraph obj3d; /*!< 3D object*/
  TwoDGraph obj2d[3]; /*!< Array of 2D objects*/
  int TwoDFileCount = 0; /*!< Count of 2D objects as there has to be 3 projections for our software to work on*/
  /*!
     Will prompt the user for filename or through GUI
  */
  void getFileName(){
    cout << "Enter File Name: ";
    cin >> filename;
    ReadFile();
  }

  /*!
    \sa getOptions()
     Will display the main page of GUI with options
  */
  void displayOptions(){
    /*
        Display the options
    */
    getOptions();
  }

  /*!
     Will set the options/settings user desires
    \param flag3Dfile To check if 3D model file is input or a 2D model file.
    \param file To check if file is input or an intercative input.
  */
  void getOptions(){
    /*
        Display the options
    */
    if(/*Some Condition*/){
      file = true;
    }else{
      file = false;
    }

    if(/*Some Condition*/){
      flag3Dfile = true;
    }else{
      flag3Dfile = false;
    }
  }

  /*!
    \param filename a string argument.
    \param flag3Dfile boolean character to tell the type of file (3D/2D).
  */
  void ReadFile(){
    std::vector<char> v;
    if (FILE *fp = fopen("filename", "r"))
    {
      char buf[1024];
      while (size_t len = fread(buf, 1, sizeof(buf), fp))
        v.insert(v.end(), buf, buf + len);
      fclose(fp);
    }
    if(/*File type == 3D*/){
      obj3d.ThreeDgraph = v;
    }else{
      obj2d[TwoDFileCount].TwoDGraph = v;
      TwoDFileCount++;
      if(TwoDFileCount < 3){
        getFileName();
      }
    }
  }

};



/*! \class Output
    \brief Render and save class.

    This class contains the methods to render the object on screen as well as save it in a file.
*/
class Output
{
    // Access specifier
    public:

    // Data Members
    string 2DGraph1; /*!< This is the 1st orthographic projection */
    string 2DGraph2; /*!< This is the 2nd orthographic projection */
    string 2DGraph3; /*!< This is the 3rd orthographic projection */
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





/*! \class TwoDGraph
    \brief 2D behaviour class.

    This class has all the functionalities that a 2D object can possess
    in the software. It can be rotated and converted into isometric from 2 orthographic projections
    along some plane.  
*/
class TwoDGraph
{
    // Access specifier
    public:

    // Data Members
    string TwoDGraph; /*!< This is an orthographic projection */
 
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


/*! \class ThreeDGraph
    \brief 3D behaviour class.

    This class has all the functionalities that a 3D object can possess
    in the software. It can be rotated, projected along some plane or 
    can give its orthographic projections
*/
class ThreeDGraph
{
    // Access specifier
    public:
    // Data Members
    string ThreeDGraph; /*!< This is the 3D graph representation */
 
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
  bool type = false; /*!< Type is to tell whether it is a 3D or 2D graph here*/
  int TwoDFileNumber = 0; /*!< This identifies the projection we are working with of 2D objects. By Default it is set to 1st projection*/
  bool drawing = false; /*!< This flag is set to identify whether user wants to draw or input a file. By Default it is set to file*/
  bool lineDraw = false; /*!< This flag is set to identify whether user wants to draw a line or not*/
  bool circleDraw = false; /*!< This flag is set to identify whether user wants to draw a circle or not*/
  bool erase = false; /*!< This flag is set to identify whether user wants to erase something or not*/
  bool extrude = false; /*!< This flag is set to identify whether user wants to extrude something or not*/
  int point1 = 0; /*!< This is the initial point of the line*/
  int point2 = 0; /*!< This is the final point of the line*/
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
    }else{
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
};

/*! \fn main()*/
int main(){
  Input input;
  input.displayOptions();
  if(input.file){
    input.getFileName();
  }
  Interactive_editor edit;
  edit.obj3d = input.obj3d; // To point to same graph and not be equal
  edit.obj2d = input.obj2d; // To point to same graph and not be equal
  edit.drawing = (!input.file) // To set the type of editing to edit object
  edit.UserInput();
	return 0;
}

// Our aim is not to create duplicatesof graph everywhere but only to use pointers to point to one graph