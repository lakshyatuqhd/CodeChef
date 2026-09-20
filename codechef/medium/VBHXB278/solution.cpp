import type { Request, Response } from "express";
const express = require("express");

const app = express();
const port = 8080;

app.use(express.json());

app.get("/", (req: Request, res: Response) => {
  res.send("Hello from Express + TypeScript!");
});

app.post("/greet", (req: Request, res: Response) => {
  const { name } = req.body;
  res.send(`Hello, ${name || "stranger"}!`);
});


if (require.main === module) {
  app.listen(port, () => {
    console.log(`Server running at http://localhost:${port}`);
  });
}

module.exports = app;
