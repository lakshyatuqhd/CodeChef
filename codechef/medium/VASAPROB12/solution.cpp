print("Documents scanned after index: " + fastSearch.executionStats.totalDocsExamined);

const fastSearch = db.staff.find({ empId: 4500 }).explain("executionStats");

db.staff.createIndex({ empId: 1 });
print("Documents scanned before index: " + slowSearch.executionStats.totalDocsExamined);

const slowSearch = db.staff.find({ empId: 4500 }).explain("executionStats");
}
db.staff.insertMany(employees);
    });
        department: "Engineering"
        name: "Employee_" + i,
        empId: 1000 + i,
    employees.push({
for (let i = 1; i <= 5000; i++) {
const employees = [];

db.staff.drop();

db = connect('mongodb://localhost:27017/hr_db');