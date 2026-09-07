# VBHXB22

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Simulate File Processing with Error Handling

Let's practice how to handle errors in using different functions:

### Task:
- Complete the code to handle errors using async/await.
- Complete the code to handle errors using.then()/.catch().
- Complete the code to handle errors using callback function and print the result or error in the given way:

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-07T10:21:18.420Z  

```cpp
function fetchWeather(city) {
    return new Promise((resolve, reject) => {
      setTimeout(() => {
        const success = Math.random() > 0.5;
        if (success) {
          resolve({ city, temp: "30°C", condition: "Sunny" });
        } else {
          reject(`Error: Could not fetch weather for ${city}`);
        }
      }, 50);
    });
  }
  
  async function getWeatherAsync(city) {
      // Using async/await
   try {
    const result = await fetchWeather(city);
    console.log("Async/Await:",result);
} catch (error) {
  console.log("Async/Await Error:", error);
}
      

  }
  
  function getWeatherPromise(city) {
      // Using .then()/.catch()
    fetchWeather(city)
    .then(result => {
      console.log("promise:",result);
    })
    .catch(error => {
      console.log("promise Error:",error);
```

---

[View on CodeChef](https://www.codechef.com/problems/VBHXB22)