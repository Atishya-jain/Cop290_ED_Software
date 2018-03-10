/*! \file */
#include <bits/stdc++.h>
#include "Graphs.cpp"
using namespace std;

/*! \class Input
    \brief Input class.

    This class contains the methods to input content from a file or drawing etc..
*/
class Input
{

  // Access specifier
  public:

  // Data Members
  string filename; /*!< This is the filename*/
  bool file = false; /*!< This is flag for checking interactive input or file input from the user*/ 
  bool ThreeDfile = false; /*!< This is flag for checking whether file has 3D or 2D input*/ 
  int TwoDFileCount = 0; /*!< Count of 2D objects as there has to be 3 projections for our software to work on*/
  map<string, vector<point> > TwoDGraph[3]; /*!< This is the array of orthographic projections */
  map<string, vector<point> > ThreeDGraph;  /*!< This is the 3D graph */
   
  /*!
     Will prompt the user for filename or through GUI
  */
  void getFileName(){
    cout << "Enter File Name: ";
    cin >> filename;
    cout<<endl;
    cout << "Enter 1 if input is 3D or else enter 2: ";
    int x;
    cin >> x;
    if(x==1) 
      ThreeDfile = true;
    else 
      ThreeDfile = false;
  }

  /*!
    \sa getOptions()
     Will display the main page of GUI with options
  */
  void displayOptions(){
    /*
        Display the options like to input in a file or draw
    */
    getOptions();
  }

  /*!
     Will set the options/settings user desires
    \param graph::ThreeDorTwoD To check if 3D model file is input or a 2D model file.
    \param file To check if file is input or an intercative input.
  */
  void getOptions(){
    /*
        Display the options
        cin >> something
    */
    if(/*Some Condition*/true){  //one idea is that, this would be set to false, when the file hadn't already existed. Like you have file dialog boxes where they say, "this file doesn't already exist. Do you want to create one?""
      file = true;
    }else{
      file = false;
    }

    if(/*Some Condition*/ true){
      // graph::ThreeDOrTwoD = true;
    }else{
      // graph::ThreeDOrTwoD = false;
    }
  }

  /*!
    \param filename a string argument.
    \param ThreeDorTwoD boolean character to tell the type of file (3D/2D).
  */
  void ReadFile(){
    string line;
      ifstream myfile (filename);
      if(myfile.is_open()){
        if(ThreeDfile){
          string nn;
          getline(myfile,nn);
          int n = stoi(nn);
          for(int i=0;i<n;i++){
            getline(myfile,nn);
            string pre = nn.substr(0,nn.find(" ->")-1);
            string post = nn.substr(nn.find(" ->")+3,nn.length()-nn.find(" ->")+3);

            vector<string> parts;
            //code to split the key into keys
            string s = pre;
            string delimiter = ",";
            size_t pos = 0;
            string token;
            while ((pos = s.find(delimiter)) != std::string::npos) {
                token = s.substr(0, pos);
                parts.push_back(token);
                s.erase(0, pos + delimiter.length());
            }
            parts.push_back(s);

            point tmp;
            tmp.label = parts[0];
            tmp.coordinates[0]=stof(parts[1]);
            tmp.coordinates[1]=stof(parts[2]);            
            tmp.coordinates[2]=stof(parts[3]);
            vector<point> tmp2;
            tmp2.push_back(tmp1);
            ThreeDgraph[parts[0]]=tmp2;

            //code to split the key into keys
            vector<string> elems;
            s = post;
            delimiter = " ";
            pos = 0;
            token;
            while ((pos = s.find(delimiter)) != std::string::npos) {
              token = s.substr(0, pos);
              elems.push_back(token);
              s.erase(0, pos + delimiter.length());
            }
            elems.push_back(s);   
            for(int j=0;j<elems.length();j++){
              vector<string> newParts;
              //code to split the key into keys
              string s2 = elems[j];
              string delimiter2 = ",";
              size_t pos2 = 0;
              string token2;
              while ((pos2 = s2.find(delimiter2)) != std::string::npos) {
                  token2 = s2.substr(0, pos2);
                  newParts.push_back(token2);
                  s2.erase(0, pos2 + delimiter2.length());
              }
              newParts.push_back(s2);

              tmp.label = newParts[0];
              tmp.coordinates[0]=stof(newParts[1]);
              tmp.coordinates[1]=stof(newParts[2]);            
              tmp.coordinates[2]=stof(newParts[3]);
              ThreeDgraph[parts[0]].push_back(tmp);
            }       


          }
        }
      }else{
        cout<<"Unable to open file"<<endl;
      }
    
    // std::vector<char> v;
    // if (FILE *fp = fopen("filename", "r"))
    // {
    //   char buf[1024];
    //   while (size_t len = fread(buf, 1, sizeof(buf), fp))
    //     v.insert(v.end(), buf, buf + len);
    //   fclose(fp);
    // }
    // To be included after deciding input pattern
    // if(graph::ThreeDorTwoD){
    //   graph::ThreeDgraph = v;
    // }else{
    //   graph::TwoDGraphs.[TwoDFileCount] = v;
    //   TwoDFileCount++;
    //   if(TwoDFileCount < 3){
    //     getFileName();
    //   }
    // }
  }

};
