      {/* Product price displayed in paragraph */}
      <p>Price: ${props.product.price}</p>
      
      {/* Button that triggers the alert */}
      <button onClick={handleClick}>Select</button>
    </div>
  );
}

function App() {
  return (
    <div className="container">
      <h1>Product List</h1>
      <div className="product-list">
        {/* Create product cards for all products */}
        {products.map((product) => (
          // Important: Add unique key prop for each product
          <ProductCard 
            key={product.id} 
            product={product} 
          />
        ))}
      </div>
    </div>
  );
}

export default App;