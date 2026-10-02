
return () => clearTimeout(timer);
}, []);

const toggleModal = () => {
setShowModal((prev) => !prev);
};

return (
<div className="App">
<button onClick={toggleModal}>
{showModal ? 'Hide' : 'Show'}
</button>

{showModal && (
<div className="modal">
<div className="modal-content">
<h2>Hello</h2>
<p>Welcome to our application!</p>
<button onClick={toggleModal}>Close</button>
</div>
</div>
)}
import React, { useState, useEffect } from 'react';
import './App.css';

function App() {
const [showModal, setShowModal] = useState(false);

useEffect(() => {
const timer = setTimeout(() => {
setShowModal(true);
}, 1000);