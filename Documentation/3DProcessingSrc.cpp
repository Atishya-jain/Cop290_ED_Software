/*! \file */
#include <bits/stdc++.h>
#include "structs.cpp"

typedef vector<float> Vec;
typedef vector<Vec> Mat;
#define PI 3.14159265

using namespace std;

#ifndef _THREED_H
#define _THREED_H
  Vec operator*(const Mat &a, const Vec &x){
    int i,j;
    int m = a.size();
    int n = x.size();

    Vec prod(m);

    for(i = 0; i < m; i++){
      prod[i] = 0.;
      for(j = 0; j < n; j++)
        prod[i] += a[i][j]*x[j];
    }
    return prod;
  }
  
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

    Mat matrixMultiply(vector<vector<float>> mat1, vector<vector<float>> mat2){
      long row1,col1,row2,col2;
      row1 = mat1.size(); 
      row2 = mat2.size(); 
      col1 = mat1[0].size(); 
      col2 = mat2[0].size();
      return matrixAns;
    }

    Mat createMatrix(){
      Mat tempMatrix;
      for(int i = 0;i<4;i++){
        Vec row;
        for (int j = 0; j < 4; j++)
        {
          if (i == j)
          {
            row.push_back(1);
          }else{
            row.push_back(0);
          }
        }
        tempMatrix.push_back(row);
      }
      return tempMatrix;
    }

    void specificRotation(float angle, int choiceAxis, Vec Aline, bool GraphOrLine){
      if(choiceAxis == 0){
        matrix[0][1][1] = cos(angle);
        matrix[0][2][2] = cos(angle);
        matrix[0][2][1] = sin(angle);
        matrix[0][1][2] = -1.0*sin(angle);
      }else if(choiceAxis == 1){ 
        matrix[1][0][0] = cos(angle);
        matrix[1][2][2] = cos(angle);
        matrix[1][0][2] = sin(angle);
        matrix[1][2][0] = -1.0*sin(angle);
      }else{
        matrix[2][1][1] = cos(angle);
        matrix[2][0][0] = cos(angle);
        matrix[2][1][0] = sin(angle);
        matrix[2][0][1] = -1.0*sin(angle);
      }
      if(GraphOrLine){
        long totalPoints = listOfPoints.size();
        for(int i = 0; i < totalPoints; ++i){
          vector<point> tempList = ThreeDGraph[listOfPoints[i]];
          long tempsiz = tempList.size();
          for (int j = 0; j < tempsiz; j++){
            Vec tempVec;
            tempVec.push_back(tempList[j].coordinate[0]);  
            tempVec.push_back(tempList[j].coordinate[1]);  
            tempVec.push_back(tempList[j].coordinate[2]);
            tempVec.push_back(1);
            tempVec = matrix[choiceAxis]*tempVec;
            ThreeDGraph[listOfPoints[i]][j].coordinate[0] = tempVec[0];  
            ThreeDGraph[listOfPoints[i]][j].coordinate[1] = tempVec[1];  
            ThreeDGraph[listOfPoints[i]][j].coordinate[2] = tempVec[2];  
          }
        }
      }else{
        tempLineVect = matrix[choiceAxis]*Aline;
      }
    }    
    // Access specifier
    public:

    ThreeDGraph_class(){
      matrix[0] = createMatrix();
      matrix[1] = createMatrix();
      matrix[2] = createMatrix();
    }
  
    // Data Members
    map<string, vector<point> > ThreeDGraph; /*!< This is the 3D graph representation */
    map<string, vector<point> > TwoDGraph[3]; /*!< This is orthographic projections */
    map<string, vector<point> > PlaneProj; /*!< This is planar projection of 3D graph when requested */
    vector<string> listOfPoints;/*!< This is list of points available in 3D graph */
    Mat matrixAns;/*!< This is answer calculated after matrix computations */
    Mat matrix[3]; /*!< This is matrix for rotating about specific axis */
    edge tempLineAns;
    Vec tempLineVect;

    //! A Member function.
    /*!
      \sa Translation()
      \param x to tell the amount of shift in x coordinate.
      \param y to tell the amount of shift in y coordinate.
      \param z to tell the amount of shift in z coordinate.
      \param GraphOrLine boolean character to tell whether rotation required is of line or graph.
    */
    void Translation(float x, float y, float z,edge line, bool GraphOrLine){  
      if (GraphOrLine){ // if true then graph else axis        
        long siz = listOfPoints.size();
        for(int i = 0; i<siz; i++){
          vector<point> temp = ThreeDGraph[listOfPoints[i]];
          long tempsiz = temp.size();
          for (int j = 0; j < tempsiz; j++)
          {
            ThreeDGraph[listOfPoints[i]][j].coordinate[0] = temp[j].coordinate[0] - x;
            ThreeDGraph[listOfPoints[i]][j].coordinate[1] = temp[j].coordinate[1] - y;
            ThreeDGraph[listOfPoints[i]][j].coordinate[2] = temp[j].coordinate[2] - z;
          }
        }        
      }else{
        tempLineAns.p1.coordinate[0] = line.p1.coordinate[0] - x; 
        tempLineAns.p1.coordinate[1] = line.p1.coordinate[1] - y; 
        tempLineAns.p1.coordinate[2] = line.p1.coordinate[2] - z; 

        tempLineAns.p2.coordinate[0] = line.p2.coordinate[0] - x; 
        tempLineAns.p2.coordinate[1] = line.p2.coordinate[1] - y; 
        tempLineAns.p2.coordinate[2] = line.p2.coordinate[2] - z; 
      }
    }

    //! A Member function.
    /*!
      \sa ModelRotation()
      \param filename a string argument.
      \param flag3Dfile boolean character to tell the type of file (3D/2D).
    */
    void ModelRotation(float angle, edge axis){
      angle = angle*(PI/180);
      Translation(axis.p1.coordinate[0], axis.p1.coordinate[1], axis.p1.coordinate[2], axis, false);
      Translation(axis.p1.coordinate[0], axis.p1.coordinate[1], axis.p1.coordinate[2], axis, true);
      tempLineVect.clear();
      tempLineVect.push_back(tempLineAns.p2.coordinate[0]);
      tempLineVect.push_back(tempLineAns.p2.coordinate[1]);
      tempLineVect.push_back(tempLineAns.p2.coordinate[2]);
      tempLineVect.push_back(1);

      // calculate angleX
      float angleX = (atan(tempLineVect[1]/tempLineVect[2])); // angleX = y/z
      specificRotation(angleX,0,tempLineVect,false);
      specificRotation(angleX,0,tempLineVect,true);
      
      // calculate angleY
      float angleY = (atan(tempLineVect[0]/tempLineVect[2])); // angleY = x/z
      specificRotation(angleY,1,tempLineVect,false);
      specificRotation(angleY,1,tempLineVect,true);

      specificRotation(angle,2,tempLineVect,true);
      // Inverse Transformations
      tempLineVect.clear();
      specificRotation(-1*angleY,1,tempLineVect,true);
      specificRotation(-1*angleX,0,tempLineVect,true);
      Translation(-1*axis.p1.coordinate[0], -1*axis.p1.coordinate[1], -1*axis.p1.coordinate[2], tempLineAns, true);
    }

	//! A Member function.
    /*!
      \sa PlanerProjection()
      \param view to specify the viewing direction wrt origin.
      \param equationOfPlane this defines the plane on which projection has to be taken.
    */
    // map<string, vector<point> > PlanarProjection(bool view, plane equationOfPlane){
    //   map<string, vector<point> > tempProj;
      
    //   long siz = listOfPoints.size();
    //   for(int i = 0; i<siz; i++){
    //     vector<point> temp = ThreeDGraph[listOfPoints[i]];
    //     long tempsiz = temp.size();
        
    //     struct point myPoint = temp[0];
    //     // if there is any other point in the list
    //     if(tempsiz > 1){ 
        
    //       // Get combined Label
    //       string tempLabel = GetLabel(myPoint, GraphNo);
          
    //       // If that label is not present already
    //       if(tempProj.count(tempLabel) == 0){
    //         // change my label
    //         myPoint.label = tempLabel;
    //         // Insert me in graph first
    //         tempProj[myPoint.label].push_back(myPoint);                    
    //         // Iterate over my neighbours
    //         for(int j = 1;j<tempsiz;j++){
    //           // Project coordinate on plane            
    //           float tempA = equationOfPlane.A;
    //           float tempB = equationOfPlane.B;
    //           float tempC = equationOfPlane.C;
    //           float tempD = equationOfPlane.D;
    //           float t = (tempD - ((tempA)*(temp[j].coordinate[0])) - ((tempB)*(temp[j].coordinate[1])) - ((tempC)*(temp[j].coordinate[2])))/((tempA*tempA)+(tempB*tempB)+(tempC*tempC));
    //           float newX = temp[j].coordinate[0] + (tempA*t);  
    //           float newY = temp[j].coordinate[1] + (tempB*t);  
    //           float newZ = temp[j].coordinate[2] + (tempC*t);              

    //           // for All my non overlapping neighbours
    //           if((temp[j].coordinate[0] != myPoint.coordinate[0])||(tempPoints[j].coordinate[1] != myPoint.coordinate[1])||(tempPoints[j].coordinate[2] != myPoint.coordinate[2])){
                
    //             // Check with what all points do they overlapp and get label
    //             temp[j].label = GetLabel(temp[j], GraphNo);
    //             // If that combined label is not present already then add else join edge with pre existing label
    //             if(tempProj.count(temp[j].label) == 0){
    //               tempProj[myPoint.label].push_back(temp[j]);
    //             }else{
    //               tempProj[myPoint.label].push_back(tempProj[temp[j].label][0]);
    //             }
    //           }
    //         }
    //       }
    //     }
    //   }
    //   return tempProj;        
    // }

	//! A Member function.
    /*!
      \sa ThreeDToOrthographic()
      \param filename a string argument.
      \param flag3Dfile boolean character to tell the type of file (3D/2D).
    */
    void ThreeDToOrthographic(){
      TwoDGraph[0].clear();
      TwoDGraph[1].clear();
      TwoDGraph[2].clear();
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
              myPoint.coordinate[GraphNo] = 0;
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
      for (std::map<string, vector<point> >::iterator it=TwoDGraph[0].begin(); it!=TwoDGraph[0].end(); ++it){
        cout<<it->first+"->";
        for(int j=0;j<it->second.size();j++){
          cout<<it->second[j].label << " ";
        }
        cout<<endl;
      }
    }

    void print3D(){
      for (std::map<string, vector<point> >::iterator it=ThreeDGraph.begin(); it!=ThreeDGraph.end(); ++it){
        cout<<it->first+"->";
        for(int j=0;j<it->second.size();j++){
          cout<<it->second[j].label <<" ";
        }
        cout<<endl;
      }
    }
  };
#endif