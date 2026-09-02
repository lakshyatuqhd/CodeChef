# JBFUYU02

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Mapping REST Principles to a To-Do List API

Great job understanding the core principles of REST! Now, let's put that knowledge into practice.

Given is a very simple Express application for a To-Do list. Instead of using a database, it uses a hardcoded JavaScript array to store the tasks. This keeps the code simple so we can focus on the concepts.

#### Task:

Your task is to add all the important REST methods according to the route. Like `get`, `post`, `put`, `delete`.

### Note:

The frontend ` mini POSTMAN` is build for just testing the URLs we are buidling in this problem.
Don't worry about how it works, just focus on the backend you are learning. We will learn about how to connect the backend and frontend in the future lessons.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-02T06:41:38.803Z  

```cpp

  const task = tasks.find(t => t.id == req.params.id);
  if (task) {
    task.text = req.body.text;
    res.json(task);
  } else {
    res.status(404).json({ error: 'Task not found' });
  }
});

app.delete('/tasks/:id', (req, res) => {

  const index = tasks.findIndex(t => t.id == req.params.id);
  if (index !== -1) {
    tasks.splice(index, 1);
    res.status(204).send();
  } else {
    res.status(404).json({ error: 'Task not found' });
  }
});

const PORT = 8080;
app.listen(PORT, () => {


  console.log(`Server running on port ${PORT}`);
});

```

---

[View on CodeChef](https://www.codechef.com/problems/JBFUYU02)