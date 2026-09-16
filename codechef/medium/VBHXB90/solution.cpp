  next();
};

app.use(requestCounter);

app.get('/', (req, res) => {
  res.send('Home Page');
});

___________________________ {
  res.send('About Page');
});

app.listen(port, () => {
  console.log(`Server listening on port ${port}`);
});

  console.log(`Route: ${route}, Count: ${routeCounts[route]}`);

  }

  routeCounts[route]++;
  if (!routeCounts[route]) {
    routeCounts[route] = 0;
const requestCounter = (req, res, next) => {
  const route = req.path;


const routeCounts = {};

const app = express();
const port = 3000;
const express = require('express');