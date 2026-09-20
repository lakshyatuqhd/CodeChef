# VBHXB282

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Redis- Example

Here’s a  **worked example**  with  **two routes** :

- /without-cache: Always recomputes and sends a fresh response.
- /with-cache: Uses Redis (mock) to cache the computed value and return it if available.

 **How this works** 

- Hit /without-cache multiple times → response will always change (timestamp updates).
- Hit /with-cache multiple times → first request is "Fresh:", later requests come from Redis (From cache:) with the same value until you restart or reset the cache.

This makes the benefit of caching  **visible instantly**.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-20T15:27:53.273Z  

```cpp

module.exports = app;  // export app (NOT listen)
  });
});

    redisClient.set("cachedGreeting", freshValue);
    res.send(freshValue);
    }
    const freshValue = `Fresh at ${Date.now()}`;
      return res.send(`From cache: ${cachedValue}`);
  redisClient.get("cachedGreeting", (err, cachedValue) => {
    if (cachedValue) {
// --- With cache route ---
app.get("/with-cache", (req, res) => {

});
  res.send(freshValue);
  const freshValue = `Fresh at ${Date.now()}`;
app.get("/without-cache", (req, res) => {
// --- Without cache route ---

app.use(express.json());

const redisClient = redisMock.createClient();
const app = express();

const express = require("express");
const redisMock = require("redis-mock");
```

---

[View on CodeChef](https://www.codechef.com/problems/VBHXB282)