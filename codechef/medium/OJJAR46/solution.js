const cartPrices = [29.99, 9.99, 4.99, 14.99, 25.00];
const totalPrice = cartPrices.reduce((total, price) => total + price,0);
// complete the code 
// Using reduce to calculate the total price
console.log(totalPrice );