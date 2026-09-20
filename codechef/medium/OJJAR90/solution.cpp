
{/* Display the list of todos */}
<div className="todo-list">
{todos.length === 0 ? (
// Message shown when there are no todos
<p className="empty-message">No todos available</p>
) : (
// Map over todos to render each item
todos.map(todo => (
<div key={todo.id} className={`todo-item ${todo.completed ? 'completed' : ''}`}>
<input
type="checkbox"
checked={todo.completed}
onChange={() => toggleComplete(todo.id)}
/>
<span>{todo.text}</span>
</div>
))
)}
</div>
</div>
);
}

export default App;