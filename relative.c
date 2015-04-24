/*
Relative Coordinate System
Each object has its own coordinate system (transformation matrix) (they have to be mapped to the global coordinate system)

We will store transformation matrices on a stack

I           T           S
|1 0 0 0|   |1 0 0 3|   |2 0 0 0|   |2 0 0 3|
|0 1 0 0| * |0 1 0 2| * |0 2 0 0| = |0 2 0 2|
|0 0 1 0|   |0 0 1 0|   |0 0 2 0|   |0 0 2 0|
|0 0 0 1|   |0 0 0 1|   |0 0 0 1|   |0 0 0 1|

Instead i can pretend the origin is (3,2,0) with a scale of 2

All transformations are applied to the top of the coordinate system stack

Adding and drawing a shape using these steps:
  1. Generate and add points to a polygon matrix
  2. Multiple the polygon matrix by the top coordinate system on the stack
  3. Draw the polygons to the image
  4. Clear polygon matrix

Command        Stack        Image
               I            Nothing
-----------------------------------
push           I            Nothing
               I
-----------------------------------
move x y z     M0*I         Origin has changed
               I
-----------------------------------
box ...        M0*I         Box is rendered in the middle
               I
-----------------------------------
push           M0*I         ''
               M0*I
               I
-----------------------------------
move x y z     M1*M0*I      Origin has changed
               M0*I
               I
-----------------------------------
sphere ...     M1*M0*I      Sphere is rendered
               M0*I
               I
-----------------------------------
pop            M0*I         Top of stack is removed
               I
----------------------------------
//rotate x 45 - will rotate everything after in the script
----------------------------------
push           M0*I
               M0*I
               I
----------------------------------
move x y z     M2*M0*I      Origin has changed
               M0*I
               I
----------------------------------
box ...        M2*M0*I      Box is drawn
               M0*I
               I
----------------------------------
move
-----
rotate x 90
-----
torus
 */
