# Game Rules

## Credits
Rules developed by Matthew James Romano.

## Core Rules (v0.0.1)
Each player has 3 units or game pieces, and each player has a power bar with a maximum of 100%.
To activate a unit, 40% power is required; this power is consumed upon activation.
A player’s turn ends when they don’t have enough power to activate another unit or if they choose to end their turn manually.

## Energy Rules
At the start of a turn, the player regenerates 60% of their maximum power.
If a player has a unit on one or both power squares in the middle of the board, they gain an additional 20% power per occupied square at the start of their turn (both squares occupied = +40%).
Power cannot exceed 100%.

## Board Rules
The board is an 8×8 rectangular grid.
Power squares are fixed in the middle of the board.
Each player has a home square on their side of the board.
If an opponent moves a unit onto your home square, you lose immediately.
Conversely, if you move a unit onto the opponent’s home square, you win immediately.
Units cannot occupy the same tile as another unit.

## Unit Rules
Each player has 3 units.
Units can perform the following:
  - Move: Move 1 tile orthogonally per activation.
  - Attack: Attack an adjacent unit (orthogonal). Attacking ends the unit’s activation.
Units can be activated multiple times per turn if the first activation was a move and the player has enough energy.
Units start with 3 HP.

## Turn Rules
Turns alternate strictly between players.
On a player’s turn:
  1. Regenerate 60% power (+20% per occupied power square).
  2. Decide which units to activate based on available power.
  3. Activate units to move or attack.
The turn ends when the player has insufficient power to activate another unit or chooses to end their turn.

## Win Conditions
Elimination: A player wins if all their opponents units’ HP are reduced to 0.
Home square victory: A player wins if they move a unit onto the opponent’s home square.
