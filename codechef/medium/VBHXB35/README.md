# VBHXB35

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### The Countdown Challenge!

You're building a countdown timer that:

1] Starts immediately after the program runs (setImmediate)
2] Prints a countdown every second (setInterval)
3] Prints a final message and stops the countdown after 3 seconds (setTimeout)

However, the code is incomplete. Fill in the blanks to complete it using the correct timer functions.

 **Expected Output:** 

```
Countdown is starting...
3 seconds left
2 seconds left
1 seconds left
Countdown complete!

```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-16T06:38:04.804Z  

```cpp

                                                                        module.exports = { runCountdown };

                                                                        if (require.main === module) {
                                                                            runCountdown();
                                                                            }

                                                                        }
                                                                    console.log("Countdown complete!");
                                                                        }, 3100);
                                                    setTimeout(() => {
                                                            clearInterval(intervalId);
                                                }, 1000);

                                    console.log(`${count} seconds left`);
                                            count--;
                            const intervalId = setInterval(() => {


                        let count = 3;
                    });
                console.log("Countdown is starting...");
        setImmediate(() => {
function runCountdown() {
```

---

[View on CodeChef](https://www.codechef.com/problems/VBHXB35)