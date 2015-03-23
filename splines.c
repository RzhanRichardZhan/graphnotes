/*
  Splines
  Hermite Curves
  P0, P1 : endpoints
  R0, R1 : rates of change at each endpoint
  Defined by these Equations:
  h1(t) = 2t³ -3t² + 1
  h2(t) = -2t³ +3t²
  h3(t) = t³ - 2t² + t
  h4(t) = t³ - t²
  
  Pt = h1(t)P0 +h2(t)P1 + h3(t)R0 + h4(t)R1
  
  g(t) = at³ + bt² + ct + d
  f(t) = Point at t
  
  g'(t) = Rate of Change at t
        = 3at² + 2bt + c

  When t = 0
  f(t) = P0 -> g(t) = d
  THUS P0 = d
  g'(t) = c
  THUS R0 = c
 
  When t = 1
  f(t) = P1 -> g(t) = a + b + c + d
  g'(t) = 3a + 2b + c
  THUS R1 = 3a + 2b + c
  
  |0 0 0 1||a| |d      | |P0|
  |1 1 1 1||b| |a+b+c+d| |P1|
  |0 0 1 0||c|=|c      |=|R0|
  |3 2 1 0||d| |3a+2b+c| |R1|
      H     C      G
  H * C = G
  H^-1 * G = C
  
  H^-1 = | 2 -2  1  1|
         |-3  3 -2 -1|
	 | 0  0  1  0|
	 | 1  0  0  0|

  [t³ t² t 1]| 2 -2  1  1|   the parametric equation that i'm too lazy to write
             |-3  3 -2 -1|
	     | 0  0  1  0| = 
	     | 1  0  0  0|

*/
