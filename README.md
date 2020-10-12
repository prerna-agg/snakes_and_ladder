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

#### Gameplay:-
Each player starts with a token on the starting square (usually the "1" grid square in the bottom left corner, or simply, off the board next to the "1" grid square). Players take turns rolling a single die to move their token by the number of squares indicated by the die roll. Tokens follow a fixed route marked on the gameboard which usually follows a boustrophedon (ox-plow) track from the bottom to the top of the playing area, passing once through every square. If, on completion of a move, a player's token lands on the lower-numbered end of a "ladder", the player moves the token up to the ladder's higher-numbered square. If the player lands on the higher-numbered square of a "snake" (or chute), the token must be moved down to the snake's lower-numbered square.

If a 6 is rolled the player, after moving, immediately rolls again for another turn; otherwise play passes to the next player in turn. The player who is first to bring their token to the last square of the track is the winner.