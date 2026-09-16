const express = require('express');
const path = require('path');
const app = express();

app.use(express.urlencoded({ extended: false }));
app.use(express.json());
app.use(express.static(path.join(__dirname, 'public')));

app.post('/add-todo-form', (req, res) => {
console.log('Form To-Do received:');
console.log(req.body);
res.send('To-Do added!');
});

app.post('/add-todo-json', (req, res) => {
console.log('JSON To-Do received:');
console.log(req.body);
res.json({ message: 'To-Do added successfully!', data: req.body });
});

const PORT = 3000;
app.listen(PORT, () => {
console.log(`Server listening on port ${PORT}`);
});