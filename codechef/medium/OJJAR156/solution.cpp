console.log('Child rendered!');
return (
<button className="child-button" onClick={onClick}>
Increment Counter
</button>
);
});

function Parent() {
const [count, setCount] = useState(0);

// Stabilized function reference using useCallback
const handleIncrement = useCallback(() => {
setCount(c => c + 1);
}, []);

return (
<div className="parent-container">
<p className="counter-text">Count: {count}</p>
<ChildButton onClick={handleIncrement} />
</div>
);
}

export default Parent;
// Memoized child component
const ChildButton = memo(function ({ onClick }) {
import { useState, memo, useCallback } from 'react';
import './App.css';
