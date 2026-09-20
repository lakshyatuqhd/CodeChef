# OJJAR208

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Adding a Restart Game Button

Okay, excellent! You've successfully implemented the Game Over logic. The game now correctly identifies when no more moves are possible and displays the "Game Over" message.

 **Goal:**  Let's give the player the ability to start a new game at any point, especially after a "Game Over" or even during an ongoing game. We'll add a "Restart" button that resets the board and the game state.

 **Conceptual Logic:**  Think about what needs to happen when the "Restart" button is clicked:

- What should the game board be set to? (Hint: How did you initialize it at the very beginning?)
- What should happen to the gameOver status?
- Give the class name restart to your button.

 **Your app should work like this one in the end.**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-20T16:46:32.863Z  

```cpp
    return () => window.removeEventListener('keydown', handleKeyDown);
  }, [board, gameOver]); 

  return (
    <div className="container">
      <h1>2048 Game</h1>
      <div className="board-container"> 
        <div className="board">
          {board.map((row, rowIndex) => (
            <div key={rowIndex} className="row">
              {row.map((cell, cellIndex) => (
                <div key={cellIndex} className={`cell cell-${cell}`}>{cell !== 0 ? cell : ''}</div>
              ))}
            </div>
          ))}
        </div>
        {gameOver && <div className="game-over">Game Over</div>}
      </div>
    </div>
  );
}

export default App;
```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR208)