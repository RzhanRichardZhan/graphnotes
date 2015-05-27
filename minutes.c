/*
Minutes May 26 2015
JAZZ HANDS DAY MAY 28
SEMIFORMAL JUNE 5

How to fill in a polygon?
*Insert Triangle here
Fill shape with lines (Scan line conversion)
Fill each polygon by drawing a series of horizontal and/or vertical lines
ycors of the line just increase by 1 everytime
need an efficient way to find the xcors of the triangles' lines to determine the xcors ot the scan lines
- takes a long time

Determine Bottom Top Middle vertices
//assume the bottom top and middle are distinct
March B -> T (x0)
March B -> M (x1) |  M -> T (x1)
One edge (x0) will always be along BT
One edge (x) will be along BM or MT

////////Optional/////////
The first line is B->B
(xb,yb) -> (xb, yb)
////////////////////////
The second line is
(xb + DELTA0 ,yb + 1) -> (xb + DELTA1 ,yb + 1) //DELTA0 as in the march along x0
dx/dy

*/
