                    return "Good morning!";
                        } else if (hour >= 12 && hour < 18) {
                                return "Good afternoon!";
                                    } else {
                                            return "Good evening!";
                                                }
                                                }

                                                const server = http.createServer((req, res) => {
                                                    res.writeHead(200, { 'Content-Type': 'text/plain' });
                                                        res.end(getGreeting());
                                                        });

                                                        server.listen(3000);

                                                        module.exports = server;