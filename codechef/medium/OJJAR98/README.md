# OJJAR98

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Rules of Hooks
#### Task: Fix the Hook Usage

In our IDE you are given a component that violates the Rules of Hooks. Identify the mistake and correct the code.

Once done, submit your solution to verify correctness.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-17T15:57:27.570Z  

```cpp
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
```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR98)