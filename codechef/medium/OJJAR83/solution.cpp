                      setTemperature((temperature * 9) / 5 + 32);
                            setUnit("F");
                                } else {
                                      setTemperature(((temperature - 32) * 5) / 9);
                                            setUnit("C");
                                                }
                                                  };

                                                    return (
                                                        <div className={styles.wrapper}>
                                                              <h1>Temperature Converter</h1>
                                                                    <div className={styles.display}>
                                                                            {temperature.toFixed(2)} <span>°{unit}</span>
                                                                                  </div>

                                                                                        <div className={styles.controls}>
                                                                                                <button onClick={() => setTemperature(temperature + 1)}>Increase</button>
                                                                                                        <button onClick={() => setTemperature(temperature - 1)}>Decrease</button>
                                                                                                                <button onClick={convertTemperature}>
                                                                                                                          {unit === "F" ? "Convert to Celsius" : "Convert to Fahrenheit"}
                                                                                                                                  </button>
                                                                                                                                        </div>
                                                                                                                                            </div>
                                                                                                                                              );
                                                                                                                                              }