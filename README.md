# snakes_and_ladder
This is a Snakes and ladder game for 2 players.

## C++ graphics library is used.

### dos and graphs graphics libraries used in this mini project are supported in turbo C compilers, modern GCC compilers do not use that. for running this game in your environment, please consider using turbo C.


This is a mini project to get started with developement. 

this two player game consist of a ludo board (as we see in real life), C++ graphics library provide functions for representaiton of the dice and board in desktop when the program is built.


The code is divided in two parts broadly:- 1) design   2) Logic Implementation

#### Design:- 
I have tried to keep design as realistic and simple as it can be. You can go through code and understand it line by line easily.

#### Logic Implementaiton:- 
There are values between 1-10, for 1 to 9 divide by 10 gives 0(quotient) so circle of player will move from left to right if quotient is even, exception of 10 considered. If quotient(is odd) circle will move from right to left.
