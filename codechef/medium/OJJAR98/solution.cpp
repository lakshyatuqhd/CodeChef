                                                                                                            <input
                                                                                                                    type="email"
                                                                                                      <label htmlFor={`${uniqueId}-email`}>Email:</label>
                                                                                          />
                                                                                                
                                                                                    onChange={(e) => setName(e.target.value)}
                                                                            value={name}
                                                                    className="input-field"
                                                            id={`${uniqueId}-name`}
                                                    type="text"
                                            <input
                                      <label htmlFor={`${uniqueId}-name`}>Name:</label>
                          }

                            return (
                                <form className="simple-form" onSubmit={handleSubmit}>
                        setEmail("");
                    setName(""); // Clear the input fields
            event.preventDefault();
                console.log("Submitted:", { name, email });
import "./App.css";

// eslint-disable-next-line react/prop-types
function SimpleForm({ name: initialName = "", email: initialEmail = "" }) {
  const [name, setName] = useState(initialName);
    const [email, setEmail] = useState(initialEmail);
      const uniqueId = useId(); // Hooks must be called at the top level

        function handleSubmit(event) {
import { useState, useId } from "react";