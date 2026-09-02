// index.js (user’s solution)
db = connect("mongodb://localhost:27017/test");

db.products.drop();
db.filteredProducts.drop();

db.products.insertMany([
  { name: "Laptop",     category: "Electronics", price: 800,  inStock: true },
  { name: "Phone",      category: "Electronics", price: 500,  inStock: false },
  { name: "Book",       category: "Education",   price: 20,   inStock: true },
  { name: "Headphones", category: "Electronics", price: 100,  inStock: true },
  { name: "Pen",        category: "Stationery",  price: 5,    inStock: true }
]);

const result = db.products.aggregate([
  { $match: { category: "Electronics", inStock: true, price: { $gt: 100 } } }
]).toArray();

db.filteredProducts.insertMany(result);

printjson(db.filteredProducts.find().toArray());