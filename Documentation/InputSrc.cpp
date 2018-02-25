/*! \file */
#include<bits/stdc++.h>
#include <Index.cpp>
#include <OutputSrc.cpp>
#include <2DProcessingSrc.cpp>
#include <3DProcessingSrc.cpp>
#include <InteractiveSrc.cpp>
#include <Graphs.cpp>

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
        Display the options like to input in a file or draw
    */
    getOptions();
  }

  /*!
     Will set the options/settings user desires
    \param ThreeDorTwoD To check if 3D model file is input or a 2D model file.
    \param file To check if file is input or an intercative input.
  */
  void getOptions(){
    /*
        Display the options
        cin >> something
    */
    if(/*Some Condition*/){
      file = true;
    }else{
      file = false;
    }

    if(/*Some Condition*/){
      graph::ThreeDorTwoD = true;
    }else{
      graph::ThreeDorTwoD = false;
    }
  }

  /*!
    \param filename a string argument.
    \param ThreeDorTwoD boolean character to tell the type of file (3D/2D).
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
    if(graph::ThreeDorTwoD){
      graph::ThreeDgraph = v;
    }else{
      graph::TwoDGraphs.[TwoDFileCount] = v;
      TwoDFileCount++;
      if(TwoDFileCount < 3){
        getFileName();
      }
    }
  }

};
