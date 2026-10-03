setScore((prev) => prev + 1);
setCircles((prev) => prev.filter((c) => c.id !== id));
};

return (
<div className="App">
<h1>Score: {score}</h1>
<h2>Time Left: {timeLeft}s</h2>

{timeLeft === 0 ? (
<div>Game Over! Final Score: {score}</div>
) : (
<div className="game-area">
{circles.map((circle) => (
<Circle
key={circle.id}
x={circle.x}
y={circle.y}
onClick={() => handleCircleClick(circle.id)}
/>
))}
</div>
)}
</div>
);
}

export default App;