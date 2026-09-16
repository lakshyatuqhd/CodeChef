import { useState, useEffect } from "react";

function MouseTracker() {
  const [position, setPosition] = useState({ x: 0, y: 0 });

  useEffect(() => {
    const handleMove = (e) => {
      setPosition({ x: e.clientX, y: e.clientY });
    };

    window.addEventListener("mousemove", handleMove);

  }, []);

  return <div>Cursor at ({position.x}, {position.y})</div>;
}

export default function App() {
  return (
    <div>
      <h1>Mouse Tracker</h1>
      <MouseTracker />
    </div>
  );
}
