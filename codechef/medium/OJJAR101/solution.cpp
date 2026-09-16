                                        if (inputRef.current) {
                                              inputRef.current.blur();
                                                  }
                                                      setIsFocused(false);
                                                        };

                                                          return (
                                                              <div className="container">
                                                                    <input
                                                                            ref={inputRef}
                                                                                    type="text"
                                                                                            className={`input-field ${isFocused ? 'input-focused' : ''}`}
                                                                                                    placeholder="Click buttons to focus/blur"
                                                                                                          />

                                                                                                                <div className="button-group">
                                                                                                                        <button className="action-button" onClick={handleFocus}>
                                                                                                                                  Focus Input
                                                                                                                                          </button>
                                                                                                                                                  <button className="action-button" onClick={handleBlur}>
                                                                                                                                                            Blur Input
                                                                                                                                                                    </button>
                                                                                                                                                                          </div>
                                                                                                                                                                              </div>
                                                                                                                                                                                );
                                                                                                                                                                                }

                                                                                                                                                                                export default FocusManager;