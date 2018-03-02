/*! \file */
#include <gtk/gtk.h>
#include <bits/stdc++.h>
#include <Graphs.cpp>
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
  edit.drawing = (!input.file) // To set the type of editing to edit object
  edit.displayOptions();
	return 0;
}

// Our aim is not to create duplicates of graph everywhere but only to use pointers to point to one graph