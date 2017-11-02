#ifndef UTILITY_H
#define UTILITY_H

// Define new types
#include <vector>
typedef std::vector<double > t_coord;
typedef std::vector<t_coord> t_traj;
typedef std::vector<t_traj > t_trajSet;

// For converting back and forth between radians and degrees.
double deg2rad(double x);
double rad2deg(double x);
double mph_to_ms(double mph); // m.s-1
double ms_to_mph(double ms);

// d coord for "left lane" of a lane
double get_dleft(int lane);
// d coord for "right lane" of a lane
double get_dright(int lane);
// d coord for "center lane" of a lane
double get_dcenter(int lane);

int get_lane(double d);

double distance(double x1, double y1, double x2, double y2);


#endif // UTILITY_H
