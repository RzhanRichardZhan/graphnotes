/*
  3-D Shapes
  Box, Sphere, Torus

  Box
  Defining points : 8 Vertices
  Given info : height (y) x width (x) x depth (z)
               starting vertex is upper left front

  Sphere:
  Defining points : Points along the surface
  Given info : radius (r)
               center

  [1    0     0 0][rcost]   [    rcost]
  [0 cosa -sina 0][rsint] = [rsintcosa] = Sphere Points
  [0 sina  cosa 0][    0]   [rsintsina]
  [0    0     0 1][    1]   [        1]

  x = rcost     //+ Cx
  y = rsintcosa //+ Cy
  z = rsintsina //+ Cz

  t = circle generation 0 -> 2pi    or    0 ->  pi
  a = circle rotation   0 ->  pi          0 -> 2pi
  

  for p: 0 -> 1
    for c: 0 -> 1
      x = rcos(2pic)
      y = rsin(2pic)cos(a)
      z = rsin(2pic)sin(a)


  Torus
  [cosa 0 -sina 0][rcost + R] [cosa(rcost+R)]
  [   0 1     0 0][    rsint]=[        rsint]
  [sina 0  cosa 0][        0] [sint(rcost+R)]
  [0    0     0 1][        1] [            1]

  x = cosa(rcost+R)
  y = rsint
  z = -sina(rcost+R)
*/
