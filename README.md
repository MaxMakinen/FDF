# FDF
A program that takes in a text file of numbers and converts it into a wireframe visualization.

This is a school project that required us to take input in the form of a text file of numbers and
turn it into a wireframe visualisation. The input might also contain color information in the form of hexadecimal
color codes.

My solution was to turn the input inormation into 3d vector inforamtion with X, Y and Z axis information,
and use a projection matrix to visualize the information in 3d space.

An example of input we might receive:

The aforementioned file render from a frontal perspective:
![alt text](https://github.com/MaxMakinen/FDF_42/blob/main/.images/front.png)

The aforementioned input rendered in an angle with 3d projection:
![alt text](https://github.com/MaxMakinen/FDF_42/blob/main/.images/persp_3d.png)

the aforementioned input rendered in a more orthogonal projection:
![alt text](https://github.com/MaxMakinen/FDF_42/blob/main/.images/persp_ortho.png)
