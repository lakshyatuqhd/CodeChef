
  const handleKeyDown = (e) => {
    let newBoard;
    if (e.key === 'ArrowLeft') newBoard = moveLeft(board);
    else if (e.key === 'ArrowRight') newBoard = moveRight(board);
    else if (e.key === 'ArrowUp') newBoard = moveUp(board);
    else if (e.key === 'ArrowDown') newBoard = moveDown(board);
    else return;

    const updatedBoard = addRandomTile([...newBoard]);
    setBoard(updatedBoard);
  };

  useEffect(() => {
    window.addEventListener('keydown', handleKeyDown);
    return () => window.removeEventListener('keydown', handleKeyDown);
  });

  return (
    <div className="container">
      <h1>2048 Game</h1>
      <div className="board">
        {board.map((row, rowIndex) => (
          <div key={rowIndex} className="row">
            {row.map((cell, cellIndex) => (
              <div key={cellIndex} className={`cell cell-${cell}`}>{cell !== 0 ? cell : ''}</div>
            ))}
          </div>
        ))}
      </div>