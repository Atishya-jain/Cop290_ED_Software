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
    \param flag3Dfile To check if file is input or an intercative input.
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

int main(){
  Input input;
  input.displayOptions();
  if(input.file){
    input.getFileName();
  }
	return 0;
}
