#include <iostream>
#include <string>
#include <output>

class Output
{
    // Access specifier
    public:
 	/** Class for 2D graph and its functions. 
     *  This class has all the functionalities that a 2D object can possess
     *  in the software. It can be rotated and converted into isometric from 2 orthographic projections
     *  along some plane.  
     */
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


class TwoDGraph
{
    // Access specifier
    public:
 	/** Class for 2D graph and its functions. 
     *  This class has all the functionalities that a 2D object can possess
     *  in the software. It can be rotated and converted into isometric from 2 orthographic projections
     *  along some plane.  
     */
    // Data Members
    string TwoDGraph1; /*!< This is the 1st orthographic projection */
    string 2DGraph2; /*!< This is the 2nd orthographic projection */
    string 2DGraph3; /*!< This is the 3rd orthographic projection */
 
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


class ThreeDGraph
{
    // Access specifier
    public:
 	/** Class for 3D graph and its functions. 
     *  This class has all the functionalities that a 3D object can possess
     *  in the software. It can be rotated, projected along some plane or 
     *  can give its orthographic projections  
     */
    // Data Members
    string 3DGraph;
 
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

void displayOptions(){

}

void ReadFile(/*File type*/){
	std::vector<char> v;
	if (FILE *fp = fopen("filename", "r"))
	{
		char buf[1024];
		while (size_t len = fread(buf, 1, sizeof(buf), fp))
			v.insert(v.end(), buf, buf + len);
		fclose(fp);
	}
	3DGraph obj3d;
	2DGraph obj2d;
	if(/*File type == 3D*/){
		obj3d.3Dgraph = v;
	}else{
		obj3d.2Dgraph = v;
	}
}

int main(){
	string fileName;
	std::cout << "Please enter the file name: ";
	std::cin >> fileName;
	
	//! A function.
    /*!
      \sa displayOptions()
       Will display the main page of GUI with options
    */
	displayOptions();

	//! A function.
    !
      \sa ReadFile()
      \param filename a string argument.
      \param flag3Dfile boolean character to tell the type of file (3D/2D).
    
	if(/*3D file input*/){
		ReadFile(filename, flag3Dfile);
	}else{
		ReadFile(filename, flag3Dfile);
	}

	return 0;
}