      res.writeHead(200, { 'Content-Type': 'text/plain' });
          res.end('Welcome to the server!');
            } else if (req.url === '/image') {
                // Construct the path to the image inside the public directory
                    const imagePath = path.join(__dirname, 'public', 'nodejs.png');

                        fs.readFile(imagePath, (err, data) => {
                              if (err) {
                                      res.writeHead(500, { 'Content-Type': 'text/plain' });
                                              res.end('Internal Server Error');
                                                    } else {
                                                            res.writeHead(200, { 'Content-Type': 'image/png' });
                                                                    res.end(data);
                                                                          }
                                                                              });
                                                                                } else {
                                                                                    res.writeHead(404, { 'Content-Type': 'text/plain' });
                                                                                        res.end('Not Found');
                                                                                          }
                                                                                          });

                                                                                          const port = 3000;
                                                                                          server.listen(port, () => {
                                                                                            console.log(`Server listening on port ${port}`);
const server = http.createServer((req, res) => {
  if (req.url === '/') {

const path = require('path');
const fs = require('fs');
const http = require('http');