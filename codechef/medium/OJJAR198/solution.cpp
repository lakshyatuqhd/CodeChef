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