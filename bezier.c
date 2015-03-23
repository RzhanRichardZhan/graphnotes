/*
  Given:
  P0, P3 : Endpoints
  P1, P2 : Points of Influence
  
  Linear Bezier Curve
  Pt = (1-t)P0 + tP1
  
  Quadratic Bezier Curve
  M0 and M1 are the marching points
  M0t = (1-t)P0 + tP1
  M1t = (1-t)P1 + tP2
  Qt = (1-t)M0t + tM1t
  Qt = (1-t)[(1-t)P0 + tP1] + t[(1-t)P1 + tP2]
  Qt = (1-t)²P0 + (1-t)tP1 + (1-t)tP1 + t²P2
  Qt = (1-t)²P0 + 2(1-t)tP1 + t²P2

  Cubic Bezier Curve
  M0 M1 and M2 are the marching points
  N0 N1 are the primary marching points
  Ct = (1-t)N0t + tN1t
  Ct = (1-t)[(1-t)²P0 + 2t(1-t)P1 + t²P2] + t[(1-t)²P1 + 2t(1-t)P2 + t²P3]
  Ct = (1-t)³P0 + 2t(1-t)²P1 + t²(1-t)P2 + t(1-t)²P1 + 2t²(1-t)P2 + t³P3
  Ct = (1-t)³P0 + 3t(1-t)²P1 + 3t²(1-t)P2 + t³P3

      |P0|  |a|
      |P3|  |b|
  ? * |P1| =|c|
      |P2|  |d|
       G

  ? = |-1  3 -3  1|
      | 3 -6  3  0|
      |-3  3  0  0|
      | 1  0  0  0|
  
 */
