const requestCounter = (req, res, next) => {
  const route = req.path;

  if (!routeCounts[route]) {
    routeCounts[route] = 0;
  }

  routeCounts[route]++;

  console.log(`Route: ${route}, Count: ${routeCounts[route]}`);

  next();
};

app.use(requestCounter);

app.get('/', (req, res) => {
  res.send('Home Page');
});

app.get('/about', (req, res) => {
  res.send('About Page');
});

app.listen(port, () => {
  console.log(`Server listening on port ${port}`);
});
