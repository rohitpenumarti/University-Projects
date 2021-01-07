#include <iostream>
#include <string>
#include <sstream>  // for ostringstream
#include <iomanip> // for setprecision
#include "utility.h"
#include <cmath>

using namespace std;


#include "shapes.h"
#include "utility.h"

// Compute distance between two points

double distanceBetween(Point p, Point q) {
  double px = p.x;
  double py = p.y;
  double qx = q.x;
  double qy = q.y;
  
  return sqrt(pow(px-qx,2)+pow(py-qy,2));
}

bool approxEqual(double x, double y, double tolerance) {
	return fabs(x-y)<=tolerance;
}


// Precondition: p has been passed through using a struct point and xVal and yVal have been given values
// Postcondition: the x and y values of the given dereferenced pointer have been set to the given xVal and yVal parameters
void initPoint(struct Point *p, double xVal, double yVal) {
  p->x = xVal;
  p->y = yVal;
}


string pointToString(Point p, int precision) {
  ostringstream oss;
  oss << setprecision(precision); // set precision to 3 decimal places
  oss << "(" << p.x << "," << p.y << ")";
  return oss.str();
}

string boxToString(Box b, int precision) {
  ostringstream oss;
  oss << setprecision(precision); // set precision to 3 decimal places
  oss << "ul=(" << b.ul.x << "," << b.ul.y << "),w=" << b.width << ",h=" << b.height;
  return oss.str();
}
 


bool pointsApproxEqual(Point p1, 
		       Point p2, 
		       double tolerance) {
  // Two points are approximately equal if the distance between them
  // is less than our tolerance.  (If we want to test for 
  // exact equality, we can pass in a value of zero.)

  return distanceBetween(p1,p2) < tolerance;

}

bool boxesApproxEqual(Box b1, Box b2, double tolerance) {
  
  double b1Width = b1.width;
  double b1Height = b1.height;
  double b2Width = b2.width;
  double b2Height = b2.height;
  
  Point upperLeftB1 = b1.ul;
  Point upperLeftB2 = b2.ul;

  return (pointsApproxEqual(upperLeftB1, upperLeftB2, tolerance) && approxEqual(b1Width, b2Width, tolerance)
          && approxEqual(b1Height, b2Height, tolerance));
}


// Now write a function to initialize a box.
// You'll need to initialize the upper left x and y,
// the width and the height.
// Note: there is a struct Point inside the struct Box.
// So here's a clue: For the x value, use (*b).ul.x or (b->ul).x 
//  The y value is similar.
// There is also a way to "reuse" initPoint, if you are feeling 
//  confident in your understanding of pointers and structs.

void initBox(struct Box *b, double ulx, double uly, double w, double h)
{
  (b->ul).x = ulx;
  (b->ul).y = uly;
  b->width = w;
  b->height = h;
}


double areaOfBox(Box b) {
  return (b.width*b.height);
}
