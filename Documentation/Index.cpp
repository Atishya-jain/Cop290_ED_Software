/*! \file */
#include "bits/stdc++.h"
#include <QtCore>
#include <QtGui>

#include "Graphs.cpp"
#include "InputSrc.cpp"
#include "OutputSrc.cpp"
#include "InteractiveSrc.cpp"
using namespace std;
/*! \fn main()*/
int main(int argc, char *argv[]){
   QApplication a(argc, argv);
  
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

  // point p1;
  // p1.coordinate[0]=0;
  // p1.coordinate[1]=0;
  // p1.coordinate[2]=0;
  // p1.label="1";
  // listOfPoints.push_back(p1.label);

  // point p2;
  // p2.coordinate[0]=200;
  // p2.coordinate[1]=0;
  // p2.coordinate[2]=0;
  // p2.label="2";
  // listOfPoints.push_back(p2.label);

  // point p3;
  // p3.coordinate[0]=200;
  // p3.coordinate[1]=200;
  // p3.coordinate[2]=0;
  // p3.label="3";
  // listOfPoints.push_back(p3.label);

  // point p4;
  // p4.coordinate[0]=0;
  // p4.coordinate[1]=200;
  // p4.coordinate[2]=0;
  // p4.label="4";
  // listOfPoints.push_back(p4.label);

  // point p5;
  // p5.coordinate[0]=0;
  // p5.coordinate[1]=200;
  // p5.coordinate[2]=200;
  // p5.label="5";
  // listOfPoints.push_back(p5.label);

  // point p6;
  // p6.coordinate[0]=0;
  // p6.coordinate[1]=0;
  // p6.coordinate[2]=200;
  // p6.label="6";
  // listOfPoints.push_back(p6.label);
  
  // point p7;
  // p7.coordinate[0]=200;
  // p7.coordinate[1]=0;
  // p7.coordinate[2]=200;
  // p7.label="7";
  // listOfPoints.push_back(p7.label);
  
  // point p8;
  // p8.coordinate[0]=200;
  // p8.coordinate[1]=200;
  // p8.coordinate[2]=200;
  // p8.label="8";
  // listOfPoints.push_back(p8.label);

  // point p1;
  // p1.coordinate[0]=-50;
  // p1.coordinate[1]=-50;
  // p1.coordinate[2]=0;
  // p1.label="1";
  // listOfPoints.push_back(p1.label);

  // point p2;
  // p2.coordinate[0]=-50;
  // p2.coordinate[1]=50;
  // p2.coordinate[2]=0;
  // p2.label="2";
  // listOfPoints.push_back(p2.label);

  // point p3;
  // p3.coordinate[0]=50;
  // p3.coordinate[1]=50;
  // p3.coordinate[2]=0;
  // p3.label="3";
  // listOfPoints.push_back(p3.label);

  // point p4;
  // p4.coordinate[0]=50;
  // p4.coordinate[1]=-50;
  // p4.coordinate[2]=0;
  // p4.label="4";
  // listOfPoints.push_back(p4.label);

  // point p5;
  // p5.coordinate[0]=0;
  // p5.coordinate[1]=0;
  // p5.coordinate[2]=50;
  // p5.label="5";
  // listOfPoints.push_back(p5.label);

  // point p9;
  // p9.coordinate[0]=1;
  // p9.coordinate[1]=1;
  // p9.coordinate[2]=1;
  // p9.label="9";
  // listOfPoints.push_back(p9.label);


  // point p10;
  // p10.coordinate[0]=2;
  // p10.coordinate[1]=2;
  // p10.coordinate[2]=2;
  // p10.label="10";
  // listOfPoints.push_back(p10.label);

  // Interactive_editor a1;
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

  point p1;
  p1.coordinate[0]=100;
  p1.coordinate[1]=0;
  p1.coordinate[2]=0;
  p1.label="1";
  listOfPoints.push_back(p1.label);

  point p2;
  p2.coordinate[0]=0;
  p2.coordinate[1]=200;
  p2.coordinate[2]=0;
  p2.label="2";
  listOfPoints.push_back(p2.label);

  point p3;
  p3.coordinate[0]=200;
  p3.coordinate[1]=200;
  p3.coordinate[2]=0;
  p3.label="3";
  listOfPoints.push_back(p3.label);

  point p4;
  p4.coordinate[0]=100;
  p4.coordinate[1]=100;
  p4.coordinate[2]=200;
  p4.label="4";
  listOfPoints.push_back(p4.label);

  // point p5;
  // p5.coordinate[0]=50;
  // p5.coordinate[1]=50;
  // p5.coordinate[2]=350;
  // p5.label="5";
  // listOfPoints.push_back(p5.label);

  // point p6;
  // p6.coordinate[0]=650;
  // p6.coordinate[1]=50;
  // p6.coordinate[2]=350;
  // p6.label="6";
  // listOfPoints.push_back(p6.label);
  
  // point p7;
  // p7.coordinate[0]=450;
  // p7.coordinate[1]=350;
  // p7.coordinate[2]=350;
  // p7.label="7";
  // listOfPoints.push_back(p7.label);
  
  // point p8;
  // p8.coordinate[0]=250;
  // p8.coordinate[1]=350;
  // p8.coordinate[2]=350;
  // p8.label="8";
  // listOfPoints.push_back(p8.label);



// 3D testing
  ThreeDGraph_class testObj;

  testObj.listOfPoints = listOfPoints;

  // testObj.ThreeDGraph[p1.label].push_back(p1);
  // testObj.ThreeDGraph[p1.label].push_back(p2);
  // testObj.ThreeDGraph[p1.label].push_back(p4);
  // testObj.ThreeDGraph[p1.label].push_back(p6);

  // testObj.ThreeDGraph[p2.label].push_back(p2);
  // testObj.ThreeDGraph[p2.label].push_back(p1);
  // testObj.ThreeDGraph[p2.label].push_back(p3);
  // testObj.ThreeDGraph[p2.label].push_back(p7);

  // testObj.ThreeDGraph[p3.label].push_back(p3);
  // testObj.ThreeDGraph[p3.label].push_back(p4);
  // testObj.ThreeDGraph[p3.label].push_back(p2);
  // testObj.ThreeDGraph[p3.label].push_back(p8);

  // testObj.ThreeDGraph[p4.label].push_back(p4);
  // testObj.ThreeDGraph[p4.label].push_back(p1);
  // testObj.ThreeDGraph[p4.label].push_back(p3);
  // testObj.ThreeDGraph[p4.label].push_back(p5);

  // testObj.ThreeDGraph[p5.label].push_back(p5);
  // testObj.ThreeDGraph[p5.label].push_back(p6);
  // testObj.ThreeDGraph[p5.label].push_back(p8);
  // testObj.ThreeDGraph[p5.label].push_back(p7);

  // testObj.ThreeDGraph[p6.label].push_back(p6);
  // testObj.ThreeDGraph[p6.label].push_back(p5);
  // testObj.ThreeDGraph[p6.label].push_back(p1);
  // testObj.ThreeDGraph[p6.label].push_back(p7);

  // testObj.ThreeDGraph[p7.label].push_back(p7);
  // testObj.ThreeDGraph[p7.label].push_back(p2);
  // testObj.ThreeDGraph[p7.label].push_back(p8);
  // testObj.ThreeDGraph[p7.label].push_back(p6);

  // testObj.ThreeDGraph[p8.label].push_back(p8);
  // testObj.ThreeDGraph[p8.label].push_back(p3);
  // testObj.ThreeDGraph[p8.label].push_back(p5);
  // testObj.ThreeDGraph[p8.label].push_back(p7);
  


  // testObj.ThreeDGraph[p1.label].push_back(p1);
  // testObj.ThreeDGraph[p1.label].push_back(p2);
  // testObj.ThreeDGraph[p1.label].push_back(p4);
  // testObj.ThreeDGraph[p1.label].push_back(p5);

  // testObj.ThreeDGraph[p2.label].push_back(p2);
  // testObj.ThreeDGraph[p2.label].push_back(p1);
  // testObj.ThreeDGraph[p2.label].push_back(p3);
  // testObj.ThreeDGraph[p2.label].push_back(p4);

  // testObj.ThreeDGraph[p3.label].push_back(p3);
  // testObj.ThreeDGraph[p3.label].push_back(p4);
  // testObj.ThreeDGraph[p3.label].push_back(p2);
  // testObj.ThreeDGraph[p3.label].push_back(p7);

  // testObj.ThreeDGraph[p4.label].push_back(p4);
  // testObj.ThreeDGraph[p4.label].push_back(p1);
  // testObj.ThreeDGraph[p4.label].push_back(p3);
  // testObj.ThreeDGraph[p4.label].push_back(p8);

  // testObj.ThreeDGraph[p5.label].push_back(p5);
  // testObj.ThreeDGraph[p5.label].push_back(p6);
  // testObj.ThreeDGraph[p5.label].push_back(p8);
  // testObj.ThreeDGraph[p5.label].push_back(p1);

  // testObj.ThreeDGraph[p6.label].push_back(p6);
  // testObj.ThreeDGraph[p6.label].push_back(p5);
  // testObj.ThreeDGraph[p6.label].push_back(p2);
  // testObj.ThreeDGraph[p6.label].push_back(p7);

  // testObj.ThreeDGraph[p7.label].push_back(p7);
  // testObj.ThreeDGraph[p7.label].push_back(p3);
  // testObj.ThreeDGraph[p7.label].push_back(p8);
  // testObj.ThreeDGraph[p7.label].push_back(p6);

  // testObj.ThreeDGraph[p8.label].push_back(p8);
  // testObj.ThreeDGraph[p8.label].push_back(p4);
  // testObj.ThreeDGraph[p8.label].push_back(p5);
  // testObj.ThreeDGraph[p8.label].push_back(p7);
  


  testObj.ThreeDGraph[p1.label].push_back(p1);
  testObj.ThreeDGraph[p1.label].push_back(p2);
  testObj.ThreeDGraph[p1.label].push_back(p3);
  testObj.ThreeDGraph[p1.label].push_back(p4);

  testObj.ThreeDGraph[p2.label].push_back(p2);
  testObj.ThreeDGraph[p2.label].push_back(p1);
  testObj.ThreeDGraph[p2.label].push_back(p3);
  testObj.ThreeDGraph[p2.label].push_back(p4);

  testObj.ThreeDGraph[p3.label].push_back(p3);
  testObj.ThreeDGraph[p3.label].push_back(p2);
  testObj.ThreeDGraph[p3.label].push_back(p4);
  testObj.ThreeDGraph[p3.label].push_back(p1);

  testObj.ThreeDGraph[p4.label].push_back(p4);
  testObj.ThreeDGraph[p4.label].push_back(p3);
  testObj.ThreeDGraph[p4.label].push_back(p1);
  testObj.ThreeDGraph[p4.label].push_back(p2);

  // testObj.ThreeDGraph[p5.label].push_back(p5);
  // testObj.ThreeDGraph[p5.label].push_back(p1);
  // testObj.ThreeDGraph[p5.label].push_back(p2);
  // testObj.ThreeDGraph[p5.label].push_back(p3);
  // testObj.ThreeDGraph[p5.label].push_back(p4);
  testObj.MeanNormalisation();
  testObj.Isometric();
  testObj.ThreeDToOrthographic();
  testObj.print();
  cout << "HI" << endl;

  Output outTest;
  outTest.PlaneProj = testObj.IsometricGraph;

  // plane testPlane;
  // testPlane.A = 1;
  // testPlane.B = 1;
  // testPlane.C = 1;
  // testPlane.D = 0;
  // cout << "HI" << endl;

  // map<string, vector<point>> myTest = testObj.PlanarProjection(true, testPlane);
  // testObj.TwoDGraph[0].clear();
  // testObj.TwoDGraph[0] = myTest;
  // testObj.print();


  // outTest.TwoDGraph = testObj.TwoDGraph;
  std::copy(std::begin(testObj.TwoDGraph), std::end(testObj.TwoDGraph), std::begin(outTest.TwoDGraph));
  // outTest.PlaneProj = myTest;
  // testObj.PlaneProj = myTest;
  // testObj.print();
    
  QLabel l;
  QPicture pi;
  pi = outTest.RenderOutput2D(pi);
  l.setPicture(pi);
  l.show();

  // edge testedge;
  // testedge.p1.coordinate[0] = 0;
  // testedge.p1.coordinate[1] = 0;
  // testedge.p1.coordinate[2] = 0;

  // testedge.p2.coordinate[0] = 0;
  // testedge.p2.coordinate[1] = 0;
  // testedge.p2.coordinate[2] = 5;

  // testObj.ModelRotation(45,testedge);

  // testObj.ThreeDToOrthographic();
  // testObj.print();

  // plane testPlane;
  // testPlane.A = 1;
  // testPlane.B = 1;
  // testPlane.C = 1;
  // testPlane.D = 0;
  // cout << "HI" << endl;

  // map<string, vector<point>> myTest = testObj.PlanarProjection(true, testPlane);
  // testObj.TwoDGraph[0].clear();
  // testObj.TwoDGraph[0] = myTest;
  // testObj.print();


  // testObj.print3D();

  // edge testedge;
  // testedge.p1.coordinate[0] = 1;
  // testedge.p1.coordinate[1] = 1;
  // testedge.p1.coordinate[2] = 1;

  // testedge.p2.coordinate[0] = 1;
  // testedge.p2.coordinate[1] = 1;
  // testedge.p2.coordinate[2] = 5;

  // testObj.ModelRotation(45,testedge);
  // testObj.print3D();

  // testObj.Translation(1,1,1,testedge,true);
  // testObj.print3D();
  // a1.MyPlane = testObj.TwoDGraph[0];
   return a.exec();
	// return 0;
}

// Our aim is not to create duplicates of graph everywhere but only to use pointers to point to one graph