const path = require('path');
const fs = require('fs');
const app = express();
const PORT = process.env.PORT || 3000;

app.use(express.urlencoded({ extended: true }));
app.use(express.json());

app.use(express.static(path.join(__dirname, 'public')));

app.set('views', path.join(__dirname, 'views'));
app.set('view engine', 'ejs');

const notesDir = path.join(__dirname, 'notes');
if (!fs.existsSync(notesDir)) {
fs.mkdirSync(notesDir, { recursive: true });
}

app.get('/', (req, res) => {
res.render('index');
});

app.listen(PORT, () => {
console.log(`Server running at http://localhost:${PORT}`);
});