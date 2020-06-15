# MSMPLOTTER Library V1.0.0 for Arduino

## Written by: Mainak Mondal.
## What is MSMPLOTTER?
This library can Plot on Serial Monitor. (not on Serial Plotter in Arduino Ide).
This library can plot graph of some sequential values.Timestump will be taken automatically.
## How to use the library?
[![arduino-library-badge](https://www.ardu-badge.com/badge/MSMPLOTTER.svg?)](https://www.ardu-badge.com/MSMPLOTTER)<br/>
```cpp
//include MSMPLOTTER
#include<MSMPLOTTER.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);//115200 or higher baud rate will be preferable
}

void loop() {
  // put your main code here, to run repeatedly:
  //class and object
  MSMPLOTTER object_name
  object_name msmplotter(arr, p, name_of_Graph, x_axis, y_axis);
  //array is integer type with size limit 16 bit.
  //p is size of array
  //name_of_Graph is String
  //x_axis is String
  //y_axis is String
}
```

## Examples
### plotting  Sine Wave
array is `{10,10,11,11,11,11,12,12,12,12,12,13,13,13,13,14,14,14,14,15,15,15,15,15,16,16,16,16,16,17,17,17,17,17,18,18,18,18,18,18,18,19,19,19,19,19,19,19,19,19,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,20,19,19,19,19,19,19,19,19,19,18,18,18,18,18,18,18,17,17,17,17,17,16,16,16,16,16,15,15,15,15,15,14,14,14,14,13,13,13,13,12,12,12,12,12,11,11,11,11,10,10,10,9,9,9,9,8,8,8,8,8,7,7,7,7,6,6,6,6,5,5,5,5,5,4,4,4,4,4,3,3,3,3,3,2,2,2,2,2,2,2,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,2,2,2,2,2,2,2,3,3,3,3,3,4,4,4,4,4,5,5,5,5,5,6,6,6,6,7,7,7,7,8,8,8,8,8,9,9,9,9,10}`
![Sine_Wave](https://user-images.githubusercontent.com/32256636/82096688-090f4f00-971f-11ea-8a2d-667842176f30.png)
### Plotting Graph from Local maxima and minima
arrray is `{2,4,6,6,10,4,5.5,5,4,8,7,5,14,0,5,3}`
![Auto_Generate_Wave_From_local_Maxima_and_Minima](https://user-images.githubusercontent.com/32256636/82096798-44118280-971f-11ea-8d42-2dfd257e29dd.png)
### Plotting Triangular Wave
array is `{10,15,10,5,10,15,10,5,10}`
![Triangular_Wave](https://user-images.githubusercontent.com/32256636/82096799-4542af80-971f-11ea-8730-8afc292cc5b1.png)
## Advatages of this library
1. Less CPU usage
2. Debugging and plotting in same window.
## Features
1. This libarary can opearate maximum  unsigned 16-bit integer,which is not required for mostly usable proccessors.Our commonly usable processors for projects are in between 8 bit to 12 bit resolution.Like, Arduino contain a multichannel, 10-bit analog to digital converter.If the input of the Array is taking any error then use map() function to decrease the values of data also try to decrease the size
2. This library can auto adjust the limits of x axis. and Y axis.
3. This libarary can generate graph from local maxima and minima with consideration of Jump essential discontinuity to gradual increment or decrement.
