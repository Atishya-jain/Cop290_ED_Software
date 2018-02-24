/*! \file */
#include<bits/stdc++.h>
#include <InputSrc.cpp>
#include <OutputSrc.cpp>
#include <2DProcessingSrc.cpp>
#include <3DProcessingSrc.cpp>
#include <InteractiveSrc.cpp>
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