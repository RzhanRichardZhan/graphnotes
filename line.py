"""
Bresenham's Line Algorithm

Slope-Intercept Form
y = mx + b
But parameters are (int x0,int y0) (int x1,int y1)
y = dy/dx * x + b
dx * y = dy * x + dx * b (b might not be an integer)

A = dy
B = -dx
C = dx * b

-By = Ax + C
Ax + By + C = 0

(f(x,y) = Ax + By + C == 0) -> on the line
test function
1. if f(x,y) == 0:
     return (x,y) is on the line
2. if f(x,y) > 0:
     return (x,y) is below the line
3. if f(x,y) < 0:
     return (x,y) is above the line

(x,y) is the starting point
Run test functions on (x+1,y) and (x+1,y+1) (assuming 0 < slope <= 1)
and compare absolute values

or check the midpoint
mp = (x + 1, y + (1/2))

Draft Algo
1. (x,y) -> (x1,y1)
   determine A, B, C
   d = A + .5B
2. while (x <= x1)
   3. plot (x,y)
   4. determine y of mp of next x
      #d = f(x+1,y+.5)
      if (d > 0)
        y++
        d += B
      x++
      d += A
      
Finding d
---------
d0 = f(x0,y0) = 0
dn = f(x0+1,y0+.5) =
     A(x0+1) + B(y0+.5) + C =
     Ax0 + A + By0 + .5B + C =
     A + .5B + 0
A(x+1) + B(y+1) + C =                    A(x+1) + B(y) + C = 
Ax + A + By + B + C =                    Ax + By + C + A = 
Ax + By + C + A + B =                    d + A
d + A + B
"""
