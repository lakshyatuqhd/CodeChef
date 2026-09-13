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