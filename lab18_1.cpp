#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect r1, Rect r2){
	double width = min(r1.x + r1.w, r2.x + r2.w) - max(r1.x,r2.x);
	double height = min(r1.y + r1.h, r2.y + r2.h) - max(r1.y,r2.y);

	cout << "Width = " << min(r1.x + r1.w, r2.x + r2.w) - max(r1.x,r2.x) << endl;
	cout << "Height = " << min(r1.y + r1.h, r2.y + r2.h) - max(r1.y,r2.y) << endl;

	double area = width * height;
	return area;
}

int main(){
	Rect R1 = {-1,2,6.9,9.6};
	Rect R2 = {0,0,1.2,2.5};
	cout << overlap(R1,R2) << endl;

	Rect R3 = {1,1,5,5};
	Rect R4 = {2,2,5,5};	
	cout << overlap(R3,R4);	
}                                              