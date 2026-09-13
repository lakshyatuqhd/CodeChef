const http = require('http');

const server = http.createServer((req, res) => {
    res.writeHead(200, { 'Content-Type': 'text/html' });

        res.write(`
        <!DOCTYPE html>
        <html>
        <head>
            <title>My First Webpage</title>
            </head>
            <body>
                <h1>My First Webpage</h1>
                    <p>This is a simple webpage served from Node.js</p>
                    </body>
                    </html>
                        `);

                            res.end();
                            });

                            server.listen(3000, () => {
                                console.log('Server is running at http://localhost:3000');
                                });
