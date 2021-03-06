# FIREHOUSE TEMPERATURE INDICATOR
## INTRODUCTION
Firehouse is place where they used manufacture fireworks such as crackers etc,nowadys inspite of having many safety measures in firehouses many explosion happens due to human unawareness ,and it leads to many loss of life and property.The main reason for this is the increase in the temperature of the surroundings.In order to avoid the problem.
## OBJECTIVE
The main objective of the project is to design a sensor unit which will help the workers in the work places to know about the temperature of highly cautious workplaces. This Firehouse_temperature_indicator management system is built on the microcontroller-based system having temperature sensor on the workhouses. If temperature sensor is not placed the workers may unaware of the surroundings and this may lead to problems.
## Defining the System
![Capture](https://user-images.githubusercontent.com/102171569/164711856-79ad485f-b734-4875-8c80-159a4250e0fe.JPG)

## BENIFITS
- It improves human safety and avoid property damage.
- Easy installation
- Minimal maintenance
- Compact design
## COMPONENTS
- ATMEGA328p
- Lm35 temperature sensor
- LEDs
- Resistors
## 4W's And 1H
## Who
The people who work in firehouse industry get benefit over it
## What
The Firehouse temperature sensor employs a simple mechanism to detect and indicate the level of temperature in the firehouse industry.
## When
Firehouse temperature sensor is a system that indicates information about the level of temperature. This level indication is very useful to people to evacuate and take necessary steps  in correct time.
## Where
It is used in firehouse industry.
## How
This project is implemented in Embedded C language. The working principle of a Firehouse temperature sensor is actually quite simple. Firehouse temperture level indication is implemented by using ATMEGA328, Lm35 temperature sensor and LEDs.
## SWOT ANALYSIS:
## STRENGTH
- Economic and social benefits
- Easy to utilize 
- Installation is simple
## WEAKNESS
- only initimate the people about the temperature
## OPPORTUNITIES
- Improved human safety
## THREATS
- Low level green technology
## HIGH LEVEL REQUIREMENTS
| RID | DESCRIPTION |
| --- | --- |
| HLR1 |	Lm-35|
| HLR2 |	BREAD BOARD|
| HLR3 |	ATMEGA328 |
| HLR4 |	LEDs |
## LOW LEVEL REQUIREMENTS:
| RID |	DESCRIPTION |
| --- | --- |
| LLR1 |	AREA |
## APPLICATIONS:
- It can widely be used in industrial purposes.
- It is used in many exploitation related places.
## BEHAVIOURAL DIAGRAM
[![behavioral diagram_M2](https://user-images.githubusercontent.com/102171569/164976257-c659153c-f529-4c5c-9616-bd0c846b7549.png)
## BLOCK DIAGRAM
![Block diagram](https://user-images.githubusercontent.com/102171569/164976335-1fd55b87-b342-407d-9bc6-418e030ddcd5.JPG)
## FLOWCHART
![flowchar1](https://user-images.githubusercontent.com/102171569/164976495-a2ad0ab4-9169-4ee9-91a1-140be83c68b8.JPG)
## Folder Structure
Folder        | description
--------------| ----------------------------------------------
`inc`         | All header files
`src`         | Main source code for  Firehouse Temperature level indicator
`simulation`  | simulation files for Firehouse Temperature level indicator
# Test Plan
## Table no 1: High level test plan
Test ID | Description | Temperature level in celcius| Expected O/P
--------|-------------|---------|---------
H_01  | Calculate Temperature level | 5??C| LED 1 ON 
H_02  | Calculate Temperature level | 34??C | LED 2 ON 
H_03  | Calculate Temperature level | 58??C | LED 3 ON 
H_04  | Calculate Temperature level | 75??C| LED 4 ON 
H_05  | Calculate Temperature level | 92??C| LED 5 ON 
## Table no 2: Low level test plan
Test ID | Description | Temperature level in ??C | Expected O/P
--------|-------------|---------|---------
L_01  | Calculate temperature level | greater than 0 and less than 20 celcius | LED 1 ON 
L_02  | Calculate temperature level | greater than 20 and less than 40 celcius | LED 2 ON 
L_03  | Calculate temperature level | greater than 40 and less than 60 celcius | LED 3 ON 
L_04  | Calculate temperature level | greater than 60 and less than 80 celcius | LED 4 ON 
L_05  | Calculate temperature level | greater than 80 and less than 100 celcius | LED 5 ON 



