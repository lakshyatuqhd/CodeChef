const fs = require('fs');
const path = require('path');

router.get('/add', (req, res) => {
res.render('add-note');
});

router.post('/add', (req, res) => {
const { title, content } = req.body;

if (!title || !content) {
return res.send('Missing fields');
}

const filePath = path.join(__dirname, '..', 'notes', `${title}.txt`);

fs.writeFile(filePath, content, (err) => {
if (err) {
return res.status(500).send('Error saving note');
}
res.send('Note saved');
});
});

module.exports = router;
