import express from 'express';
import jwt from 'jsonwebtoken';
import User from '../models/User.js'; 

const router = express.Router();

router.post('/register', async (req, res) => {
    const { username, password } = req.body; 

    if (!username || !password) {
        return res.status(400).json({ message: 'Please enter all fields' });
    }

    try {
        let user = await User.findOne({ username });
        if (user) {
            return res.status(400).json({ message: 'User already exists' });
        }

        user = new User({ username, password });

        await user.save();