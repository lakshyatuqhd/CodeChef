      id: 2,
      title: "Smart Watch",
      price: 199.99,
      rating: 5,
      image: "https://cdn.codechef.com/images/problems/PREACT075/1a458df9d6e719494c83fb7844c7fe33.jpg"
    },
    {
      id: 3,
      title: "Bluetooth Speaker",
      price: 79.99,
      rating: 3,
      image: "https://cdn.codechef.com/images/problems/PREACT075/59cfeeef191297272624b92a0fa5afe1.jpg"
    }
  ];

  return (
    <div className="product-listing">
      <h1>Featured Products</h1>
      <div className="products-grid">
        {products.map(product => (
          <ProductItem key={product.id} product={product} />
        ))}
      </div>
    </div>
  );
}

export default ProductListingPage;