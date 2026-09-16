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
**Submitted:** 2026-09-16T06:57:22.715Z  

```cpp
                          }

                            return (
                                <form className="simple-form" onSubmit={handleSubmit}>
                                      <label htmlFor={`${uniqueId}-name`}>Name:</label>
                                            <input
                                                    type="text"
                                                            id={`${uniqueId}-name`}
                                                                    className="input-field"
                                                                            value={name}
                                                                                    onChange={(e) => setName(e.target.value)}
                                                                                          />
                                                                                                
                                                                                                      <label htmlFor={`${uniqueId}-email`}>Email:</label>
                                                                                                            <input
                                                                                                                    type="email"
                                                                                                                            id={`${uniqueId}-email`}
                                                                                                                                    className="input-field"
                                                                                                                                            value={email}
                                                                                                                                                    onChange={(e) => setEmail(e.target.value)}
                                                                                                                                                          />
                                                                                                                                                                
                                                                                                                                                                      <button type="submit">Submit</button>
                                                                                                                                                                          </form>
                                                                                                                                                                            );
                                                                                                                                                                            }

                                                                                                                                                                            export default SimpleForm;
```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR98)