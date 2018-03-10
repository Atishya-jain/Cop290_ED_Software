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
  class ThreeDGraph_class{
    private:
    static bool sortinrev(const pair<int,string> &a, const pair<int,string> &b){
           return (a.first > b.first);
    }

    string GetLabel(struct point myPoint, int GraphNo){
      vector<point> tempPoints = ThreeDGraph[myPoint.label];
      long tempSize = tempPoints.size();
      vector< pair<int,string>> ToSort;
      ToSort.push_back(make_pair(myPoint.coordinate[GraphNo],myPoint.label));
      for(int j = 1;j<tempSize;j++){
        if((tempPoints[j].coordinate[(GraphNo+1)%3] == myPoint.coordinate[(GraphNo+1)%3])&&(tempPoints[j].coordinate[(GraphNo+2)%3] == myPoint.coordinate[(GraphNo+2)%3])){
          ToSort.push_back(make_pair(tempPoints[j].coordinate[GraphNo],tempPoints[j].label));
        }
      }
      sort(ToSort.begin(), ToSort.end(), sortinrev);
      int ToSortLen = ToSort.size();
      string tempLabel = ToSort[0].second;
      for(int j = 1;j<ToSortLen;j++){
        tempLabel.append("^");
        tempLabel.append(ToSort[j].second);
      }
      return tempLabel;  
    }
    
    
    // Access specifier
    public:
    // Data Members
    map<string, vector<point> > ThreeDGraph; /*!< This is the 3D graph representation */
    map<string, vector<point> > TwoDGraph[3]; /*!< This is orthographic projections */
    vector<string> listOfPoints;
	  
    //! A Member function.
    /*!
      \sa ModelRotation()
      \param filename a string argument.
      \param flag3Dfile boolean character to tell the type of file (3D/2D).
    */
    void ModelRotation(float angle, edge axis){
      // float anglex, angley, anglez;
      // for(int i = 0;i<length;i++){
      //   // Iterate over all points
      //   vector<point> tempPoints = ThreeDGraph[listOfPoints[i]];
      //   long tempSize = tempPoints.size();
      //   struct point myPoint = tempPoints[0];
      //   // if there is any other point in the list
      //   if(tempSize > 1){ 
        
      //     // Get combined Label
      //     string tempLabel = GetLabel(myPoint, GraphNo);
          
      //     // If that label is not present already
      //     if(TwoDGraph[GraphNo].count(tempLabel) == 0){
      //       // change my label
      //       myPoint.label = tempLabel;
      //       // Insert me in graph first
      //       TwoDGraph[GraphNo][myPoint.label].push_back(myPoint);                    
      //       // Iterate over my neighbours
      //       for(int j = 1;j<tempSize;j++){
      //         // Reduce coordinate to 0
      //         tempPoints[j].coordinate[GraphNo] = 0;
              
      //         // for All my non overlapping neighbours
      //         if((tempPoints[j].coordinate[(GraphNo+1)%3] != myPoint.coordinate[(GraphNo+1)%3])||(tempPoints[j].coordinate[(GraphNo+2)%3] != myPoint.coordinate[(GraphNo+2)%3])){
                
      //           // Check with what all points do they overlapp and get label
      //           tempPoints[j].label = GetLabel(tempPoints[j], GraphNo);
      //           // If that combined label is not present already then add else join edge with pre existing label
      //           if(TwoDGraph[GraphNo].count(tempPoints[j].label) == 0){
      //             TwoDGraph[GraphNo][myPoint.label].push_back(tempPoints[j]);
      //           }else{
      //             TwoDGraph[GraphNo][myPoint.label].push_back(TwoDGraph[GraphNo][tempPoints[j].label][0]);
      //           }
      //         }
      //       }
      //     }
      //   }
      // }
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
      long length = listOfPoints.size();
      for(int GraphNo = 0; GraphNo<3;GraphNo++){
        // TwoDGraph[0] is graph with x = 0 -> Y-Z plane
        // TwoDGraph[1] is graph with y = 0 -> X-Z plane
        // TwoDGraph[2] is graph with z = 0 -> X-Y plane
        for(int i = 0;i<length;i++){
          // Iterate over all points
          vector<point> tempPoints = ThreeDGraph[listOfPoints[i]];
          long tempSize = tempPoints.size();
          struct point myPoint = tempPoints[0];
          // if there is any other point in the list
          if(tempSize > 1){ 
          
            // Get combined Label
            string tempLabel = GetLabel(myPoint, GraphNo);
            
            // If that label is not present already
            if(TwoDGraph[GraphNo].count(tempLabel) == 0){
              // change my label
              myPoint.label = tempLabel;
              // Insert me in graph first
              TwoDGraph[GraphNo][myPoint.label].push_back(myPoint);                    
              // Iterate over my neighbours
              for(int j = 1;j<tempSize;j++){
                // Reduce coordinate to 0
                tempPoints[j].coordinate[GraphNo] = 0;
                
                // for All my non overlapping neighbours
                if((tempPoints[j].coordinate[(GraphNo+1)%3] != myPoint.coordinate[(GraphNo+1)%3])||(tempPoints[j].coordinate[(GraphNo+2)%3] != myPoint.coordinate[(GraphNo+2)%3])){
                  
                  // Check with what all points do they overlapp and get label
                  tempPoints[j].label = GetLabel(tempPoints[j], GraphNo);
                  // If that combined label is not present already then add else join edge with pre existing label
                  if(TwoDGraph[GraphNo].count(tempPoints[j].label) == 0){
                    TwoDGraph[GraphNo][myPoint.label].push_back(tempPoints[j]);
                  }else{
                    TwoDGraph[GraphNo][myPoint.label].push_back(TwoDGraph[GraphNo][tempPoints[j].label][0]);
                  }
                }
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

    void print(){
      for (std::map<string, vector<point> >::iterator it=TwoDGraph[1].begin(); it!=TwoDGraph[1].end(); ++it){
        cout<<it->first+"->";
        for(int j=0;j<it->second.size();j++){
          cout<<it->second[j].label+" ";
        }
        cout<<endl;
      }
    }
  };
#endif