# VBHXB15

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Simulate Coffee Brewing Process

Let's create a worked example that simulates making a cup of coffee! We'll break the process down into asynchronous steps using Promises and chain them together. This will demonstrate how Promise chains can manage a sequence of operations.

Here's the scenario:

- Grind Beans: This asynchronous function will simulate grinding coffee beans. It will resolve with the string "Ground coffee beans".
- Brew Coffee: This asynchronous function will take the ground beans as input and simulate brewing the coffee. It will resolve with the string "Brewed coffee".
- Add Milk: This asynchronous function will take the brewed coffee as input and simulate adding milk. It will resolve with the string "Coffee with milk".

We'll use `setTimeout` to simulate the time each step takes. We'll also include a final `console.log` to confirm the entire process is asynchronous.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-09T07:06:21.653Z  

```cpp
    })
      return addMilk(brewedCoffee);
      console.log("2. Coffee brewed:", brewedCoffee);
    .then((brewedCoffee) => {
    })
      return brewCoffee(groundBeans);
      console.log("1. Beans ground:", groundBeans);
    .then((groundBeans) => {
  grindBeans()
  
  }
    });
      }, 500);
        resolve("Coffee with milk: " + brewedCoffee);
      setTimeout(() => {
      setTimeout(() => {
        resolve("Brewed coffee with " + groundBeans);
      }, 500);
    });
  }
  
  function addMilk(brewedCoffee) {
    return new Promise((resolve) => {
  function brewCoffee(groundBeans) {
    return new Promise((resolve) => {
  
  }
    });
      }, 500);
        resolve("Ground coffee beans");
      setTimeout(() => {
    return new Promise((resolve) => {
function grindBeans() {
```

---

[View on CodeChef](https://www.codechef.com/problems/VBHXB15)