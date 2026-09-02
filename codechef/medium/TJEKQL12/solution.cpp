const express = require('express');
const app = express();
const port = 3000;

const timeLogger = (req, res, next) => {
  const currentTime = new Date().toLocaleString('en-IN', { timeZone: 'Asia/Kolkata' });
  console.log(`Time: ${currentTime}`);
  next();
};


app.use(timeLogger);

// Routes
app.get('/', (req, res) => {
  res.send('Home Page');
});

app.listen(port, () => {
  console.log(`Server listening on port ${port}`);
});
