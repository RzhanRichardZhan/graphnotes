/*
Let's say there is a ball in the left bottom corner that moves to the top right corner
move x y z t
t is the percentage of the animation
t = 0 -> 1

vary x 0 .5 0 100 (half the distance in 100 frames)


-----------------------------------
Animation in MDL

move 100 300 0 fred #fred is a knob (will start at 0 -> 1)

Basic Animation MDL Keywords:
FRAMES n //sets up how many frames you're drawing

BASENAME s - set the basname of each generated frame

vary knob start_frame end_frame start_value end_value
vary fred 0 9 0 1
set the knob value for each fram of the animation

STEP 1
Look for the frames command (determine if animation is necessary)
Look for the basename command
Set frames and basename if possible
Look for vary command - return an error if frames is not present
One approach: (First two commands must be Frames + Basename if animation)

STEP 2
Handle each vary command - look through the list except for varys
Symbol table can only hold one value per knob

We must build a seperate structure for each value
- consider an array in which each index represents a frame
vary k 0 10 0 1
vary x 3 6 1 0
[k=0,k=.1,k=.2,k=.3,k=.4,k=.5,k=.6,k=.7,k=.8,k=.9,k=1]
[x=1,x=1, x=1,,x=1,x=2/3,x=1/3,x=0.......]
linked list works well :D

STEP 3
Generate image(s)
If there is no animation code, generate a single image normally
else loop through commands once per frame
  - set value for each knob in the symbol table (step 2)
  - go through commands, apply knobs when needed
  - save basename+frame.png

 */
