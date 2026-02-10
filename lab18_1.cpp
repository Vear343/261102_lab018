#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect r1, Rect r2){
	double Pos_x1 = max(r1.x,r2.x);
	double Pos_x2 = min(r1.x + r1.w, r2.x + r2.w);
	double Pos_y1 = min(r1.y,r2.y);
	double Pos_y2 = max(r1.y - r1.h, r2.y - r2.h);
	double area;
	if (Pos_x1 > Pos_x2) area = 0;
	else{
		double width = Pos_x2 - Pos_x1;
		double height = Pos_y1 - Pos_y2;
		area = width * height;
	}
	return area;
}