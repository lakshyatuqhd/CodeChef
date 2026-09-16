# VBHXB104

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Serve product data as JSON and display a welcome HTML

Okay, let's put what you've learned about response formatting into practice. We're going to build a small Express application that does two things:

- Serves product data as JSON when a user visits the /products route.
- Displays a welcome message as HTML when a user visits the root route (/).
#### Task:

Complete the given code by filling the blanks with correct code to send both responses in HTML as well as JSON format.

 **Expected Output** 
Your Home page should be look like this

Your `/products` page should be look like this

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-16T05:43:02.240Z  

```cpp
const express = require('express');
const app = express();

app.get('/', (req, res) => {
res.send('<h1>Welcome to our store!</h1>');
});

app.get('/products', (req, res) => {
const products = [
{ id: 1, name: 'Laptop', price: 999 },
{ id: 2, name: 'Keyboard', price: 75 },
{ id: 3, name: 'Mouse', price: 25 }
];
res.json(products);
});

const PORT = 3000;
app.listen(PORT, () => {
console.log(`Server is running on http://localhost:${PORT}`);
});
```

---

[View on CodeChef](https://www.codechef.com/problems/VBHXB104)