                                                                                                                              _id: newUser._id,
                                                                                                                                    id: newUser._id,
                                                                                                                                          username: newUser.username
                                                                                                                                              });

                                                                                                                                                } catch (error) {
                                                                                                                                                    return res.status(500).json({ message: 'Server error', error: error.message });
                                                                                                                                                      }
                                                                                                                                                      });

                                                                                                                                                      export default router;