/*! \file */
#include "cop/mainwindow.h"
#include <QApplication>
#include "bits/stdc++.h"
#include <QtCore>
#include <QtGui>
#include <QApplication>
#include <QLabel>
#include "../Include/structs.h"
#include "../Include/2DProcessingSrc.h"
#include "../Include/3DProcessingSrc.h"
#include "../Include/InputSrc.h"
#include "../Include/OutputSrc.h"
#include "../Include/InteractiveSrc.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "ui_dialog.h"
#include "interactiveinput.h"
#include "ui_interactiveinput.h"
#include <QFileDialog>
#include <QDir>
using namespace std;
TwoDGraph_class input_2d;
ThreeDGraph_class input_3d;
Interactive_editor I1;
Output O1;
Output O2;
bool isFile3d;
bool isInputFile;
string filename;
/*! \fn main()*/
void MainWindow::on_buttonUP_clicked()
{
        //MODEL ROTATION and ISOMETRIC
        edge tmp;
        point tmp2;
         tmp2.coordinate[0]=0;
         tmp2.coordinate[1]=0;
         tmp2.coordinate[2]=0;
        tmp.p1=tmp2;
         point tmp3;
         tmp3.coordinate[0]=5;
         tmp3.coordinate[1]=0;
         tmp3.coordinate[2]=0;
         tmp.p2=tmp3;
         input_3d.ModelRotation(10,tmp);
         // input_3d.MeanNormalisation();
         input_3d.ThreeDToOrthographic();
         input_3d.Isometric();
         O1.PlaneProj = input_3d.IsometricGraph;
         std::copy(std::begin(input_3d.TwoDGraph), std::end(input_3d.TwoDGraph), std::begin(O1.TwoDGraph));
         QPicture pi;
         pi = O1.RenderOutput3D(pi);
         ui->isometric->setPicture(pi);
         ui->isometric->show();

         //Orthographic projection
         // input_3d.MeanNormalisation();
         input_3d.ThreeDToOrthographic();
         std::copy(std::begin(input_3d.TwoDGraph), std::end(input_3d.TwoDGraph), std::begin(O1.TwoDGraph));
         QPicture pi4;
         pi4 = O1.RenderOutput2D(pi4);
         ui->orthographic->setPicture(pi4);
         ui->orthographic->show();
}
void MainWindow::on_buttonLEFT_clicked()
{
        //MODEL ROTATION and ISOMETRIC
        edge tmp;
        point tmp2;
         tmp2.coordinate[0]=0;
         tmp2.coordinate[1]=0;
         tmp2.coordinate[2]=0;
        tmp.p1=tmp2;
         point tmp3;
         tmp3.coordinate[0]=0;
         tmp3.coordinate[1]=5;
         tmp3.coordinate[2]=0;
         tmp.p2=tmp3;
         input_3d.ModelRotation(10,tmp);
         // input_3d.MeanNormalisation();
         input_3d.ThreeDToOrthographic();
         input_3d.Isometric();
         O1.PlaneProj = input_3d.IsometricGraph;
         std::copy(std::begin(input_3d.TwoDGraph), std::end(input_3d.TwoDGraph), std::begin(O1.TwoDGraph));
         QPicture pi;
         pi = O1.RenderOutput3D(pi);
         ui->isometric->setPicture(pi);
         ui->isometric->show();

         //Orthographic projection
         // input_3d.MeanNormalisation();
         input_3d.ThreeDToOrthographic();
         std::copy(std::begin(input_3d.TwoDGraph), std::end(input_3d.TwoDGraph), std::begin(O1.TwoDGraph));
         QPicture pi4;
         pi4 = O1.RenderOutput2D(pi4);
         ui->orthographic->setPicture(pi4);
         ui->orthographic->show();
}
void MainWindow::on_buttonRIGHT_clicked()
{
        //MODEL ROTATION and ISOMETRIC
        edge tmp;
        point tmp2;
         tmp2.coordinate[0]=0;
         tmp2.coordinate[1]=0;
         tmp2.coordinate[2]=0;
        tmp.p1=tmp2;
         point tmp3;
         tmp3.coordinate[0]=0;
         tmp3.coordinate[1]=5;
         tmp3.coordinate[2]=0;
         tmp.p2=tmp3;
         input_3d.ModelRotation(-10,tmp);
         // input_3d.MeanNormalisation();
         input_3d.ThreeDToOrthographic();
         input_3d.Isometric();
         O1.PlaneProj = input_3d.IsometricGraph;
         std::copy(std::begin(input_3d.TwoDGraph), std::end(input_3d.TwoDGraph), std::begin(O1.TwoDGraph));
         QPicture pi;
         pi = O1.RenderOutput3D(pi);
         ui->isometric->setPicture(pi);
         ui->isometric->show();

         //Orthographic projection
         // input_3d.MeanNormalisation();
         input_3d.ThreeDToOrthographic();
         std::copy(std::begin(input_3d.TwoDGraph), std::end(input_3d.TwoDGraph), std::begin(O1.TwoDGraph));
         QPicture pi4;
         pi4 = O1.RenderOutput2D(pi4);
         ui->orthographic->setPicture(pi4);
         ui->orthographic->show();
}
void MainWindow::on_buttonDOWN_clicked()
{
        //MODEL ROTATION and ISOMETRIC
        edge tmp;
        point tmp2;
         tmp2.coordinate[0]=0;
         tmp2.coordinate[1]=0;
         tmp2.coordinate[2]=0;
        tmp.p1=tmp2;
         point tmp3;
         tmp3.coordinate[0]=5;
         tmp3.coordinate[1]=0;
         tmp3.coordinate[2]=0;
         tmp.p2=tmp3;
         input_3d.ModelRotation(-10,tmp);
         // input_3d.MeanNormalisation();
         input_3d.ThreeDToOrthographic();
         input_3d.Isometric();
         O1.PlaneProj = input_3d.IsometricGraph;
         std::copy(std::begin(input_3d.TwoDGraph), std::end(input_3d.TwoDGraph), std::begin(O1.TwoDGraph));
         QPicture pi;
         pi = O1.RenderOutput3D(pi);
         ui->isometric->setPicture(pi);
         ui->isometric->show();

         //Orthographic projection
         // input_3d.MeanNormalisation();
         input_3d.ThreeDToOrthographic();
         std::copy(std::begin(input_3d.TwoDGraph), std::end(input_3d.TwoDGraph), std::begin(O1.TwoDGraph));
         QPicture pi4;
         pi4 = O1.RenderOutput2D(pi4);
         ui->orthographic->setPicture(pi4);
         ui->orthographic->show();
}
void MainWindow::on_buttonZplus_clicked()
{
        //MODEL ROTATION and ISOMETRIC
        edge tmp;
        point tmp2;
         tmp2.coordinate[0]=0;
         tmp2.coordinate[1]=0;
         tmp2.coordinate[2]=0;
        tmp.p1=tmp2;
         point tmp3;
         tmp3.coordinate[0]=0;
         tmp3.coordinate[1]=0;
         tmp3.coordinate[2]=5;
         tmp.p2=tmp3;
         input_3d.ModelRotation(10,tmp);
         // input_3d.MeanNormalisation();
         input_3d.ThreeDToOrthographic();
         input_3d.Isometric();
         O1.PlaneProj = input_3d.IsometricGraph;
         std::copy(std::begin(input_3d.TwoDGraph), std::end(input_3d.TwoDGraph), std::begin(O1.TwoDGraph));
         QPicture pi;
         pi = O1.RenderOutput3D(pi);
         ui->isometric->setPicture(pi);
         ui->isometric->show();

         //Orthographic projection
         // input_3d.MeanNormalisation();
         input_3d.ThreeDToOrthographic();
         std::copy(std::begin(input_3d.TwoDGraph), std::end(input_3d.TwoDGraph), std::begin(O1.TwoDGraph));
         QPicture pi4;
         pi4 = O1.RenderOutput2D(pi4);
         ui->orthographic->setPicture(pi4);
         ui->orthographic->show();
}
void MainWindow::on_buttonZminus_clicked()
{
        //MODEL ROTATION and ISOMETRIC
        edge tmp;
        point tmp2;
         tmp2.coordinate[0]=0;
         tmp2.coordinate[1]=0;
         tmp2.coordinate[2]=0;
        tmp.p1=tmp2;
         point tmp3;
         tmp3.coordinate[0]=0;
         tmp3.coordinate[1]=0;
         tmp3.coordinate[2]=5;
         tmp.p2=tmp3;
         input_3d.ModelRotation(-10,tmp);
         // input_3d.MeanNormalisation();
         input_3d.ThreeDToOrthographic();
         input_3d.Isometric();
         O1.PlaneProj = input_3d.IsometricGraph;
         std::copy(std::begin(input_3d.TwoDGraph), std::end(input_3d.TwoDGraph), std::begin(O1.TwoDGraph));
         QPicture pi;
         pi = O1.RenderOutput3D(pi);
         ui->isometric->setPicture(pi);
         ui->isometric->show();

         //Orthographic projection
         // input_3d.MeanNormalisation();
         input_3d.ThreeDToOrthographic();
         std::copy(std::begin(input_3d.TwoDGraph), std::end(input_3d.TwoDGraph), std::begin(O1.TwoDGraph));
         QPicture pi4;
         pi4 = O1.RenderOutput2D(pi4);
         ui->orthographic->setPicture(pi4);
         ui->orthographic->show();
}
void MainWindow::on_buttonPlane_clicked()
{
    //PLANE PROJECTION
    plane tmpPlane;
    tmpPlane.A = ui->Ax->toPlainText().toFloat();
    tmpPlane.B = ui->By->toPlainText().toFloat();
    tmpPlane.C = ui->Cz->toPlainText().toFloat();
    tmpPlane.D = ui->Dd->toPlainText().toFloat();
    map<string, vector<point> > planPro = input_3d.PlanarProjection(true,tmpPlane);
    O2.PlaneProj = planPro;
    QPicture pi3;
    pi3 = O2.RenderOutput3D(pi3);
    ui->planeProj->setPicture(pi3);
    ui->planeProj->show();
}
void Dialog::on_pushButton_clicked()
{
    if(ui->rad2_inter->isChecked())
        isInputFile=false;
    filename=ui->filename->toPlainText().toStdString();
    if(ui->rad4_2d->isChecked())
        isFile3d=false;
    cout<<isFile3d<<endl;
    close();
}
void Dialog::on_rad1_file_clicked(){
   ui->filename->setEnabled(true);
   ui->browse->setEnabled(true);
}
void Dialog::on_rad2_inter_clicked(){
   ui->filename->setEnabled(false);
   ui->browse->setEnabled(false);
}
void Dialog::on_browse_clicked()
{
    QString tmpFileName = QFileDialog::getOpenFileName(this,"Select the file",QDir::currentPath());
    ui->filename->setPlainText(tmpFileName);
}
void InteractiveInput::on_draw_clicked()
{
    cout<<"draw clicked"<<endl;
    point p1;
    p1.label=ui->p1label->toPlainText().toStdString();
    p1.coordinate[0]=ui->p1x->toPlainText().toFloat();
    p1.coordinate[1]=ui->p1y->toPlainText().toFloat();
    p1.coordinate[2]=ui->p1z->toPlainText().toFloat();
    point p2;
    p2.label=ui->p2label->toPlainText().toStdString();
    p2.coordinate[0]=ui->p2x->toPlainText().toFloat();
    p2.coordinate[1]=ui->p2y->toPlainText().toFloat();
    p2.coordinate[2]=ui->p2z->toPlainText().toFloat();
    I1.drawLine(p1,p2);
    ThreeDGraph_class Itmp;
    Itmp.ThreeDGraph = I1.MyPlane;
    Itmp.GraphToList(true);
    // Itmp.MeanNormalisation();
    Itmp.Isometric();
    Output Otmp;
    Otmp.PlaneProj=Itmp.IsometricGraph;
    QPicture pi;
    pi = Otmp.RenderOutput3D(pi);
    ui->label->setPicture(pi);
    ui->label->show();

}
void InteractiveInput::on_erase_clicked()
{
    point p1;
    p1.label=ui->p1label->toPlainText().toStdString();
    p1.coordinate[0]=ui->p1x->toPlainText().toFloat();
    p1.coordinate[1]=ui->p1y->toPlainText().toFloat();
    p1.coordinate[2]=ui->p1z->toPlainText().toFloat();
    point p2;
    p2.label=ui->p2label->toPlainText().toStdString();
    p2.coordinate[0]=ui->p2x->toPlainText().toFloat();
    p2.coordinate[1]=ui->p2y->toPlainText().toFloat();
    p2.coordinate[2]=ui->p2z->toPlainText().toFloat();
    I1.eraseIt(p1,p2);
    ThreeDGraph_class Itmp;
    Itmp.ThreeDGraph = I1.MyPlane;
    Itmp.GraphToList(true);
    // Itmp.MeanNormalisation();
    Itmp.Isometric();
    Output Otmp;
    Otmp.PlaneProj=Itmp.IsometricGraph;
    QPicture pi;
    pi = Otmp.RenderOutput3D(pi);
    ui->label->setPicture(pi);
    ui->label->show();
}

