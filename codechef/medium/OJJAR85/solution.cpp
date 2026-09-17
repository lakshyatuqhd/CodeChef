
                            return (
                                <div className="container">
                                      <h2>useState Form Value Demo</h2>

                                            {/* Update the input field bound to the state variable 'value' */}
                                                  <input
                                                          type="text"
                                                                  value={value}
                                                                          onChange={(e) => setValue(e.target.value)}
                                                                                  placeholder="Type something..."
                                                                                          className="input-field"
                                                                                                />

                                                                                                      {/* Update Display the live value from the state */}
                                                                                                            <div className="output-box">
                                                                                                                    <p>Live Display: {value}</p>
                                                                                                                          </div>

                                                                                                                                <button onClick={generateRandomString}>
                                                                                                                                        Generate Random String
                                                                                                                                              </button>
                                                                                                                                                  </div>
                                                                                                                                                    );
                                                                                                                                                    }