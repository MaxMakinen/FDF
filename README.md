# FDF
A program that takes in a text file of numbers and converts it into a wireframe visualization.

This is a school project that required us to take input in the form of a text file of numbers and
turn it into a wireframe visualisation. The input might also contain color information in the form of hexadecimal
color codes.
We were to code it all using the schools MiniLibx graphical library that's based on X11.

My solution was to turn the input information into 3d vector inforamtion with X, Y and Z axis information,
and use a projection matrix to visualize the information in 3d space. 
Rotation of the image is done using matrix multiplication and axis unique rotation matrices.
I coded a version of the Bresenham line drawing algorithm for drawing lines on the screen.

Through this project I learned to more readily accept the work of those who've come before me.
I could've spent even more time on truly understanding the deeper mathematics of the necessary trigonometry for projection matrices.
But that would've drawn out this project to unfeasible lenghts.
I can trust that the professional mathematicians whose work I used know what they're doing.
That said, I did learn some new things by using these mathematical tools.
Should I continue using them in future projcets I'm sure my understanding of them and the underlying concept would only deepen.

It's good to know how it works.
But it's not always necessary to understand it to the core in order to use it in your project.
Math can be an acceptable black box in your tool kit.

I encounterd a lovely quote regarding this:
"It's not always necessary to reinvent the wheel, unless your goal is to learn more about wheels."
I have a tendency to try to reinvent the wheel, because I feel I learn the consept more deeply that way, the why and not just the how.
This project helped me understand that getting the job done is more important than learning every detail,
and I can always come back and learn more when I have the time.

In conclusion:
The program does what it's intended to do, it's a little overdone to be honest.
It's was an interesting challenge, and the restrictions caused by using a very specific graphical library helped me narrow down my focus on what can be done.
But my choices to use 3d rendering mathematics will give a good base for a later
project where 3d rendering will be required.

An example of input we might receive:

![alt text](https://github.com/MaxMakinen/FDF_42/blob/main/.images/input.png)

The input rendered from a frontal 3d perspective:

![alt text](https://github.com/MaxMakinen/FDF_42/blob/main/.images/front.png)

The input rendered in an angle with 3d projection:

![alt text](https://github.com/MaxMakinen/FDF_42/blob/main/.images/persp_3d.png)

the input rendered in a more orthogonal projection:

![alt text](https://github.com/MaxMakinen/FDF_42/blob/main/.images/persp_ortho.png)
