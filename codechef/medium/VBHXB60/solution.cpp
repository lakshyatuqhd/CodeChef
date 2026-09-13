const http = require('http');

const USERNAME = 'Harry';

const server = http.createServer((req,res) => {
    let greeting;

        if (typeof USERNAME === 'string' && USERNAME.trim() !== '') {
                greeting = `Hello, ${USERNAME.trim()}!`;
                    } else {
                            greeting = 'Hello, Guest!';
                                }

                                    res.writeHead(200, {'Content-Type':'text/plain'});
                                        res.write(greeting);
                                            res.end();
                                            });

                                            server.listen(3000);
