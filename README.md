KOSTI-1 is a 5 DOF open-source robotic arm with a maximum payload of 500G, a reach of approximately 55cm and a total part cost of around $700; the arm lies in the mid-range between small servo arms and multi thousand dollar projects and is generally aimed towards educational and hobby purposes, but you might be able to come up with some practical ones (e.g., simple pick and place tasks, remotely turning on your coffee machine).

The bill of material, assembly guide, .stl files, example-code and CAD files are all available for download.

![Thingiverse link](https://www.thingiverse.com/thing:6147832)

![](https://github.com/A7med205/kosti-1/blob/main/media/dr1.png)
![](https://github.com/A7med205/kosti-1/blob/main/media/dr2.png)

## Things That Might Set This Arm Apart From Other Similar Ones:

1.	Rigidity: Most parts are 3D printed, but the shoulder and base are partially made out of CNC aluminium, which adds to the rigidity of the design.
2.	Backlash: No gearbox needed for the base and shoulder joints, which means zero backlash at those joints.
3.	Smoothness: Running the shoulder and base joints at quarter step settings, combined with the fact that the remaining joints have commercial gearboxes with large resolutions, can lead to very smooth movement.
4.	Customizability: The design is entirely functional which makes it easy to modify; for instance, links can be lengthened or shortened, actuators can be replaced or modified, etc.

## Reasons Why You Might Want To Look Elsewhere:

1.	This arm isn’t entirely cost optimised; the commercial pulleys and gearboxes can be replaced with 3D printed ones or even be replaced with more affordable options, but further prototyping would be needed to achieve that.
2.	This arm is not the best choice if you want something to reliably carry out practical tasks, and there are likely commercial options out there that better suited for this.
3.	The arm uses open-loop stepper motors, and I haven’t added limit switches yet, meaning that the arm would need a pre known starting pose for every new run.


## Pick and Place
![](https://github.com/A7med205/kosti-1/blob/main/media/pick.GIF)

## Demo
![](https://github.com/A7med205/kosti-1/blob/main/media/demo.GIF)

## ROS + Moveit
![](https://github.com/A7med205/kosti-1/blob/main/media/ROS.GIF)

## Assembly
![](https://github.com/A7med205/kosti-1/blob/main/media/assembly.GIF)

## Exploded View
![](https://github.com/A7med205/kosti-1/blob/main/media/explode.png)