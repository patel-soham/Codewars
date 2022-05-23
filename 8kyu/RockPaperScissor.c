Examples:

rps('scissors','paper') // Player 1 won!
rps('scissors','rock') // Player 2 won!
rps('paper','paper') // Draw!
*/

enum tool {ROCK, PAPER, SCISSORS};
enum outcome {P1_WON, P2_WON, DRAW};

enum outcome rps (enum tool p1, enum tool p2)
{
  if (p1 == p2){
    return DRAW;
  }
  else if (p1 - p2 == 1 ||  p2 - p1 == 2){
    return P1_WON;
  }
  else{
    return P2_WON;
  }
	
}

/* Clever

 if (p1 == p2)
  {
    return DRAW;
  }
  //      PAPER + 1 % 3     = ROCK
  //      ROCK + 1  % 3     = SCISSORS
  //      SCISSORS + 1 % 3  = PAPER
  return (p1 + 1) % 3 == p2 ? P2_WON : P1_WON;
*/
