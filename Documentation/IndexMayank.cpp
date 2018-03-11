/*! \file */
// #include "qtlib/qtlib.h"
#include "bits/stdc++.h"
#include "Graphs.cpp"
#include "InputSrc.cpp"
#include "OutputSrc.cpp"
#include "InteractiveSrc.cpp"
using namespace std;
/*! \fn main()*/
int main(){
  TwoDGraph_class input_2d;
  ThreeDGraph_class input_3d;
  bool isFile3d = true;
  int ch;
  bool isInputFile=true;
  cout<<"------INPUT------"<<endl;
  cout<<"Enter 1 to input via file or 2 to draw(2d only): ";
  cin>>ch;
  cout<<endl;
  if(ch!=1) isInputFile=false;
  if(isInputFile){
    //take input from file
    Input I1;
    I1.getFileName();
    isFile3d = I1.ThreeDfile;
    I1.ReadFile();
    if(isFile3d){
      input_3d.ThreeDGraph = I1.ThreeDGraph;
    }else{
      std::copy(std::begin(I1.TwoDGraph), std::end(I1.TwoDGraph), std::begin(input_2d.TwoDGraph));
    }
  }else{
    //interactive input
    Interactive_editor I1;
    isFile3d = false;

    // std::copy(std::begin(I1.MyPlane), std::end(I1.MyPlane), std::begin(input_2d.TwoDGraph));
    //add the code for interactive editor
  }
  //input taken

  //PROCESSING
  if(isFile3d){
    //Atishya ki 3d processing
    input_3d.ThreeDToOrthographic();
    input_3d.print();
  }else{
    input_2d.TwoDtoThreeD();
  }

  //OUTPUTTING
  Output O1;
  O1.ThreeDGraph = input_2d.ThreeDGraph;
  std::copy(std::begin(input_3d.TwoDGraph), std::end(input_3d.TwoDGraph), std::begin(O1.TwoDGraph));
  cout<<"saving in file output.txt"<<endl;
  if(isFile3d)
    O1.saveToFile2D();
  else
    O1.saveToFile3D();
  cout<<"Thanks for using our software"<<endl;



  return 0;
}

// Our aim is not to create duplicates of graph everywhere but only to use pointers to point to one graph