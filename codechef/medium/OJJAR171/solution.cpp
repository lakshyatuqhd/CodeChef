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