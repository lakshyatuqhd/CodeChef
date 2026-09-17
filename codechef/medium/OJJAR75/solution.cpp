                for (let i = start; i < end; i += step) {
                    result.push(i);
                      }

                        return result;
                        };

                        // update this function
                        function NumberBoxes({ count }) {
                          return (
                              <ul>
                                    {range(1, count + 1).map((num) => (
                                            <li key={num}>{num}</li>
                                                  ))}
                                                      </ul>
                                                        );
                                                        }

                                                        export default function App() {
                                                          return (
                                                              <div>
                                                                    <NumberBoxes count={5} />
                                                                        </div>
                                                                          );
                                                                          }