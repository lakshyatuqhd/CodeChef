                                                                                                                            console.error('❌ Error creating student:', error);
                                                                                                        const savedStudent = await newStudent.save();
                                                                                                                console.log('📝 Student Created:', savedStudent);
                                                                                                                    } catch (error) {
                                                                            major: 'Computer Science',
                                                                                        enrollmentDate: new Date('2021-08-01')
                                                                                                });

                                        const newStudent = new Student({
                                                    fullName: 'George Hotz',
                                                                studentId: '01',
                            async function createStudent() {
                                try {

                            // Create Operation
                            console.error('❌ MongoDB Atlas connection error:', err);
                            });
mongoose.connect(MONGODB_URI, {
    useNewUrlParser: true,
        useUnifiedTopology: true
        }).then(() => {
            console.log('✅ Connected to MongoDB Atlas!');
                console.log('✅ Student Model Imported Successfully!');
                    console.log('📛 Model Name:', Student.modelName);
                        runPractice();
                        }).catch(err => {
// Connect to MongoDB and run practice
const MONGODB_URI = 'mongodb+srv://lakshyatagarapu_db_user:lucky@cluster0.u1ahsol.mongodb.net/?appName=Cluster0';

// MongoDB Atlas Connection URI

const Student = require('./models/student');
const mongoose = require('mongoose');