                                                                                                                    throw new Error(data.message || 'Submission failed');
                                                                                                                          }
                                                                                                    if (!response.ok) {
                                                                                                            // 3. Error handling for non-OK responses
                                                                                              const data = await response.json();

                                                                                        });

                                                                                  body: JSON.stringify({ name, email }),
                                                                          },

                                                                                                                                setStatus('success');
                                                                                                                                      // Clear form fields on successful submission
                                                                                                                                            setName('');
                                                                                                                                                  setEmail('');
                                                                                                                                                      } catch (err) {
                                                                                                                                                            // 3. Catch block error handling
                                                                                                                                                                  setStatus('error');
                                                                                                                                                                        setError(err.message);
                                                                                                                                                                            }
                                                                                                                                                                              };

                                                                                                                                                                                // 4. Form Reset
                                                                                                                                                                                  const resetForm = () => {
                                                                                                                                                                                      setName('');
                                                                                                                                                                                          setEmail('');
                                                                                                                                                                                              setStatus('idle');
                                                                                                                                                                                                  setError(null);
                                                                                                                                                                                                    };

                                                                                                                                                                                                      if (status === 'success') {
                                                                                                                                                                                                          return (
                                                                                                                                                                                                                <div className="success-message">