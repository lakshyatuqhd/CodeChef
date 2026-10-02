# OJJAR171

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Task - E-Commerce Product Listing Components

In this task, we’ll create a product listing page for an e-commerce site using React’s component spectrum.

Update the existing components to:

- Fix the reusable Button component
- Complete the medium-reusable ProductItem card
- Implement the product grid in ProductListingPage (CSS is already provided - focus on functionality and structure)
#### Your Task:

 **Step 1: Complete the `Button` Component (Button.jsx)** 

- Add the text between the button tags

 **Step 2: Complete `ProductItem` Component (ProductItem.jsx)** 

- Add product image (<img>) with: src={product.image} alt={product.title}
- Display product title in <h3>
- Show star rating using renderStars(product.rating)
- Display price in <p className="price">
- Add Button with: Text: "Add to Cart" Click handler: () => alert(Added ${product.title} to cart)

 **Step 3: Implement Product Grid (ProductListingPage.jsx)** 
Update the container  **`className="products-grid"`**  to map through the  **`products`**  array:

- Return a <ProductItem> for each product.
- Pass the product as a prop.
- Add a proper key.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-02T14:38:33.215Z  

```cpp
},
{
id:2,
title:'Product 2',
price:39.99,
image:'https://via.placeholder.com/150'
},
{
id:3,
title:'Product 3',
price:49.99,
image:'https://via.placeholder.com/150'
}
];

return(
<div>
<h2>Featured Products</h2>
<div>
{productList.map(product=>(
<ProductItem key={product.id} product={product}/>
))}
</div>
image:'https://via.placeholder.com/150'
price:29.99,
title:'Product 1',
id:1,
{
const productList=products||[
function ProductListingPage({products}){

import ProductItem from './ProductItem';
import React from 'react';
```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR171)