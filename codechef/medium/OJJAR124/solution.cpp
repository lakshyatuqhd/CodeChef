              };

                const handleNext = () => {
                    setActiveTabIndex((prevIndex) => Math.min(prevIndex + 1, totalTabs - 1));
                      };

                        const handlePrevious = () => {
                            setActiveTabIndex((prevIndex) => Math.max(prevIndex - 1, 0));
                              };

                                return (
                                    <div className="App">
                                          <h1>Job Application Form</h1>
                                                {/* 2. Pass the Handler to Tabs */}
                                                      <Tabs
                                                              activeTabIndex={activeTabIndex}
                                                                      onTabClick={handleTabClick}
                                                                              onNext={handleNext}
                                                                                      onPrevious={handlePrevious}
                                                                                            />
                                                                                                </div>
                                                                                                  );
                                                                                                  }

                                                                                                  export default App;