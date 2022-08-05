//  coordin.h -- structure templates and function prototypes

#ifndef COORDIN_H
#define COORDIN_H

// structure templates
struct polar
{
	double distance;
	double angle;
};

struct rect
{
	double x;
	double y;
};

// prototypes
polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

#endif // !COORDIN_H
