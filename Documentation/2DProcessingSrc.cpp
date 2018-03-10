/*! \file */
#include <bits/stdc++.h>
#include "structs.cpp"
using namespace std;

#ifndef _TWOD_H
#define _TWOD_H

  /*! \class TwoDGraph_class
      \brief 2D behaviour class.

      This class has all the functionalities that a 2D object can possess
      in the software. It can be rotated and converted into isometric from 2 orthographic projections
      along some plane.  
  */
  class TwoDGraph_class{
      // Access specifier
      public:
      // Data Members
      map<string, vector<point> > TwoDGraph[3];/*!< This is the orthographic projections */
      // static vector<vector<point> > TwoDGraph1; /*!< This is an orthographic projection*/ 
      // static vector<vector<point> > TwoDGraph2; /*!< This is an orthographic projection */
      map<string, vector<point> > ThreeDGraph; /*!< This is the 3D graph representation */
      map<string,vector<vector<edge> > > faceSet; /*!<This consists of the faces. It would be a dictionary with face equation as keys as values as those edges which lie in that plane*/
      // Constructor
      // TwoDGraph_class(vector<vector<point> > graph1, vector<vector<point> > graph2, vector<vector<point> > graph3){
      //   TwoDGraphMain[0] = graph1;
      //   TwoDGraphMain[1] = graph2;
      //   TwoDGraphMain[2] = graph3;
      //   // ThreeDGraph = null;
      //   // faceSet = null;
      // }

  	//! A Member function.
      /*!
        \sa TwoDtoThreeD()
        \param filename a string argument.
        \param flag3Dfile boolean character to tell the type of file (3D/2D).
      */

      void TwoDtoThreeD(){
        //write the code to convert 2d to 3d here
        map<string, point> pointsList;
        //getting the list of all points
        for(int i=0;i<3;i++){
          for(std::map<string, vector<point> >::iterator it=TwoDGraph[i].begin(); it!=TwoDGraph[i].end(); ++it){
            string key=it->first;
            vector<string> keys;

            //code to split the key into keys
            string s = key;
            string delimiter = "^";
            size_t pos = 0;
            string token;
            while ((pos = s.find(delimiter)) != std::string::npos) {
                token = s.substr(0, pos);
                // cout << token << endl;
                keys.push_back(token);
                s.erase(0, pos + delimiter.length());
            }
            keys.push_back(s);
            // cout << s << endl;
            for(int j=0;j<keys.size();j++){
              if(i==0){
                pointsList[keys[j]]=it->second[0];
                pointsList[keys[j]].label=keys[j];
              }
              else if(i==1){
                if(pointsList[keys[j]].coordinate[2]!=it->second[0].coordinate[2])
                  throw invalid_argument( "error in file" );
                else
                  pointsList[keys[j]].coordinate[0]=it->second[0].coordinate[0];
              }
              else{
                if((pointsList[keys[j]].coordinate[0]!=it->second[0].coordinate[0])||(pointsList[keys[j]].coordinate[1]!=it->second[0].coordinate[1]))
                  throw invalid_argument( "error in file" );
              }
            }
        }
      }
      //PRINTING THE LIST OF POINTS WORKING
      // for(std::map<string, point>::iterator it=pointsList.begin(); it!=pointsList.end(); ++it){
          // cout<<it->second.label<<endl;
      // }
      //
      for(int i=0;i<3;i++){
        for(std::map<string, vector<point> >::iterator it=TwoDGraph[i].begin(); it!=TwoDGraph[i].end(); ++it){
          string key=it->first;
          vector<string> keys;

          //code to split the key into keys
          string s = key;
          string delimiter = "^";
          size_t pos = 0;
          string token;
          while ((pos = s.find(delimiter)) != std::string::npos) {
              token = s.substr(0, pos);
              // cout << token << endl;
              keys.push_back(token);
              s.erase(0, pos + delimiter.length());
          }
          keys.push_back(s);
          // cout << s << endl;
          for(int j=0;j<keys.size();j++){
            if(i==0){
              vector<point> tmp;
              ThreeDGraph[keys[j]]=tmp;
            }
            ThreeDGraph[keys[j]].push_back(pointsList[keys[j]]);
            for(int k=0;k<keys.size();k++){
              if(k==j) continue;
              ThreeDGraph[keys[j]].push_back(pointsList[keys[k]]);
            }
            for(int k=1;k<it->second.size();k++){
                vector<string> sepKeys;

                //code to split the key into keys
                string s2 = it->second[k].label;
                string delimiter2 = "^";
                size_t pos2 = 0;
                string token2;
                while ((pos2 = s2.find(delimiter2)) != std::string::npos) {
                    token2 = s2.substr(0, pos2);
                    // cout << token2 << endl;
                    sepKeys.push_back(token2);
                    s2.erase(0, pos2 + delimiter2.length());
                }
                sepKeys.push_back(s2);
                // cout<<s2<<endl;
                for(int l=0;l<sepKeys.size();l++){
                  // cout<<keys[j]<<"#"<<pointsList[sepKeys[l]].label<<endl;
                  ThreeDGraph[keys[j]].push_back(pointsList[sepKeys[l]]);
                }
            }
                // cout<<"---"<<endl;

          }

       } 
      }
      for(std::map<string, vector<point> >::iterator it=ThreeDGraph.begin(); it!=ThreeDGraph.end(); ++it){
        vector<point> tmp;
        // for(int j=0;j<it->second.size();j++){
          // cout<<it->second[j].label<<"*";
        // }
        for(int i=0;i<it->second.size();i++){
          int ct=0;
          for(int j=i+1;j<it->second.size();j++)
            if (it->second[j]==it->second[i]) ct++;
          if(ct==2){
            // cout<<it->first<<"*"<<endl;
            tmp.push_back(it->second[i]);
          }
        }
        ThreeDGraph[it->first]=tmp;
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


  	//! A Member function.
      /*!
        \sa faceRecognition()
        \param filename a string argument.
        \param flag3Dfile boolean character to tell the type of file (3D/2D).
      */
      void faceRecognition(){
        // set up the faceset here
      }    

  	//! A Member function.
      /*!
        \sa HiddenEdgeTest()
        \param filename a string argument.
        \param flag3Dfile boolean character to tell the type of file (3D/2D).
      */
      void HiddenEdgeTest(){
        //use the face set to detect false hidden edges and remove them if found
      }

  	//! A Member function.
      /*!
        \sa FalseNodeDetect()
        \param filename a string argument.
        \param flag3Dfile boolean character to tell the type of file (3D/2D).
      */
      void FalseNodeDetect(){
        //delete all the false nodes
      }
  };
#endif