                                  return () => clearInterval(intervalId);
                                    }, []);

                                      return (
                                          <div>
                                                <h1>📈 Crypto Dashboard</h1>
                                                      <p>Updates every 5 seconds...</p>
                                                            <table>
                                                                    <thead>
                                                                              <tr>
                                                                                          <th>Name</th>
                                                                                                      <th>Price</th>
                                                                                                                </tr>
                                                                                                                        </thead>
                                                                                                                                <tbody>
                                                                                                                                          {prices.map((crypto, index) => (
                                                                                                                                                      <tr key={index}>
                                                                                                                                                                    <td>{crypto.name}</td>
                                                                                                                                                                                  <td>{crypto.price}</td>
                                                                                                                                                                                              </tr>
                                                                                                                                                                                                        ))}
                                                                                                                                                                                                                </tbody>
                                                                                                                                                                                                                      </table>
                                                                                                                                                                                                                          </div>
                                                                                                                                                                                                                            );
                                                                                                                                                                                                                            }

                                                                                                                                                                                                                            export default App;