void InteractiveInput::on_Done_clicked()
{
    cout<<"close clicked"<<endl;
    close();
}



int main(int argc, char *argv[]){
  QApplication a(argc, argv);
  MainWindow w;
  Dialog d;
  d.setModal(true);
  isFile3d = true;
  int ch;
  isInputFile=true;
  d.exec();




  cout<<"------INPUT------"<<endl;
//  cout<<"Enter 1 to input via file or 2 to draw(2d only): ";
//  cin>>ch;
//  cout<<endl;
//  if(ch!=1) isInputFile=false;
  if(isInputFile){
    //take input from file
    Input I1;

//        cout << "Enter File Name: ";

//        cin>>filename;
//        cout<<endl;
        int x;
//        bool t=false;
//        cout << "Enter 1 if input is 3D or else enter 2: ";
//        cin>>x;
//        cout<<endl;
//        if (x==1)
//            t=true;


    I1.getFileName(filename,isFile3d);
//    isFile3d = I1.ThreeDfile;
    I1.ReadFile();
    if(isFile3d){
      input_3d.ThreeDGraph = I1.ThreeDGraph;
    }else{
      std::copy(std::begin(I1.TwoDGraph), std::end(I1.TwoDGraph), std::begin(input_2d.TwoDGraph));
    }
  }
  else{
    //interactive input

//    cout<<"2D input or 3D input?(2/3): ";
//    cin>>ch;
//    cout<<endl;
    if (isFile3d){
        InteractiveInput i;
        i.exec();
        input_3d.ThreeDGraph=I1.MyPlane;
    }else{
        map<string, vector<point> > tmpTwoDGraph[3];/*!< This is the orthographic projections */
        for(int tt=0;tt<3;tt++){
            cout<<"Enter details of "<<tt<<" view.";
            map<string, vector<point> > freshGraph;
            I1.MyPlane=freshGraph;
            InteractiveInput i;
            i.exec();

            tmpTwoDGraph[tt]=I1.MyPlane;

        }
      std::copy(std::begin(tmpTwoDGraph), std::end(tmpTwoDGraph), std::begin(input_2d.TwoDGraph));

    }
   }

    // std::copy(std::begin(I1.MyPlane), std::end(I1.MyPlane), std::begin(input_2d.TwoDGraph));
    //add the code for interactive editor
  // }
  //input taken


  //OUTPUTTING


  if(isFile3d==false){
    input_2d.TwoDtoThreeD();
    std::copy(std::begin(input_2d.TwoDGraph), std::end(input_2d.TwoDGraph), std::begin(input_3d.TwoDGraph));
    input_3d.ThreeDGraph=input_2d.ThreeDGraph;
  }

  //rendering the 3d input

    QLabel l;//iso
    QPicture pi;
    QLabel l2;//ortho
    QPicture pi2;
    QLabel l3;//planarproj
    QPicture pi3;


    //MODEL ROTATATION
  // if(isFile3d){
    input_3d.GraphToList(true);
    input_3d.MeanNormalisation();
    input_3d.ThreeDToOrthographic();
//    cout<<"Model Rotation \nEnter 3 space seperated floats, which stand for angle of rotation along x, y and z axis\n ";
//    float ch1,ch2,ch3;
//    cin>>ch1>>ch2>>ch3;
//    edge tmp;
//    point tmp2;
//     tmp2.coordinate[0]=0;
//     tmp2.coordinate[1]=0;
//     tmp2.coordinate[2]=0;
//    tmp.p1=tmp2;
//     point tmp3;
//     tmp3.coordinate[0]=5;
//     tmp3.coordinate[1]=0;
//     tmp3.coordinate[2]=0;
//     tmp.p2=tmp3;
//     input_3d.ModelRotation(45,tmp);
//     tmp3.coordinate[0]=0;
//     tmp3.coordinate[1]=1;
//     tmp3.coordinate[2]=0;
//     tmp.p2=tmp3;
//     input_3d.ModelRotation(ch2,tmp);
//     tmp3.coordinate[0]=0;
//     tmp3.coordinate[1]=0;
//     tmp3.coordinate[2]=1;
//     tmp.p2=tmp3;
//     input_3d.ModelRotation(ch3,tmp);

//    input_3d.MeanNormalisation();
//    input_3d.ThreeDToOrthographic();
//    input_3d.Isometric();
//    O1.PlaneProj = input_3d.IsometricGraph;
//    std::copy(std::begin(input_3d.TwoDGraph), std::end(input_3d.TwoDGraph), std::begin(O1.TwoDGraph));
   // std::copy::begin(input_3d.TwoDGraph), std::end(input_3d.TwoDGraph), std::begin(O1.TwoDGraph));


    // PLANE PROJECTION
//    cout<<"Do you want projection along a specific plane?y/n: ";
//    char ch4;
//    cin>>ch4;
//    cout<<endl;
//    if(ch4=='y'){
//        cout<<"Projection along a specific plane\nEnter 4 space seperated floats, which stand for a,b,c,d in ax+by+cz=d: ";
//        float a,b,c,d;
//        cin>>a>>b>>c>>d;
//        plane tmp;
//        tmp.A = a;
//        tmp.B = b;
//        tmp.C = c;
//        tmp.D = d;
//        map<string, vector<point> > planPro = input_3d.PlanarProjection(true,tmp);

//        O2.PlaneProj = planPro;
		
//        pi3 = O2.RenderOutput3D(pi3);
//        l3.setPicture(pi3);
//        l3.show();
//    }

//    pi = O1.RenderOutput3D(pi);
//    l.setPicture(pi);
//    l.show();


//    pi2 = O1.RenderOutput2D(pi2);
//    l2.setPicture(pi2);
//    l2.show();




    //SAVING IN FILE
//    cout<<"Do you want to save the file?(y/n): ";
//    cin>>ch4;
//    cout<<endl;
  cout<<"saving in output.txt ";
  if(isFile3d){
        copy(begin(input_3d.TwoDGraph), end(input_3d.TwoDGraph), begin(O1.TwoDGraph));
        O1.saveToFile2D("output.txt");
    }
  else{
    O1.ThreeDGraph = input_3d.ThreeDGraph;
    O1.saveToFile3D("output.txt");
    }

    w.show();
    w.ui->buttonUP->click();
    w.ui->buttonDOWN->click();
      cout<<"Thanks for using our software"<<endl;
      return a.exec();
}

// Our aim is not to create duplicates of graph everywhere but only to use pointers to point to one graph
