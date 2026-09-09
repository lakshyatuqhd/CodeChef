# VBHXB13

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Delayed Order Confirmation

Let's simulate an online order confirmation process. We'll use both synchronous and asynchronous operations to illustrate the difference.

 **The Task:** 

A user places an order. We want to print three messages: "Order placed!", "Confirming order...", and "Order confirmed!".
However, we want to delay the "Confirming order..." message by 2 seconds using `setTimeout`.
This will demonstrate how asynchronous operations allow the program to continue executing while waiting for the order confirmation.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-09T07:05:24.433Z  

```cpp
console.log("Order placed!");

setTimeout(() => {
        console.log("Confirming order...");
}, 2000);

console.log("Order confirmed!");

```

---

[View on CodeChef](https://www.codechef.com/problems/VBHXB13)