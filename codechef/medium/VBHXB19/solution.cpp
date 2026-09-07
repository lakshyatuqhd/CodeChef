}

function addFilling() {
  return new Promise(resolve => {
    setTimeout(() => {
      resolve("Filling added!");
    }, 2000); // Simulate adding filling for 2 seconds
  });
}

function wrapSandwich() {
  return new Promise(resolve => {
    setTimeout(() => {
      resolve("Sandwich wrapped!");
    }, 500); // Simulate wrapping for 0.5 seconds
  });
}

async function prepareSandwich() {
   const bread = await prepareBread() 

    const filling = await addFilling();
   } 

    const sandwich = await wrapSandwich();
    return "Sandwich is ready to eat!";
   console.log(bread);
    console.log(filling);
    console.log(sandwich);
prepareSandwich().then(result => console.log(result));