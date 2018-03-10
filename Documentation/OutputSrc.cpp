/*! \file */
#include <bits/stdc++.h>
#include "Graphs.cpp"
using namespace std;

#ifndef _OUTPUT_H
#define _OUTPUT_H

  /*! \class Output
      \brief Render and save class.

      This class contains the methods to render the object on screen as well as save it in a file.
  */
  class Output
  {
      // Access specifier
      public:

      // Data Members
      map<string, vector<point> > TwoDGraph[3]; /*!< This is the array of orthographic projections */
      map<string, vector<point> > ThreeDGraph;  /*!< This is the 3D graph */
   
  	//! A Member function.
      /*!
        \sa RenderOutput3D()
        \param filename a string argument.
        \param flag3Dfile boolean character to tell the type of file (3D/2D).
      */
      void RenderOutput3D(){
      }

   
  	//! A Member function.
      /*!
        \sa RenderOutput2D()
        \param filename a string argument.
        \param flag3Dfile boolean character to tell the type of file (3D/2D).
      */
      void RenderOutput2D(){
      }

  	//! A Member function.
      /*!
        \sa saveToFile3D()
        \param filename a string argument.
        \param flag3Dfile boolean character to tell the type of file (3D/2D).
      */
      void saveToFile3D(){
        ofstream myfile;
        myfile.open("output.txt");
        int ct=0;
        for (std::map<string, vector<point> >::iterator it=ThreeDGraph.begin(); it!=ThreeDGraph.end(); ++it)
          ct++;
        myfile<<ct<<endl;
        for (std::map<string, vector<point> >::iterator it=ThreeDGraph.begin(); it!=ThreeDGraph.end(); ++it){
          myfile<<it->second[0].print();
          myfile<<"->";
          for(int i=1;i<it->second.size();i++){
            myfile<<it->second[i].print();
          }
          myfile<<endl;
        }
        myfile.close();
      }


  	//! A Member function.
      /*!
        \sa saveToFile2D()
        \param filename a string argument.
        \param flag3Dfile boolean character to tell the type of file (3D/2D).
      */
      void saveToFile2D(){
        ofstream myfile;
        myfile.open("output.txt");
        for(int j=0;j<3;j++){
          int ct=0;
          for (std::map<string, vector<point> >::iterator it=TwoDGraph[j].begin(); it!=TwoDGraph[j].end(); ++it){
            ct++;
          }
          myfile<<ct<<endl;
          for (std::map<string, vector<point> >::iterator it=TwoDGraph[j].begin(); it!=TwoDGraph[j].end(); ++it){
            myfile<<it->second[0].print();
            myfile<<"->";
            for(int i=1;i<it->second.size();i++){
              myfile<<it->second[i].print();
            }
            myfile<<endl;
          }
        }
        myfile.close();

      }
  };
#endif