// write your code here
const express = require('express');
const app = express();

const appendHello = (req, res, next) => {
req.message = 'Hello';
next();
};

const appendWorld = (req, res, next) => {
req.message = (req.message ? req.message + ' ' : '') + 'World';
next();
};

app.use(appendHello);
app.use(appendWorld);

app.get('/', (req, res) => {
res.send(req.message.toUpperCase());
});

const port = 3000;
app.listen(port, () => {
console.log(`Server running on port ${port}`);
});