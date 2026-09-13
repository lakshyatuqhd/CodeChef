# VBHXB70

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Dynamic Greeting Server

Let’s build upon our understanding of Express setup and server responses. Your task is to create a simple Express server that displays a static greeting message.

### Task:
- Use express() to create the server instance.
- Define a greeting constant that holds the static message to be displayed.
- Set up a GET route (/) that sends the greeting as the response.
- Start the server on port 3000 and log a message once it's running.

For example:

- When you access the root route in the browser, it will always display: Hello, there!

This is a basic static Express server that’s great for learning route setup, server configuration, and handling HTTP requests using Express.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-13T12:18:46.210Z  

```cpp
// write your code here.
// write your code here.
const express = require('express');
const app = express();
const PORT = 3000;
const greeting = 'Hello, there!';

app.get('/', (req, res) => {
  res.send(greeting);
  });

  app.listen(PORT, () => {
    console.log(`Server is running on port ${PORT}`);
    });
```

---

[View on CodeChef](https://www.codechef.com/problems/VBHXB70)