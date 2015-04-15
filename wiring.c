"""

Polygon Mesh
Cover a 3d object with 2d surfaces like rectangle, triangles

Generate our triangles ny ms?
Point Matrix: p0.p1 p1.p2 p2.p3 p1.p3

New Matrix: P0P1P3 P1P2P3

Generic Shape -> add-edge/triangle -> draw lines (we need a new draw method)

Using Triangles
  Vertices of each triangle must be entered counterclockwise

Sphere/Torus
Points on the sphere:
P0  P1  P2  ... P19 // P0P1 P1P2 P2P3 ... will make a circle
P20 P21 P22 ... P39

P1P21P22 - generates a triangle
P1P22P2

In General:
Let n be the number of points per circle
Pi -> Pi+n -> Pi+n+1
Pi -> Pi+n+1 -> Pi+1
  
"""
