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
      static map<string, vector<point> > ThreeDGraph; /*!< This is the 3D graph representation */
      static map<string, vector<point> > TwoDGraph[3]; /*!< This is orthographic projections */
      vector<string> listOfPoints;
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
      bool sortinrev(const pair<int,int> &a, const pair<int,int> &b){
             return (a.first > b.first);
      }
  	//! A Member function.
      /*!
        \sa ThreeDToOrthographic()
        \param filename a string argument.
        \param flag3Dfile boolean character to tell the type of file (3D/2D).
      */
      void ThreeDToOrthographic(){
        long length = listOfPoints.size();
        char arr = {};
        for(int GraphNo = 0; GraphNo<3;GraphNo++){
          // TwoDGraph[0] is graph with x = 0 -> Y-Z plane
          // TwoDGraph[1] is graph with y = 0 -> X-Z plane
          // TwoDGraph[2] is graph with z = 0 -> X-Y plane
          for(int i = 0;i<length;i++){
            vector<point> tempPoints = ThreeDGraph.[listOfPoints[i]];
            long tempSize = tempPoints.size();
            struct point myPoint = tempPoints[0];
            if(tempSize > 1){ // if there is any other point in the list
              vector< pair<int,string>> ToSort;
              ToSort.push_back(make_pair(myPoint.x,myPoint.label));
              for(int j = 1;j<tempSize;j++){
                if((tempPoints[j].y == myPoint.y)&&(tempPoints[j].z == myPoint.z)){
                  ToSort.push_back(make_pair(tempPoints[j].x,temPoints[j].label));
                }
              }
              sort(ToSort.begin(), ToSort.end(), sortinrev);
              int ToSortLen = ToSort.size();
              string tempLabel = ToSort[0].second;
              for(int j = 1;j<ToSortLen;j++){
                tempLabel.append("^");
                tempLabel.append(ToSort[j].second);
              }
              myPoint.label = tempLabel;
              TwoDGraph[myPoint.label].push_back(myPoint);                    
              for(int j = 1;j<tempSize;j++){
                struct point tempPoint = tempPoints[j];
                tempPoint.x = 0;
                if((tempPoint.y != myPoint.y)||(tempPoint.z != myPoint.z)){
                  TwoDGraph[myPoint.label].push_back(tempPoint);
                }
              }
            }
          }
        }
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