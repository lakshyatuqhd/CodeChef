};

setTaskInput("");
}
if (taskInput.trim() !== "") {
addTask(taskInput);

const handleAdd = () => {
const [taskInput, setTaskInput] = useState("");
function TaskInput({ addTask }) {
// Component for input field

}
);
</div>
<TaskList tasks={tasks} removeTask={removeTask} />
{/* Pass tasks and removeTask to TaskList */}
<TaskInput addTask={addTask} />
<h2>To-Do List</h2>
<div style={{ textAlign: "center", marginTop: "50px" }}>

return (
}
setTasks(prevTasks => prevTasks.filter((_, index) => index !== indexToRemove));
// Use filter() to create new array without the task
// this should remove task by index
function removeTask(indexToRemove) {
// Function to remove a task

}