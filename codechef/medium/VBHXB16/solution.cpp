                                                                                                                                                                                                                                              .catch((error) => {
                                                                                                                                                                                                                                      console.log(iceCreamWithToppings);
                                                                                                                                                                                                                                          })
                                                                                                                                                                                                                          })
                                                                                                                                                                                                                              .then((iceCreamWithToppings) => {
                                                                                                                                                                                                              console.log(frozenIceCream);
                                                                                                                                                                                                                      return addToppings(frozenIceCream);
                                                                                                                                                                                                  })
                                                                                                                                                                                                      .then((frozenIceCream) => {
                                                                                                                                                                                      console.log(mixedIngredients);
                                                                                                                                                                                              return freezeMixture(mixedIngredients);
                                                                                                                                                                          })
                                                                                                                                                                              .then((mixedIngredients) => {
                                                                                                                                                                      return mixIngredients(ingredients);
                                                                                                                                                      .then((ingredients) => {
                                                                                                                                                              console.log(ingredients);
                                                                                                                                                  getIngredients()

                                                                                                                                                  console.log("Ice cream making in progress...");

                                                                                                                                                  }
                                                                                                                                                  });
                                                                                                                                              }, 500);
                                                                                                                                      resolve("Ice cream with toppings: " + frozenIceCream);
                                                                                                                                                                                                                                                      console.log(error);
                                                                                                                                                                                                                                                          });
