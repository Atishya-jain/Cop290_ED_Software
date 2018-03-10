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
  // Input input;
  // input.displayOptions();
  // if(input.file){
  //   input.getFileName();
  // }
  // Interactive_editor edit;
  // edit.drawing = (!input.file); // To set the type of editing to edit object
  // edit.displayOptions();
// cout << "compil/ed";
  vector <string> listOfPoints;

  point p1;
  p1.coordinate[0]=0;
  p1.coordinate[1]=0;
  p1.coordinate[2]=0;
  p1.label="1";
  listOfPoints.push_back(p1.label);

  point p2;
  p2.coordinate[0]=5;
  p2.coordinate[1]=0;
  p2.coordinate[2]=0;
  p2.label="2";
  listOfPoints.push_back(p2.label);

  point p3;
  p3.coordinate[0]=5;
  p3.coordinate[1]=5;
  p3.coordinate[2]=0;
  p3.label="3";
  listOfPoints.push_back(p3.label);

  point p4;
  p4.coordinate[0]=0;
  p4.coordinate[1]=5;
  p4.coordinate[2]=0;
  p4.label="4";
  listOfPoints.push_back(p4.label);

  point p5;
  p5.coordinate[0]=0;
  p5.coordinate[1]=5;
  p5.coordinate[2]=5;
  p5.label="5";
  listOfPoints.push_back(p5.label);

  point p6;
  p6.coordinate[0]=0;
  p6.coordinate[1]=0;
  p6.coordinate[2]=5;
  p6.label="6";
  listOfPoints.push_back(p6.label);
  
  point p7;
  p7.coordinate[0]=5;
  p7.coordinate[1]=0;
  p7.coordinate[2]=5;
  p7.label="7";
  listOfPoints.push_back(p7.label);
  
  point p8;
  p8.coordinate[0]=5;
  p8.coordinate[1]=5;
  p8.coordinate[2]=5;
  p8.label="8";
  listOfPoints.push_back(p8.label);

  Interactive_editor a1;
  // a1.drawLine(p1,p2);
  // a1.drawLine(p1,p4);
  // a1.drawLine(p1,p6);

  // a1.drawLine(p2,p1);
  // a1.drawLine(p2,p3);
  // a1.drawLine(p2,p7);

  // a1.drawLine(p3,p2);
  // a1.drawLine(p3,p4);
  // a1.drawLine(p3,p8);

  // a1.drawLine(p4,p1);
  // a1.drawLine(p4,p3);
  // a1.drawLine(p4,p5);

  // a1.drawLine(p5,p8);
  // a1.drawLine(p5,p4);
  // a1.drawLine(p5,p6);

  // a1.drawLine(p6,p1);
  // a1.drawLine(p6,p5);
  // a1.drawLine(p6,p7);

  // a1.drawLine(p7,p2);
  // a1.drawLine(p7,p8);
  // a1.drawLine(p7,p6);

  // a1.drawLine(p8,p5);
  // a1.drawLine(p8,p3);
  // a1.drawLine(p8,p7);      
  // a1.eraseIt(p4,p3);
  // a1.eraseIt(p2,p1);  
  // a1.print();

// 3D testing
  ThreeDGraph_class testObj;
  // testObj.ThreeDGraph = a1.MyPlane;
  testObj.listOfPoints = listOfPoints;
  testObj.ThreeDGraph[p1.label].push_back(p1);
  testObj.ThreeDGraph[p1.label].push_back(p2);
  testObj.ThreeDGraph[p1.label].push_back(p4);
  testObj.ThreeDGraph[p1.label].push_back(p6);

  testObj.ThreeDGraph[p2.label].push_back(p2);
  testObj.ThreeDGraph[p2.label].push_back(p1);
  testObj.ThreeDGraph[p2.label].push_back(p3);
  testObj.ThreeDGraph[p2.label].push_back(p7);

  testObj.ThreeDGraph[p3.label].push_back(p3);
  testObj.ThreeDGraph[p3.label].push_back(p2);
  testObj.ThreeDGraph[p3.label].push_back(p4);
  testObj.ThreeDGraph[p3.label].push_back(p8);

  testObj.ThreeDGraph[p4.label].push_back(p4);
  testObj.ThreeDGraph[p4.label].push_back(p1);
  testObj.ThreeDGraph[p4.label].push_back(p3);
  testObj.ThreeDGraph[p4.label].push_back(p5);

  testObj.ThreeDGraph[p5.label].push_back(p5);
  testObj.ThreeDGraph[p5.label].push_back(p8);
  testObj.ThreeDGraph[p5.label].push_back(p4);
  testObj.ThreeDGraph[p5.label].push_back(p6);

  testObj.ThreeDGraph[p6.label].push_back(p6);
  testObj.ThreeDGraph[p6.label].push_back(p1);
  testObj.ThreeDGraph[p6.label].push_back(p5);
  testObj.ThreeDGraph[p6.label].push_back(p7);

  testObj.ThreeDGraph[p7.label].push_back(p7);
  testObj.ThreeDGraph[p7.label].push_back(p2);
  testObj.ThreeDGraph[p7.label].push_back(p8);
  testObj.ThreeDGraph[p7.label].push_back(p6);

  testObj.ThreeDGraph[p8.label].push_back(p8);
  testObj.ThreeDGraph[p8.label].push_back(p3);
  testObj.ThreeDGraph[p8.label].push_back(p5);
  testObj.ThreeDGraph[p8.label].push_back(p7);
  
  testObj.ThreeDToOrthographic();
  testObj.print();
  TwoDGraph_class A1;
  copy(begin(testObj.TwoDGraph), end(testObj.TwoDGraph), begin(A1.TwoDGraph));
  A1.TwoDtoThreeD();
  A1.print3D();
  cout<<"---"<<endl;
  testObj.print3D();
  return 0;
}

// Our aim is not to create duplicates of graph everywhere but only to use pointers to point to one graph