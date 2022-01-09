# TouchkeyUSB
*******
Arduino TouchKeyUSB Shield v3.1
********
- Here is a description of its usage
- Simulating a keyboard by microcontroller, leads a few keys, and using the touch form instead of switches. Now we can also use an Arduino board and a touch key USB shield to achieve this effect.
- The input method of touch key USB shield is touch, using dual contacts touch switch, to lead the touch terminal and the ground terminal connected to the two electrodes touch. When human touch the two pole, because of the body resistance, a touch electrode between the two current flows, by detecting this current size of the touch event can be detected.
- Basically you need to attach a crocodile clip or similar to the GND, you then connect  crocodile clips or similar to the terminals marked from A0 to A5. You then attach the other end of the AO to A5 crocodile clips to a coin. When you have uploaded the test sketch below and touch the GND and the coin an LED on the shield lights. At its most basic you are basically putting a high resistance (you) between one of the analog pins and GND.
******
- As you can see the USB keyboard usage is commented out, you are supposed to be able to send keystrokes to a PC with this.
******
