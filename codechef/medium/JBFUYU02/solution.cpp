
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
