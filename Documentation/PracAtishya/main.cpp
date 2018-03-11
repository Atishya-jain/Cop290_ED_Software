#include <math.h>
#include <QtCore>
#include <QtGui>


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
   p.drawLine(0, 0, 0, 200);
   p.drawLine(0, 200, -200, 200);
   // p.drawLine(200, 200, 200, 0);
   // p.drawLine(200, 0, 0, 0);
   p.end(); // Don't forget this line!
   return pi;
}

int main(int argc, char *argv[])
{
   QApplication a(argc, argv);
   QLabel l;
   QPicture pi;
   pi = draw(pi);
   l.setPicture(pi);
   l.show();

   QLabel l1;
   QPicture pi1;
   pi1 = draw(pi1);
   l1.setPicture(pi1);
   l1.show();   
 //   p.setRenderHint(QPainter::Antialiasing);
 //   // p.setPen(QPen(Qt::black, 5, Qt::DashDotLine, Qt::RoundCap));
 //   p.setPen(QPen(Qt::black, 5, Qt::SolidLine, Qt::RoundCap));
 //   p.drawLine(0, 0, 0, 200);
 //   p.drawLine(0, 200, 200, 200);
 //   p.drawLine(200, 200, 200, 0);
 //   p.drawLine(200, 0, 0, 0);
      
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