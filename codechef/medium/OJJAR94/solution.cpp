                  value={value} 
                        onChange={onChange} 
                            />
                              );
                              }

                              // Parent Component serving as the single source of truth
                              function App() {
                                const [sharedText, setSharedText] = useState('');

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

                                                                            export default App;