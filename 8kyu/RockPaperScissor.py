"""
Let's play! You have to return which player won! In case of a draw return Draw!.

Examples:

rps('scissors','paper') // Player 1 won!
rps('scissors','rock') // Player 2 won!
rps('paper','paper') // Draw!
"""

def rps(p1, p2):
    if (p1 == p2):
        return "Draw!"
    elif (p1 == "scissors" and p2 == "rock"):
        return "Player 2 won!"
    elif (p1 == "rock" and p2 == "paper"):
        return "Player 2 won!"
    elif (p1 == "paper" and p2 == "scissors"):
        return "Player 2 won!"
    else:
        return "Player 1 won!"

"""
Clever and best
----------------
def rps(p1, p2):
    beats = {'rock': 'scissors', 'scissors': 'paper', 'paper': 'rock'}
    if beats[p1] == p2:
        return "Player 1 won!"
    if beats[p2] == p1:
        return "Player 2 won!"
    return "Draw!"
    
Clever
------
def rps(p1, p2):
    hand = {'rock':0, 'paper':1, 'scissors':2}
    results = ['Draw!', 'Player 1 won!', 'Player 2 won!']
    return results[hand[p1] - hand[p2]]
"""
