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