return (
<div className="child-container">
Heavy Calculation Result: {sum} (Data: {data})
</div>
);
});

// Parent Component
function ParentComponent() {
const [count, setCount] = useState(0);

return (
<div className="parent-container">
<button
className="counter-button"
onClick={() => setCount(c => c + 1)}
>
Click to Increment: {count}
</button>
<ExpensiveOperationChild data="hello" />
</div>
);
}

export default ParentComponent;