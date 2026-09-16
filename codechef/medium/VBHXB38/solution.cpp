function coffeeShopQueue() {
      console.log("1. Customer enters the shop");

          process.nextTick(() => {
                  console.log("2. Barista takes the order (nextTick)");
                      });

                          Promise.resolve().then(() => {
                                  console.log("3. Payment confirmed (Promise)");
                                      });

                                          setImmediate(() => {
                                                  console.log("5. Notify customer (Immediate)");

                                                          setTimeout(() => {
                                                                      console.log("4. Coffee ready after 0ms (Timeout)");
                                                                              }, 0);
                                                                                  });

                                                                                      console.log("6. Customer waits");
                                                                                      }

                                                                                      module.exports = { coffeeShopQueue };

                                                                                      if (require.main === module) {
                                                                                          coffeeShopQueue();
                                                                                          }
