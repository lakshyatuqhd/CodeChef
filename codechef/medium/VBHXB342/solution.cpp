                                                            } finally {
                                                                    setLoading(false);
                                                                          }
                                                                              };
                                                                                  fetchBlogs();
                                                                                    }, []);

                                                                                      if (loading) {
                                                                                          return <div className="container"><p>Loading blogs...</p></div>;
                                                                                            }

                                                                                              return (
                                                                                                  <div className="container">