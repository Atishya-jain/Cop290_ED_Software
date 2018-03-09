/*! \file */
// #include <gtk/gtk.h>
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
  point p1;
  p1.x=2;
  p1.y=4;
  p1.z=0;
  p1.label="1";

  point p2;
  p2.x=8;
  p2.y=6;
  p2.z=0;
  p2.label="2";

  point p3;
  p3.x=8;
  p3.y=6;
  p3.z=0;
  p3.label="3";

  point p4;
  p4.x=8;
  p4.y=6;
  p4.z=0;
  p4.label="4";

  Interactive_editor a1;
  a1.drawLine(p1,p2);
  a1.drawLine(p1,p4);
  a1.drawLine(p1,p3);


  a1.drawLine(p3,p4);
  a1.eraseIt(p4,p3);
  a1.eraseIt(p2,p1);  
  a1.print();




	return 0;
}

// Our aim is not to create duplicates of graph everywhere but only to use pointers to point to one graph