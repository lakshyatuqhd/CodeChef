# NODEPRO01A

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Setting up frontend and server

Let's begin with first making our `server.js` which will be our main server file.

To get our server running we need some files to serve as frontend.

#### Task:
- Complete the serving of public folder for css.
- Complete the serving of frontend files from views folder.
- Set the / route as home route and serve the index.ejs file from views folder.
- Create a notes folder to which works as our database.
#### Expected output after the rendering:

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-20T07:05:26.097Z  

```cpp
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
```

---

[View on CodeChef](https://www.codechef.com/problems/NODEPRO01A)