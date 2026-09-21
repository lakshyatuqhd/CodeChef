import dotenv from 'dotenv'; 

dotenv.config(); // Load environment variables

const app = express();

const PORT = process.env.PORT || 8080;
const MONGO_URI = process.env.MONGO_URI;

// Connect to MongoDB
mongoose.connect(MONGO_URI)
    .then(() => console.log('✅ MongoDB Connected successfully!'))
    .catch(err => {
        console.error('❌ MongoDB connection error:', err.message);
        process.exit(1); // Exit if connection fails
    });

app.get('/', (req, res) => {
    res.send('Blog API is running...');
});