# OJJAR198

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Setting Up and Displaying the Initial Board

For your very first task, we'll focus on the basics: creating the data structure for an empty game board and rendering it on the screen.

 **Your Goals for this Project:** 

- Create an Empty Board Function: Implement a JavaScript function, let's name it getEmptyBoard(). Should be return this type of array [ [0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0], [0, 0, 0, 0] ]
- Display the Board in Your Main Application Component (App) Your main App component will be responsible for holding the board's data and rendering it. Class Names to Use: container - for the outermost div of the app board - for the div wrapping the entire board row - for each row in the board cell - for each individual cell in the board

 **Your app should look like this in the end**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-20T16:38:20.581Z  

```cpp
  return Array(GRID_SIZE).fill(null).map(() => Array(GRID_SIZE).fill(0));
  }

  function App() {
    const [board, setBoard] = useState(getEmptyBoard());

      return (
          <div className="container">
                <h1>2048 Game</h1>
                      <div className="board">
                              {board.map((row, rowIndex) => (
                                        <div key={rowIndex} className="row">
                                                    {row.map((cell, cellIndex) => (
                                                                  <div key={cellIndex} className="cell">
                                                                                  {cell !== 0 ? cell : ''}
                                                                                                </div>
                                                                                                            ))}
                                                                                                                      </div>
                                                                                                                              ))}
                                                                                                                                    </div>
                                                                                                                                        </div>
                                                                                                                                          );
                                                                                                                                          }

                                                                                                                                          export default App;
```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR198)