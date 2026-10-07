
type: Boolean,
default: false
}
});

const Todo = mongoose.model('Todo', TodoSchema);
},
completed: {
type: String,
required: true,
trim: true
// Define Todo model
const TodoSchema = new mongoose.Schema({
description: {
.catch(err => console.error('MongoDB Atlas connection error:', err));

})
.then(() => console.log('Connected to MongoDB Atlas'))
useNewUrlParser: true,
useUnifiedTopology: true,
// Connect to MongoDB Atlas
mongoose.connect(MONGO_URI, {
MONGO_URI='mongodb+srv://lakshyatagarapu_db_user:lucky@cluster0.u1ahsol.mongodb.net/?appName=Cluster0'

// MongoDB Atlas connection URI
app.use(express.json());

// Middleware to parse JSON
// CREATE a new todo
app.post('/todos', async (req, res) => {
try {
const { description, completed } = req.body;