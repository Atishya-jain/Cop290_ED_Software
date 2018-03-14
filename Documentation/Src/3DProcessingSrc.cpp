/*! \file */
#include <bits/stdc++.h>
#include "3DProcessingSrc.h"
#include "structs.h"

typedef vector<float> Vec;
typedef vector<Vec> Mat;
#define PI 3.14159265
#define ERRORMARGIN 0.0000001

using namespace std;
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
// class ThreeDGraph_class{
  // private:
  bool ThreeDGraph_class::sortinrev(const pair<float,string> &a, const pair<float,string> &b){
         return (a.first > b.first);
  }

  string ThreeDGraph_class::GetLabel(struct point myPoint, int GraphNo){
    long tempSize = listOfPoints.size();
    vector< pair<float,string>> ToSort;
    ToSort.push_back(make_pair(myPoint.coordinate[GraphNo],myPoint.label));
    for(int j = 0;j<tempSize;j++){
      point tempPoint = ThreeDGraph[listOfPoints[j]][0];
      if((abs((tempPoint.coordinate[(GraphNo+1)%3]) - (myPoint.coordinate[(GraphNo+1)%3]))<= ERRORMARGIN)&&(abs((tempPoint.coordinate[(GraphNo+2)%3]) - (myPoint.coordinate[(GraphNo+2)%3]))<= ERRORMARGIN)){
        if(abs((tempPoint.coordinate[(GraphNo)%3]) - (myPoint.coordinate[(GraphNo)%3]))>= ERRORMARGIN){
          ToSort.push_back(make_pair(tempPoint.coordinate[GraphNo],tempPoint.label));
        }
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
  
  string ThreeDGraph_class::GetLabel1(struct point myPoint, plane equationOfPlane){
    long tempSize = listOfPoints.size();
    vector< pair<float,string>> ToSort;
    float distance = DistanceFromPlane(myPoint, equationOfPlane);
    ToSort.push_back(make_pair(distance,myPoint.label));
    point modMyPoint = pointProj(myPoint, equationOfPlane);
    for(int j = 0;j<tempSize;j++){
      point tempPoint = ThreeDGraph[listOfPoints[j]][0];
      point modPoint = pointProj(tempPoint, equationOfPlane);
      float tempA = modPoint.coordinate[0];
      float tempB = modPoint.coordinate[1];
      float tempC = modPoint.coordinate[2];
      float tempMyA = modMyPoint.coordinate[0];
      float tempMyB = modMyPoint.coordinate[1];
      float tempMyC = modMyPoint.coordinate[2];
      if(tempPoint.label != myPoint.label){
        if((abs((tempA) - (tempMyA))<= ERRORMARGIN)&&(abs((tempB) - (tempMyB))<= ERRORMARGIN)&&(abs((tempC) - (tempMyC))<= ERRORMARGIN)){
          distance = DistanceFromPlane(tempPoint, equationOfPlane);
          ToSort.push_back(make_pair(distance,tempPoint.label));
        }
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

  float ThreeDGraph_class::DistanceFromPlane(point myPoint, plane equationOfPlane){
    float a = equationOfPlane.A;
    float b = equationOfPlane.B;
    float c = equationOfPlane.C;
    float num = (a*myPoint.coordinate[0]) + (b*myPoint.coordinate[1]) + (c*myPoint.coordinate[2]) + equationOfPlane.D; // Currently I have not taken Absolute value in numerator as I want it diection wise
    float denom = sqrt(a*a + b*b + c*c);
    return float(num/denom);
  }

  point ThreeDGraph_class::pointProj(point myPoint, plane equationOfPlane){
    point tempPoint;
    float tempA = equationOfPlane.A;
    float tempB = equationOfPlane.B;
    float tempC = equationOfPlane.C;
    float tempD = equationOfPlane.D;
    float t = (tempD - ((tempA)*(myPoint.coordinate[0])) - ((tempB)*(myPoint.coordinate[1])) - ((tempC)*(myPoint.coordinate[2])))/((tempA*tempA)+(tempB*tempB)+(tempC*tempC));
    tempPoint.coordinate[0] = myPoint.coordinate[0] + (tempA*t);
    tempPoint.coordinate[1] = myPoint.coordinate[1] + (tempB*t);
    tempPoint.coordinate[2] = myPoint.coordinate[2] + (tempC*t);
    return tempPoint;
  }

  bool ThreeDGraph_class::present(vector<point> myList, string myLabel){
    long leng = myList.size();
    for(int i = 0;i<leng;i++){
      if(myList[i].label == myLabel){
        return true;
      }
    }
    return false;
  }

  Mat ThreeDGraph_class::matrixMultiply(vector<vector<float>> mat1, vector<vector<float>> mat2){
    long row1,col1,row2,col2;
    row1 = mat1.size();
    row2 = mat2.size();
    col1 = mat1[0].size();
    col2 = mat2[0].size();
    return matrixAns;
  }

  Mat ThreeDGraph_class::createMatrix(){
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

  void ThreeDGraph_class::specificRotation(float angle, int choiceAxis, Vec Aline, bool GraphOrLine, bool ThreeDGraphOrPlaneProj){
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
      long totalPoints;
      if (ThreeDGraphOrPlaneProj)
      {
        totalPoints = listOfPoints.size();
      }else{
        totalPoints = listOfPointsForPlane.size();
      }
      for(int i = 0; i < totalPoints; ++i){
        vector<point> tempList;
        if(ThreeDGraphOrPlaneProj){
          tempList = ThreeDGraph[listOfPoints[i]];
        }else{
          tempList = PlaneProj[listOfPointsForPlane[i]];
        }
        long tempsiz = tempList.size();
        for (int j = 0; j < tempsiz; j++){
          Vec tempVec;
          tempVec.push_back(tempList[j].coordinate[0]);
          tempVec.push_back(tempList[j].coordinate[1]);
          tempVec.push_back(tempList[j].coordinate[2]);
          tempVec.push_back(1);
          tempVec = matrix[choiceAxis]*tempVec;
          if(ThreeDGraphOrPlaneProj){
            ThreeDGraph[listOfPoints[i]][j].coordinate[0] = tempVec[0];
            ThreeDGraph[listOfPoints[i]][j].coordinate[1] = tempVec[1];
            ThreeDGraph[listOfPoints[i]][j].coordinate[2] = tempVec[2];
          }else{
            PlaneProj[listOfPointsForPlane[i]][j].coordinate[0] = tempVec[0];
            PlaneProj[listOfPointsForPlane[i]][j].coordinate[1] = tempVec[1];
            PlaneProj[listOfPointsForPlane[i]][j].coordinate[2] = tempVec[2];
          }
        }
      }
    }else{
      if(ThreeDGraphOrPlaneProj){
        tempLineVect = matrix[choiceAxis]*Aline;
      }else{
        tempLineVectForPlane = matrix[choiceAxis]*Aline;
      }
    }
  }
  // Access specifier
  // public:

  ThreeDGraph_class::ThreeDGraph_class(){
    matrix[0] = createMatrix();
    matrix[1] = createMatrix();
    matrix[2] = createMatrix();
    matrixA = createMatrix();
    matrixB = createMatrix();
    matrixA[1][1] = cos(35.264*PI/180);
    matrixA[1][2] = sin(35.264*PI/180);
    matrixA[2][1] = -1*sin(35.264*PI/180);
    matrixA[1][1] = cos(35.264*PI/180);

    matrixB[0][0] = cos(45*PI/180);
    matrixB[2][0] = sin(45*PI/180);
    matrixB[0][2] = -1*sin(45*PI/180);
    matrixB[2][2] = cos(45*PI/180);
  }

  // Data Members
  // map<string, vector<point> > ThreeDGraph; /*!< This is the 3D graph representation */
  // map<string, vector<point> > IsometricGraph; /*!< This is the Isometric graph representation */
  // map<string, vector<point> > TwoDGraph[3]; /*!< This is orthographic projections */
  // map<string, vector<point> > PlaneProj; /*!< This is planar projection of 3D graph when requested */
  // vector<string> listOfPoints;/*!< This is list of points available in 3D graph */
  // vector<string> listOfPointsForPlane;/*!< This is list of points available in planar Projection */
  // Mat matrixAns;/*!< This is answer calculated after matrix computations */
  // Mat matrix[3]; /*!< This is matrix for rotating about specific axis */
  // Mat matrixA; /*!< This is matrix for rotating about specific axis */
  // Mat matrixB; /*!< This is matrix for rotating about specific axis */
  // edge tempLineAns;
  // Vec tempLineVect;
  // Vec tempLineVectForPlane;

  //! A Member function.
  /*!
    \sa Translation()
    Function to create listOfPoints for 3D graph
  */
  void ThreeDGraph_class::GraphToList(bool ThreeDGraphOrPlaneProj){
    if(ThreeDGraphOrPlaneProj){
      listOfPoints.clear();
      for (std::map<string, vector<point> >::iterator it=ThreeDGraph.begin(); it!=ThreeDGraph.end(); ++it){
        listOfPoints.push_back(it->first);
      }
    }else{
      listOfPointsForPlane.clear();
      for (std::map<string, vector<point> >::iterator it=PlaneProj.begin(); it!=PlaneProj.end(); ++it){
        listOfPointsForPlane.push_back(it->first);
      }
    }
  }

  //! A Member function.
  /*!
    \sa Scaling()
    \param ScaleFactor to tell the factor of scale.
  */
  void ThreeDGraph_class::Scaling(float ScaleFactor){
    long siz = listOfPoints.size();
    for(int i = 0; i<siz; i++){
      vector<point> temp = ThreeDGraph[listOfPoints[i]];
      long tempsiz = temp.size();
      for (int j = 0; j < tempsiz; j++)
      {
        ThreeDGraph[listOfPoints[i]][j].coordinate[0] = temp[j].coordinate[0]*ScaleFactor;
        ThreeDGraph[listOfPoints[i]][j].coordinate[1] = temp[j].coordinate[1]*ScaleFactor;
        ThreeDGraph[listOfPoints[i]][j].coordinate[2] = temp[j].coordinate[2]*ScaleFactor;
      }
    }
  }

  //! A Member function.
  /*!
    \sa Translation()
    \param x to tell the amount of shift in x coordinate.
    \param y to tell the amount of shift in y coordinate.
    \param z to tell the amount of shift in z coordinate.
    \param GraphOrLine boolean character to tell whether rotation required is of line or graph.
  */
  void ThreeDGraph_class::Translation(float x, float y, float z,edge line, bool GraphOrLine){
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
  void ThreeDGraph_class::ModelRotation(float angle, edge axis){
    angle = angle*(PI/180);
    Translation(axis.p1.coordinate[0], axis.p1.coordinate[1], axis.p1.coordinate[2], axis, false);
    Translation(axis.p1.coordinate[0], axis.p1.coordinate[1], axis.p1.coordinate[2], axis, true);
    tempLineVect.clear();
    tempLineVect.push_back(tempLineAns.p2.coordinate[0]);
    tempLineVect.push_back(tempLineAns.p2.coordinate[1]);
    tempLineVect.push_back(tempLineAns.p2.coordinate[2]);
    tempLineVect.push_back(1);

    // calculate angleX
    float angleX;
    if(tempLineVect[2] != 0){
      angleX = (atan(tempLineVect[1]/tempLineVect[2])); // angleX = y/z
    }else{
      angleX = PI/2;
    }
    specificRotation(angleX,0,tempLineVect,false,true);
    specificRotation(angleX,0,tempLineVect,true,true);
    
    // calculate angleY
    float angleY;
    if(tempLineVect[2] != 0){
      angleY = (atan(tempLineVect[0]/tempLineVect[2])); // angleY = x/z
    }else{
      angleY = -1*PI/2;
    }
    specificRotation(angleY,1,tempLineVect,false,true);
    specificRotation(angleY,1,tempLineVect,true,true);

    specificRotation(angle,2,tempLineVect,true,true);
    // Inverse Transformations
    tempLineVect.clear();
    specificRotation(-1*angleY,1,tempLineVect,true,true);
    specificRotation(-1*angleX,0,tempLineVect,true,true);
    Translation(-1*axis.p1.coordinate[0], -1*axis.p1.coordinate[1], -1*axis.p1.coordinate[2], tempLineAns, true);
  }

   //! A Member function.
  /*!
    \sa MeanNormalisation()
  */
  void ThreeDGraph_class::MeanNormalisation(){
    long siz = listOfPoints.size();
    float meanx = 0;
    float meany = 0;
    float meanz = 0;
    float maxX = -100000000, minX = 100000000;
    float maxY = -100000000, minY = 100000000;
    float maxZ = -100000000, minZ = 100000000;
    for(int i = 0; i<siz; i++){
      point temp = ThreeDGraph[listOfPoints[i]][0];
      meanx += temp.coordinate[0];
      meany += temp.coordinate[1];
      meanz += temp.coordinate[2];
      if(temp.coordinate[0] > maxX){
        maxX = temp.coordinate[0];
      }
      if(temp.coordinate[1] > maxY){
        maxY = temp.coordinate[1];
      }
      if(temp.coordinate[2] > maxZ){
        maxZ = temp.coordinate[2];
      }
      if(temp.coordinate[0] < minX){
        minX = temp.coordinate[0];
      }
      if(temp.coordinate[1] < minY){
        minY = temp.coordinate[1];
      }
      if(temp.coordinate[2] < minZ){
        minZ = temp.coordinate[2];
      }
    }
    float MaxDist = -10000000;
    if((maxX - minX) > (maxY - minY)){
      if((maxX - minX) > (maxZ - minZ)){
        MaxDist = (maxX - minX);
      }else{
        MaxDist = (maxZ - minZ);
      }
    }else if((maxY - minY) > (maxZ - minZ)){
        MaxDist = (maxY - minY);
    }else{
        MaxDist = (maxZ - minZ);
    }
    float factor = 200/MaxDist;
    meanx = float(meanx/siz);
    meany = float(meany/siz);
    meanz = float(meanz/siz);
    for(int i = 0; i<siz; i++){
      vector<point> temp = ThreeDGraph[listOfPoints[i]];
      long tempsiz = temp.size();
      for (int j = 0; j < tempsiz; j++)
      {
        ThreeDGraph[listOfPoints[i]][j].coordinate[0] = temp[j].coordinate[0] - meanx;
        ThreeDGraph[listOfPoints[i]][j].coordinate[1] = temp[j].coordinate[1] - meany;
        ThreeDGraph[listOfPoints[i]][j].coordinate[2] = temp[j].coordinate[2] - meanz;
      }
    }
    Scaling(factor);
  }

  //! A Member function.
  /*!
    \sa Isometric()
  */
  void ThreeDGraph_class::Isometric(){
    long totalPoints;
    IsometricGraph = ThreeDGraph;
    totalPoints = listOfPoints.size();
    for(int i = 0; i < totalPoints; ++i){
      vector<point> tempList;
      tempList = IsometricGraph[listOfPoints[i]];
      long tempsiz = tempList.size();
      for (int j = 0; j < tempsiz; j++){
        Vec tempVec;
        tempVec.push_back(tempList[j].coordinate[0]);
        tempVec.push_back(tempList[j].coordinate[1]);
        tempVec.push_back(tempList[j].coordinate[2]);
        tempVec.push_back(1);
        tempVec = matrixB*tempVec;
        tempVec = matrixA*tempVec;
        IsometricGraph[listOfPoints[i]][j].coordinate[0] = tempVec[0];
        IsometricGraph[listOfPoints[i]][j].coordinate[1] = tempVec[1];
        IsometricGraph[listOfPoints[i]][j].coordinate[2] = tempVec[2];
      }
    }
  }

  //! A Member function.
  /*!
    \sa GraphToList()
    \param view to specify the viewing direction wrt origin.
    \param equationOfPlane this defines the plane on which projection has to be taken.
  */
  map<string, vector<point> > ThreeDGraph_class::PlanarProjection(bool view, plane equationOfPlane){
    map<string, vector<point> > tempProj;
    
    long siz = listOfPoints.size();
    for(int i = 0; i<siz; i++){
      vector<point> temp = ThreeDGraph[listOfPoints[i]];
      long tempsiz = temp.size();
      
      struct point myPoint = temp[0];
      // if there is any other point in the list
      if(tempsiz > 1){
      
        // Get combined Label
        string tempLabel = GetLabel1(myPoint, equationOfPlane);
        // cout << tempLabel << " HIHI" << endl;
        // If that label is not present already
        if(tempProj.count(tempLabel) == 0){
          // change my label
          point modPoint = pointProj(myPoint, equationOfPlane);
          myPoint.coordinate[0] = modPoint.coordinate[0];
          myPoint.coordinate[1] = modPoint.coordinate[1];
          myPoint.coordinate[2] = modPoint.coordinate[2];
          myPoint.label = tempLabel;
          // Insert me in graph first
          tempProj[myPoint.label].push_back(myPoint);
          // Iterate over my neighbours
          for(int j = 1;j<tempsiz;j++){
            // Project coordinate on plane
            modPoint = pointProj(temp[j],equationOfPlane);
            float tempA = modPoint.coordinate[0];
            float tempB = modPoint.coordinate[1];
            float tempC = modPoint.coordinate[2];

            // for All my non overlapping neighbours
            if((abs(tempA - (myPoint.coordinate[0]))>= ERRORMARGIN)||(abs(tempB - (myPoint.coordinate[1]))>= ERRORMARGIN)||(abs(tempC - (myPoint.coordinate[2]))>= ERRORMARGIN)){
              
              // Check with what all points do they overlapp and get label
              temp[j].label = GetLabel1(temp[j], equationOfPlane);
              // If that combined label is not present already then add else join edge with pre existing label
              if(tempProj.count(temp[j].label) == 0){
                temp[j].coordinate[0] = tempA;
                temp[j].coordinate[1] = tempB;
                temp[j].coordinate[2] = tempC;
                if(!present(tempProj[myPoint.label], temp[j].label)){
                  tempProj[myPoint.label].push_back(temp[j]);
                }
              }else{
                if(!present(tempProj[myPoint.label], temp[j].label)){
                  tempProj[myPoint.label].push_back(tempProj[temp[j].label][0]);
                }
              }
            }
          }
        }
      }
    }
    tempLineVectForPlane.clear();
    tempLineVectForPlane.push_back(equationOfPlane.A);
    tempLineVectForPlane.push_back(equationOfPlane.B);
    tempLineVectForPlane.push_back(equationOfPlane.C);
    tempLineVectForPlane.push_back(1);

    PlaneProj = tempProj;
    print();
    GraphToList(false);

    // calculate angleX
    float angleX = (atan(equationOfPlane.B/equationOfPlane.C)); // angleX = y/z
    specificRotation(angleX,0,tempLineVectForPlane,false,false);
    specificRotation(angleX,0,tempLineVectForPlane,true,false);
    
    // calculate angleY
    float angleY = -1*(atan(tempLineVectForPlane[0]/tempLineVectForPlane[2])); // angleY = x/z
    specificRotation(angleY,1,tempLineVectForPlane,true,false);

    tempProj = PlaneProj;
    return tempProj;
  }

  //! A Member function.
  /*!
    \sa ThreeDToOrthographic()
    \param filename a string argument.
    \param flag3Dfile boolean character to tell the type of file (3D/2D).
  */
  void ThreeDGraph_class::ThreeDToOrthographic(){
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
              
              // for All my non overlapping neighbours
              if((abs(((tempPoints[j].coordinate[(GraphNo+1)%3]) - (myPoint.coordinate[(GraphNo+1)%3])))>= ERRORMARGIN)||(abs(((tempPoints[j].coordinate[(GraphNo+2)%3]) - (myPoint.coordinate[(GraphNo+2)%3])))>= ERRORMARGIN)){
                
                // Check with what all points do they overlapp and get label
                tempPoints[j].label = GetLabel(tempPoints[j], GraphNo);
                // Reduce coordinate to 0
                tempPoints[j].coordinate[GraphNo] = 0;

                // If that combined label is not present already then add else join edge with pre existing label
                if(TwoDGraph[GraphNo].count(tempPoints[j].label) == 0){
                  if(!present(TwoDGraph[GraphNo][myPoint.label], tempPoints[j].label)){
                    TwoDGraph[GraphNo][myPoint.label].push_back(tempPoints[j]);
                  }
                }else{
                  if(!present(TwoDGraph[GraphNo][myPoint.label], tempPoints[j].label)){
                    TwoDGraph[GraphNo][myPoint.label].push_back(TwoDGraph[GraphNo][tempPoints[j].label][0]);
                  }
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
  bool ThreeDGraph_class::HiddenEdgeCheck(edge line){
    /* returns true if edge = solid line else false*/
    return true;
  }

  void ThreeDGraph_class::print(){
    for (std::map<string, vector<point> >::iterator it=TwoDGraph[0].begin(); it!=TwoDGraph[0].end(); ++it){
      cout<< it->first << " -> " << it->second[0].coordinate[0] << " " << it->second[0].coordinate[1] << " " << it->second[0].coordinate[2] << "->";
      cout<<endl;
    }
  }

  void ThreeDGraph_class::print3D(){
    for (std::map<string, vector<point> >::iterator it=ThreeDGraph.begin(); it!=ThreeDGraph.end(); ++it){
      cout<<it->first+"->";
      for(int j=0;j<it->second.size();j++){
        cout<<it->second[j].print();
      }
      cout<<endl;
    }
  }
// };
