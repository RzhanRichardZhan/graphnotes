/* y = mx + b */
/* f(x) = mx + b */
/* Time parameter t (x0,y0) -> (x1,y1) */
/* x = f(t) = x0 + t(dx) */
/* y = g(t) = y0 + t(dy) */

#include "matrix.h"

double param_x(double t){
  return 75 * cos(2*M_PI*t) + 250; //75 is radius 250 is offset
}
double param_x(double t){
  return 75 * sin(2*M_PI*t) + 250; 
}
double param_z(double t){
  return 0;
}
void generate_parametric(struct matrix * points){
  double t = 0;
  double x,y,z,x0,y0,z0;
  double step = 0.1;
  for (;t < 1.0;t+=step){
    x = param_x(t);
    y = param_y(t);
    z = param_z(t);
    add_edge(points,x0,y0,z0,x,y,z);
    x0=x;
    y0=y;
    z0=z;
    //add edges
  }
}
double param_x_rect(double t){
  if (t < 0.25) {
    // side I
    return 150;
  } else if (t >= 0.50 && t < 0.75) {
    //side II
    return 350;
  } else if  (t >= 0.25 && t < 0.50) {
    // side III
    return 150 + 800 * ( t - .25);
  } else {
    // side IV
    return 350 - 800 * (t - .75);
  }
}
