#include <math.h>
#include <QtCore>
#include <QtGui>
#include <QApplication>
#include <QGraphicsScene>
#include <QGraphicsRectItem>
#include <QGraphicsView>


#define PI 3.1415926536
#define SIZE 200
#define FACTOR 100

const float STEP = 2*PI/SIZE;

using namespace Qt;

QPicture draw(QPicture pi){
   QPainter p(&pi);
   p.setRenderHint(QPainter::Antialiasing);
   // p.setPen(QPen(Qt::black, 5, Qt::DashDotLine, Qt::RoundCap));
   p.setPen(QPen(Qt::black, 5, Qt::SolidLine, Qt::RoundCap));
   p.drawLine(0, 0, 0, -600);
   p.drawLine(0, -600, 600, -600);
   p.drawLine(600, -600, 600, 0);
   p.drawLine(600, 0, 0, 0);
   p.end(); // Don't forget this line!
   return pi;
}

// void render2D(map<string, vector<point>> Graph[3], QPicture pi){
//    int TopMargin = 50;
//    int BottomMargin = 50;
//    int LeftMargin = 50;
//    int RightMargin = 50;
//    int SpaceBetween = 100;
//    int TotalHeight = 600;
//    int TotalWidth = 600;
//    int ObjectSize = 200;
//    int MidH = TotalHeight/2;
//    int MidW = TotalWidth/2;

//    QPainter p(&pi);
//    p.setRenderHint(QPainter::Antialiasing);
//    p.setPen(QPen(Qt::black, 5, Qt::SolidLine, Qt::RoundCap));
//    p.drawLine(0, 0, 0, 600);
//    p.drawLine(0, 600, 600, 600);
//    p.drawLine(600, 600, 600, 0);
//    p.drawLine(600, 0, 0, 0);

//    for (map<string, vector<point> >::iterator it=Graph[0].begin(); it!=Graph[0].end(); ++it){
//      long len = it->second.size();
//      for(int j=0;j<len;j++){
//        it->second.coordinate[0] = LeftMargin + SpaceBetween + ObjectSize + it->second.coordinate[2];
//        it->second.coordinate[1] = TopMargin + ObjectSize + SpaceBetween + it->second.coordinate[1];
//      }
//    }

//    for (map<string, vector<point> >::iterator it=Graph[1].begin(); it!=Graph[1].end(); ++it){
//      long len = it->second.size();
//      for(int j=0;j<len;j++){
//        it->second.coordinate[0] = LeftMargin + SpaceBetween + ObjectSize + it->second.coordinate[2];
//        it->second.coordinate[1] = TopMargin + it->second.coordinate[0];
//      }
//    }

//    for (map<string, vector<point> >::iterator it=Graph[2].begin(); it!=Graph[2].end(); ++it){
//      long len = it->second.size();
//      for(int j=0;j<len;j++){
//        it->second.coordinate[0] = LeftMargin + it->second.coordinate[0];
//        it->second.coordinate[1] = TopMargin + SpaceBetween + ObjectSize + it->second.coordinate[1];
//      }
//    }

//    p.setPen(QPen(Qt::black, 2.5, Qt::SolidLine, Qt::RoundCap));

//    for (map<string, vector<point> >::iterator it=Graph[0].begin(); it!=Graph[0].end(); ++it){
//      long len = it->second.size();
//      point MainPoint = it->second[0];
//      for(int j=1;j<len;j++){
//        p.drawLine(MainPoint.coordinate[0], MainPoint.coordinate[1], it->second[j].coordinate[0], it->second[j].coordinate[1]);
//      }
//    }

//    for (map<string, vector<point> >::iterator it=Graph[1].begin(); it!=Graph[1].end(); ++it){
//      long len = it->second.size();
//      point MainPoint = it->second[0];
//      for(int j=1;j<len;j++){
//        p.drawLine(MainPoint.coordinate[0], MainPoint.coordinate[1], it->second[j].coordinate[0], it->second[j].coordinate[1]);
//      }
//    }

//    for (map<string, vector<point> >::iterator it=Graph[2].begin(); it!=Graph[2].end(); ++it){
//      long len = it->second.size();
//      point MainPoint = it->second[0];
//      for(int j=1;j<len;j++){
//        p.drawLine(MainPoint.coordinate[0], MainPoint.coordinate[1], it->second[j].coordinate[0], it->second[j].coordinate[1]);
//      }
//    }

//    p.drawLine(0,MidH,TotalWidth,MidH);
//    p.drawLine(MidW,0,TotalHeight,MidW);

//    p.end(); // Don't forget this line!
//    return pi;
// }


// void render3D(map<string, vector<point>> Graph, QPicture pi){
//    QPainter p(&pi);
//    p.setRenderHint(QPainter::Antialiasing);
//    p.setPen(QPen(Qt::black, 5, Qt::SolidLine, Qt::RoundCap));
//    p.drawLine(0, 0, 0, 600);
//    p.drawLine(0, 600, 600, 600);
//    p.drawLine(600, 600, 600, 0);
//    p.drawLine(600, 0, 0, 0);

//    for (map<string, vector<point> >::iterator it=Graph[0].begin(); it!=Graph[0].end(); ++it){
//      long len = it->second.size();
//      for(int j=0;j<len;j++){
//        it->second.coordinate[0] = 50 + it->second.coordinate[0];
//        it->second.coordinate[1] = 50 + it->second.coordinate[1];
//      }
//    }

//    p.setPen(QPen(Qt::black, 2.5, Qt::SolidLine, Qt::RoundCap));

//    for (map<string, vector<point> >::iterator it=Graph[0].begin(); it!=Graph[0].end(); ++it){
//      long len = it->second.size();
//      point MainPoint = it->second[0];
//      for(int j=1;j<len;j++){
//        p.drawLine(MainPoint.coordinate[0], MainPoint.coordinate[1], it->second[j].coordinate[0], it->second[j].coordinate[1]);
//      }
//    }

//    p.end(); // Don't forget this line!
//    return pi;
// }


int main(int argc, char *argv[])
{
   QApplication a(argc, argv);

   QGraphicsScene * scene = new QGraphicsScene();
   
   // QPicture pi;
   // pi = draw(pi);
   QPicture pi;
   pi = draw(pi);
   
   QGraphicsRectItem * rect = new QGraphicsRectItem();

   rect->setRect(0,0,100,100);

   // scene->addItem(rect);
   scene -> addItem(pi);

   QGraphicsView * view = new QGraphicsView(scene);
   // view->setScene(scene);
   view->show(); 
   // QLabel l;
   // QPicture pi;
   // pi = draw(pi);
   // l.setPicture(pi);
   // l.show();



 // //   float x, y, prev_x=0, prev_y=0 ;

 // //   for (int i = 1; i < SIZE; ++i){
	// // 	x = i*STEP;
	// // 	y = sin(x);
	// // 	p.drawLine(FACTOR*prev_x, FACTOR*prev_y, FACTOR*x, FACTOR*y);

	// // 	prev_x = x;
	// // 	prev_y = y;
	// // }

 //   p.end(); // Don't forget this line!

 //   l.setPicture(pi);
 //   l.show();
   return a.exec();
}