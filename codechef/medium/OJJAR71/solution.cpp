import React from "react";

const StudentList = () => {
  const students = [
    { name: "John", age: 20 },
    { name: "Emma", age: 22 },
    { name: "Liam", age: 19 },
    { name: "Olivia", age: 21 }
  ];

  return (
    <div>
      {students.map((student) => (
        <div className="student-card">
          <h3>{student.name}</h3>
          <p>Age: {student.age}</p>
        </div>
      ))}
    </div>
  );
};

export default StudentList;