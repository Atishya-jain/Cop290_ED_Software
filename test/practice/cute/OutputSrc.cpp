/*! \file */
#include <bits/stdc++.h>
#include "Graphs.cpp"
#include <QtCore>
#include <QtGui>

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
      map<string, vector<point> > PlaneProj;
      map<string, vector<point> > TwoDGraphTemp[3]; 
      map<string, vector<point> > PlaneProjTemp; 
  	  
      //! A Member function.
      /*!
        \sa RenderOutput3D()
        \param filename a string argument.
        \param flag3Dfile boolean character to tell the type of file (3D/2D).
      */
      QPicture RenderOutput3D(QPicture pi){
        QPainter p(&pi);
        p.setRenderHint(QPainter::Antialiasing);
        p.setPen(QPen(Qt::black, 5, Qt::SolidLine, Qt::RoundCap));
        // p.drawLine(0, 0, 0, 600);
        // p.drawLine(0, 600, 600, 600);
        // p.drawLine(600, 600, 600, 0);
        // p.drawLine(600, 0, 0, 0);

        for (map<string, vector<point> >::iterator it=PlaneProj.begin(); it!=PlaneProj.end(); ++it){
          long len = it->second.size();
          for(int j=0;j<len;j++){
            point tempPoint = it->second[j];
            tempPoint.coordinate[0] = 50 + it->second[j].coordinate[0];
            tempPoint.coordinate[1] = 50 + it->second[j].coordinate[1];
            PlaneProjTemp[it->first].push_back(tempPoint);
          }
        }

        p.setPen(QPen(Qt::black, 2.5, Qt::SolidLine, Qt::RoundCap));

        for (map<string, vector<point> >::iterator it=PlaneProjTemp.begin(); it!=PlaneProjTemp.end(); ++it){
          long len = it->second.size();
          point MainPoint = it->second[0];
          for(int j=1;j<len;j++){
            p.drawLine(MainPoint.coordinate[0], MainPoint.coordinate[1], it->second[j].coordinate[0], it->second[j].coordinate[1]);
          }
        }

        p.end(); // Don't forget this line!
        return pi;
      }

   
  	  //! A Member function.
      /*!
        \sa RenderOutput2D()
        \param filename a string argument.
        \param flag3Dfile boolean character to tell the type of file (3D/2D).
      */
      QPicture RenderOutput2D(QPicture pi){
        TwoDGraphTemp[0].clear();
        TwoDGraphTemp[1].clear();
        TwoDGraphTemp[2].clear();
        float startCoordinate = -300;
        float centre = startCoordinate/2;
        float negCentre = -1*centre;
        // int TopMargin = 50;
        // int BottomMargin = 50;
        // int LeftMargin = 50;
        // int RightMargin = 50;
        // int SpaceBetween = 100;
        // int TotalHeight = 600;
        // int TotalWidth = 600;
        // int ObjectSize = 200;
        // int MidH = TotalHeight/2;
        // int MidW = TotalWidth/2;
 
        QPainter p(&pi);
        p.setRenderHint(QPainter::Antialiasing);
        p.setPen(QPen(Qt::black, 5, Qt::SolidLine, Qt::RoundCap));
        p.drawLine(-300, -300, -300, 300);
        p.drawLine(-300, 300, 300, 300);
        p.drawLine(300, 300, 300, -300);
        p.drawLine(300, -300, -300, -300);
 
        for (map<string, vector<point> >::iterator it=TwoDGraph[0].begin(); it!=TwoDGraph[0].end(); ++it){
          long len = it->second.size();
          point tempPoint = it->second[0];
          tempPoint.coordinate[1] = negCentre + it->second[0].coordinate[1];
          tempPoint.coordinate[0] = negCentre +it->second[0].coordinate[2];
          TwoDGraphTemp[0][it->first].push_back(tempPoint);
          for(int j=1;j<len;j++){
            tempPoint = it->second[j];
            tempPoint.coordinate[0] = negCentre + it->second[j].coordinate[2];
            tempPoint.coordinate[1] = negCentre + it->second[j].coordinate[1];
            TwoDGraphTemp[0][it->first].push_back(tempPoint);
          }
        }
 
        for (map<string, vector<point> >::iterator it=TwoDGraph[1].begin(); it!=TwoDGraph[1].end(); ++it){
          long len = it->second.size();
          point tempPoint = it->second[0];
          tempPoint.coordinate[1] = centre +it->second[0].coordinate[0];
          tempPoint.coordinate[0] = negCentre + it->second[0].coordinate[2];
          TwoDGraphTemp[1][it->first].push_back(tempPoint);
          for(int j=1;j<len;j++){
            // cout << "Early = " << it->first << " -> " << it->second[j].coordinate[0] << " " << it->second[j].coordinate[1] << " " << it->second[j].coordinate[2] << endl;
            tempPoint = it->second[j];
            tempPoint.coordinate[0] = negCentre + it->second[j].coordinate[2];
            tempPoint.coordinate[1] = centre + it->second[j].coordinate[0];
            TwoDGraphTemp[1][it->first].push_back(tempPoint);
            // cout << it->first << " -> " << it->second[j].coordinate[0] << " " << it->second[j].coordinate[1] << endl;
          }
        }
 
        for (map<string, vector<point> >::iterator it=TwoDGraph[2].begin(); it!=TwoDGraph[2].end(); ++it){
          long len = it->second.size();
          point tempPoint = it->second[0];
          tempPoint.coordinate[0] = centre + it->second[0].coordinate[0];
          tempPoint.coordinate[1] = negCentre + it->second[0].coordinate[1];
          TwoDGraphTemp[2][it->first].push_back(tempPoint);
          for(int j=1;j<len;j++){
            tempPoint = it->second[j];
            tempPoint.coordinate[0] = centre + it->second[j].coordinate[0];
            tempPoint.coordinate[1] = negCentre + it->second[j].coordinate[1];
            TwoDGraphTemp[2][it->first].push_back(tempPoint);
          }
        }
 
        p.setPen(QPen(Qt::black, 2.5, Qt::SolidLine, Qt::RoundCap));
        
        for(int i = 0;i<3;i++){
          for (map<string, vector<point> >::iterator it=TwoDGraphTemp[i].begin(); it!=TwoDGraphTemp[i].end(); ++it){
            long len = it->second.size();
            point MainPoint = it->second[0];
            for(int j=1;j<len;j++){
              p.drawLine(MainPoint.coordinate[0], MainPoint.coordinate[1], it->second[j].coordinate[0], it->second[j].coordinate[1]);
            }
          }
        }

        p.drawLine(0,-300,0,300);
        p.drawLine(-300,0,300,0);
 
        p.end();
        return pi;      
      }

  	//! A Member function.
      /*!
        \sa saveToFile3D()
        \param filename a string argument.
        \param flag3Dfile boolean character to tell the type of file (3D/2D).
      */
      void saveToFile3D(string fname){
        ofstream myfile;
        myfile.open(fname);
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
      void saveToFile2D(string fname){
        ofstream myfile;
        myfile.open(fname);
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
