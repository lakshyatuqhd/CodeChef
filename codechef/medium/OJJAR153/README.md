# OJJAR153

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Task Statement

 **Problem:** 
We have a parent component (**`ParentComponent`**) that updates a counter. However, every time the counter changes, it causes the child component (**`ExpensiveOperationChild`**) to re-render unnecessarily, even though the child's props never change. This child component simulates a heavy computation (like processing a large list) with a loop, making unnecessary re-renders costly.

 **Your task**  is to optimize this using  **`React.memo`**  so that the child component only re-renders when its props actually change.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-20T06:40:20.629Z  

```cpp
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
```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR153)