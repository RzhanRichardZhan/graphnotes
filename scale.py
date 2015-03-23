"""
Affine Transformations:
  Preserve the # of vertices
  Preserve the order of vertices
    Scaling/Dilation
    Translation
    Rotation
    

  Moving/Translation
  (x,y)-T(2,3)->(x+2,y+3)
  (x,y,z)-T(a,b,c)->(x+a,y+b,z+c)
  |1 0 0 a||x| |x+a|
  |0 1 0 b||y|-|y+b|
  |0 0 1 c||z|-|z+c|
  |0 0 0 1||1| | 1 |

  Scaling/Dilation
  (x,y,z)-D(a,b,c)->(xa,yb,zc)
  |a 0 0 0||x| |ax|
  |0 b 0 0||y|-|by|
  |0 0 c 0||z|-|cz|
  |0 0 0 1||1| |1 |

  Rotation (about the origin)
  (x,y,z)-R(t<theta>,a<axis that stays>)->(xcost-ysint,ycost+xsint)
  #if z
  |cost -sint 0 0||x| |xcost-ysint|
  |sint cost  0 0||y|-|ycost+xsint|
  |0    0     1 0||z|-|z          |
  |0    0     0 1||1| |1          |
  #if x
  |1 0    0     0||x| |x          |
  |0 cost -sint 0||y|-|ycost-zsint|
  |0 sint cost  0||z|-|ysint+zcost|
  |0 0    0     1||1| |1          |
  #if y
  |cost 0 -sint 0||x| |xcost-zsint|
  |0    1 0     0||y|-|y          |
  |sint 0 cost  0||z|-|xsint+zcost|
  |0    0 0     1||1| |1          |

  E3 = R * E2
           S * E1
               T * E0
  E3 = (R*S*T)*E0 #Master Transformation Matrix
"""
