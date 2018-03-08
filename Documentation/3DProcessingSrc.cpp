/*! \file */
#include <bits/stdc++.h>
#include "structs.cpp"
using namespace std;

#ifndef _THREED_H
#define _THREED_H

  /*! \class ThreeDGraph_class
      \brief 3D behaviour class.

      This class has all the functionalities that a 3D object can possess
      in the software. It can be rotated, projected along some plane or 
      can give its orthographic projections
  */
  class ThreeDGraph_class
  {
      // Access specifier
      public:
      // Data Members
      static vector<vector<point> > ThreeDGraph; /*!< This is the 3D graph representation */
      static vector<vector<point> > TwoDGraphMain; /*!< This is an orthographic projection */
      static vector<vector<point> > TwoDGraph1; /*!< This is an orthographic projection */
      static vector<vector<point> > TwoDGraph2; /*!< This is an orthographic projection */

      //Constructor
      ThreeDGraph_class(vector<vector<point> > graph){
        ThreeDGraph = graph;
        // TwoDGraphMain = "";
        // TwoDGraph1 = "";
        // TwoDGraph2 = "";
      }

  	//! A Member function.
      /*!
        \sa ModelRotation()
        \param filename a string argument.
        \param flag3Dfile boolean character to tell the type of file (3D/2D).
      */
      void ModelRotation(float angle, edge axis){
        //do the computation to change the graph
      }

  	//! A Member function.
      /*!
        \sa PlanerProjection()
        \param filename a string argument.
        \param flag3Dfile boolean character to tell the type of file (3D/2D).
      */
      string PlanarProjection(bool view, plane equationOfPlane){
        string newProjection;
        //do the computation
        return newProjection;
      }

  	//! A Member function.
      /*!
        \sa ThreeDToOrthographic()
        \param filename a string argument.
        \param flag3Dfile boolean character to tell the type of file (3D/2D).
      */
      void ThreeDToOrthographic(){
        //do the computation to return the orthographic
      }    

  	//! A Member function.
      /*!
        returns true if edge = solid line else false
        \sa HiddenEdgeCheck()
        \param edge a string argument.
      */
      bool HiddenEdgeCheck(edge line){
        /* returns true if edge = solid line else false*/
        return true;
      }
  };
#endif