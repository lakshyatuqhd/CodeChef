app.get("/api/v1/products", (req, res) => {
res.json({ version: "v1", products: ["Apple", "Banana"] });
});

app.get("/api/v2/products", (req, res) => {
res.json({ version: "v2", products: ["Laptop", "Phone"] });
});

// Query Parameter Versioning
app.get("/api/products", (req, res) => {
const version = req.query.version || "1";
res.json({ version: `v${version}`, products: [`Product from Query v${version}`] });
});

// Header Versioning
app.get("/api/products-header", (req, res) => {
const version = req.headers["api-version"] || "1";
res.json({ version: `v${version}`, products: [`Product from Header v${version}`] });
});

export default app;
// URL Versioning

const app = express();

import express from "express";