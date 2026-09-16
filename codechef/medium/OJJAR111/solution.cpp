
                                                                              // 4. Cleanup function
                                                                                  return () => {
                                                                                        // Remove the resize listener
                                                                                              window.removeEventListener("resize", handleResize);
                                                                                                    // Clear any pending timeout
                                                                                                          clearTimeout(timeoutId);
                                                                                                              };
                                                                                                                }, [delay]); // Include delay in the dependency array

                                                                                                                  // 5. Return current width
                                                                                                                    return width;
                                                                                                                    };

                                                                                                                    const ResponsiveComponent = () => {
                                                                                                                      const width = useWindowWidth();

                                                                                                                        return (
                                                                                                                            <div style={{ padding: "20px", textAlign: "center" }}>
                                                                                                                                  <h2>Current Window Width:</h2>
                                                                                                                                        <p style={{ fontSize: "24px", fontWeight: "bold", color: "blue" }}>
                                                                                                                                                {width}px
                                                                                                                                                      </p>
                                                                                                                                                          </div>
                                                                                                                                                            );
                                                                                                                                                            };

                                                                                                                                                            export default ResponsiveComponent;