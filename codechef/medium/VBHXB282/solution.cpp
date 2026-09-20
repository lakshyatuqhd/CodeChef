
module.exports = app;  // export app (NOT listen)
  });
});

    redisClient.set("cachedGreeting", freshValue);
    res.send(freshValue);
    }
    const freshValue = `Fresh at ${Date.now()}`;
      return res.send(`From cache: ${cachedValue}`);
  redisClient.get("cachedGreeting", (err, cachedValue) => {
    if (cachedValue) {
// --- With cache route ---
app.get("/with-cache", (req, res) => {

});
  res.send(freshValue);
  const freshValue = `Fresh at ${Date.now()}`;
app.get("/without-cache", (req, res) => {
// --- Without cache route ---

app.use(express.json());

const redisClient = redisMock.createClient();
const app = express();

const express = require("express");
const redisMock = require("redis-mock");