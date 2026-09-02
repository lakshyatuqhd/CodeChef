  { $sort: { price: -1, rating: -1 } }
]);

// Convert cursor to array
var sortedArray = cursor.toArray();

// Print result
printjson(sortedArray);

// Insert only if not empty
if (sortedArray.length > 0) {
  db.sortedProducts.insertMany(sortedArray);
} else {
  print("⚠️ No documents found to insert!");
}
