# OJJAR200

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Handling Player Input

Implement functionality to detect when the player presses any of the four arrow keys: `ArrowLeft`, `ArrowRight`, `ArrowUp`, or `ArrowDown`.

#### Requirements:
- Monitor keyboard events and identify when an arrow key is pressed.
- Upon detecting a key press: Log the corresponding key to the console in the following format: If the user presses the left arrow key, log: "ArrowLeft pressed" If the user presses the right arrow key, log: "ArrowRight pressed" If the user presses the up arrow key, log: "ArrowUp pressed" If the user presses the down arrow key, log: "ArrowDown pressed"

 **Your app should be work like that at the end**   **How it works** 

- Click the Toggle Console button >_.
- Console opens inside the app.
- Press the arrow keys (← ↑ → ↓) to move tiles.
- Check the console for instant move updates.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-02T14:55:44.340Z  

```cpp
case 'ArrowRight':
console.log('ArrowRight pressed');
break;
case 'ArrowUp':
console.log('ArrowUp pressed');
break;
case 'ArrowDown':
console.log('ArrowDown pressed');
break;
default:
break;
}
};

window.addEventListener('keydown', handleKeyDown);

return () => {
window.removeEventListener('keydown', handleKeyDown);
};
}, []);

return (
<div>
<h1>Handling Player Input</h1>
<p>Press arrow keys to see logs in the console.</p>
</div>
);
}
```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR200)