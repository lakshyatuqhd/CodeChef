}
res.send(`Stored key: ${key} with value: ${value}`);
});
});

app.get("/retrieve/:key", (req, res) => {
const { key } = req.params;
redisClient.get(key, (err, value) => {
if (err) {
return res.status(500).send("Error retrieving value");
return res.status(500).send("Error storing value");
redisClient.on("error", (err) => {
console.error("Redis Client Error", err);
});

app.post("/store", (req, res) => {
const { key, value } = req.body;
redisClient.set(key, value, (err) => {
if (err) {
const port = 8080;

app.use(bodyParser.json());

const redisClient = redis.createClient();


const app = express();
const bodyParser = require("body-parser");
const redis = require("redis-mock");
const express = require("express");