/*! \file */
#include <bits/stdc++.h>
#include"structs.h"

typedef vector<float> Vec;
typedef vector<Vec> Mat;

using namespace std;

#ifndef _THREED_H
#define _THREED_H
#define INF 1000000
  Vec operator*(const Mat &a, const Vec &x);
  
  /*! \class ThreeDGraph_class
      \brief 3D behaviour class.

      This class has all the functionalities that a 3D object can possess
      in the software. It can be rotated, projected along some plane or
      can give its orthographic projections
  */
  class ThreeDGraph_class{
    private:
    static bool sortinrev(const pair<float,string> &a, const pair<float,string> &b);
    
    static bool sortbyfir(const pair<float,point> &a, const pair<float,point> &b);

    string GetLabel(struct point myPoint, int GraphNo);
    
    string GetLabel1(struct point myPoint, plane equationOfPlane);
    
    float DistanceFromPlane(point myPoint, plane equationOfPlane);

    point pointProj(point myPoint, plane equationOfPlane);

    bool present(vector<point> myList, string myLabel);

    Mat matrixMultiply(vector<vector<float>> mat1, vector<vector<float>> mat2);

    Mat createMatrix();

    void specificRotation(float angle, int choiceAxis, Vec Aline, bool GraphOrLine, bool ThreeDGraphOrPlaneProj);
    
    point getIntersect(edge a1, edge a2, int GraphNum, int lab);
    
    bool onSegment(point p, point q, point r, int GraphNum);

    int orientation(point p, point q, point r, int GraphNum);

    bool doIntersect(edge a1, edge a2, int GraphNum);

    bool isInside(vector<edge> face, point p, int GraphNum);

    void InitialiseLookupForHidden3D();

    void classifyHiddenEdge(int GraphNum);

    void FaceRecognition();
    // Access specifier
    public:

    ThreeDGraph_class();
  
    // Data Members
    map<string, vector<point> > ThreeDGraph; /*!< This is the 3D graph representation */
    map<string, vector<point> > IsometricGraph; /*!< This is the Isometric graph representation */
    map<string, vector<point> > TwoDGraph[3]; /*!< This is orthographic projections */
    map<string, vector<point> > PlaneProj; /*!< This is planar projection of 3D graph when requested */
    vector<string> listOfPoints;/*!< This is list of points available in 3D graph */
    vector<string> listOfPointsForOrthographic;/*!< This is list of points available for a particular orthographic projection */
    vector<string> listOfPointsForPlane;/*!< This is list of points available in planar Projection */
    map<string, vector<point> > ThreeDGraphForOrthographic; /*!< This is the 3D graph representation */
    map<string, vector<bool> > LookupForHidden2D[3]; /*!< This is orthographic projections hidden edges*/
    map<string, vector<bool> > LookupForHidden3D; /*!< This is the 3D graph representation of hidden edges*/
    vector< vector< edge>> FaceGraph; /*!< This is the graph containing faces and corresponding edges on them */
    Mat matrixAns;/*!< This is answer calculated after matrix computations */
    Mat matrix[3]; /*!< This is matrix for rotating about specific axis */
    Mat matrixA; /*!< This is matrix for rotating about specific axis */
    Mat matrixB; /*!< This is matrix for rotating about specific axis */
    edge tempLineAns;
    Vec tempLineVect;
    Vec tempLineVectForPlane;
    map<string, bool > NewOrOldvertex; /*!< This is the 3D graph representation of hidden edges*/
    map<string, bool > NewOrOldvertexForOrthographic; /*!< This is the 3D graph representation of hidden edges*/


    //! A Member function.
    /*!
      \sa Translation()
      Function to create listOfPoints for 3D graph
    */
    void GraphToList(bool ThreeDGraphOrPlaneProj);

    //! A Member function.
    /*!
      \sa Scaling()
      \param ScaleFactor to tell the factor of scale.
    */
    void Scaling(float ScaleFactor);

    //! A Member function.
    /*!
      \sa Translation()
      \param x to tell the amount of shift in x coordinate.
      \param y to tell the amount of shift in y coordinate.
      \param z to tell the amount of shift in z coordinate.
      \param GraphOrLine boolean character to tell whether rotation required is of line or graph.
    */
    void Translation(float x, float y, float z,edge line, bool GraphOrLine);
    //! A Member function.
    /*!
      \sa ModelRotation()
      \param filename a string argument.
      \param flag3Dfile boolean character to tell the type of file (3D/2D).
    */
    void ModelRotation(float angle, edge axis);

     //! A Member function.
    /*!
      \sa MeanNormalisation()
    */
    void MeanNormalisation();
    //! A Member function.
    /*!
      \sa Isometric()
    */
    void Isometric();

    //! A Member function.
    /*!
      \sa GraphToList()
      \param view to specify the viewing direction wrt origin.
      \param equationOfPlane this defines the plane on which projection has to be taken.
    */
    map<string, vector<point> > PlanarProjection(bool view, plane equationOfPlane);

    //! A Member function.
    /*!
      \sa ThreeDToOrthographic()
      \param filename a string argument.
      \param flag3Dfile boolean character to tell the type of file (3D/2D).
    */
    void ThreeDToOrthographic();
    //! A Member function.
    /*!
      returns true if edge = solid line else false
      \sa HiddenEdgeCheck()
      \param edge a string argument.
    */
    bool HiddenEdgeCheck(edge line);

    void print();

    void print3D();
  };
#endif
