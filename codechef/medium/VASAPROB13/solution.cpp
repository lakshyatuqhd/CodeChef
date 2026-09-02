db = connect('mongodb://localhost:27017/tech_db');

db.inventory.insertMany([
    { name: "Pro-Book", category: "Laptop", price: 55000 },
    { name: "Budget-Tab", category: "Tablet", price: 15000 },
    { name: "Air-Tab", category: "Tablet", price: 45000 },
    { name: "Smart-Watch", category: "Wearable", price: 20000 }
]);

const highEndEssentials = db.inventory.find({
    category: { $in: ["Laptop", "Tablet"] },
    price: { $gt: 40000 }
}).toArray();

print("--- Marketing Team: High-End Essentials ---");
printjson(highEndEssentials);