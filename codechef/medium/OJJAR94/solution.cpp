                                  const handleTextChange = (e) => {
                                      setSharedText(e.target.value);
                                        };

                                          return (
                                              <div>
                                                    <h2>Type in either box:</h2>
                                                          <TextInput value={sharedText} onChange={handleTextChange} />
                                                                <br />
                                                                      <TextInput value={sharedText} onChange={handleTextChange} />
                                                                          </div>
                                                                            );
                                                                            }
                              );
                              }

                              // Parent Component serving as the single source of truth
                              function App() {
                                const [sharedText, setSharedText] = useState('');

                        onChange={onChange} 
                            />
            type="text" 
                  value={value} 
  return (
      <input 
function TextInput({ value, onChange }) {

// Child Component receiving shared state and handler via props
import { useState } from 'react';