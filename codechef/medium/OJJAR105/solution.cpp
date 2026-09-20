                                                                      }, []);

                                                                        return (
                                                                            <div>
                                                                                  <p>Window width: {windowSize.width}px</p>
                                                                                        <p>Window height: {windowSize.height}px</p>
                                                                                            </div>
                                                                                              );
                                                                                              }

                                                                                              export default function App() {
                                                                                                const [showTracker, setShowTracker] = useState(true);

                                                                                                  return (
                                                                                                      <div>
                                                                                                            <button onClick={() => setShowTracker(!showTracker)}>
                                                                                                                    Toggle Window Tracker
                                                                                                                          </button>
                                                                                                                                {showTracker && <WindowTracker />}
                                                                                                                                    </div>
                                                                                                                                      );
                                                                                                                                      }