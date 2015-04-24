/*
Backface Culling - Process of "removing" any polygons that are facing away from the viewer
- We will be "not drawing" instead of removing
Surface normal - perpendicular vector coming out of a plane

We need to find the surface normal (N) for each polygon and compare it to the view vector (V)

1. Calculate N
2. Find Theta (t) between N and V
3. If t is in viewable range, draw the polygon


1.
A = p1-p0 = <(x1-x0),(y1-y0),(z1-z0)>
B = p2-p0 = <(x2-x0),(y2-y0),(z2-z0)>
N = cross product of 2 vectors that share a common endpoint and are pointed in opposite directions
= A x B
= <(AyBz - AzBy), (AzBx - AxBz), (AxBy - AyBx)>


2.
DW lied, t will be the supplementary angle
V = <0,0,-1>
N * V = Mcost
if Mcost is positive, 0 < t < 90 or 270 < t < 360
else, 90 < t < 270 which is what we want
= NxVx + NyVy + NzVz




 */
