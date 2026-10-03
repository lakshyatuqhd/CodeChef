# OJJAR229

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Live crypto update

Your task is to build a  **Crypto Price Dashboard**  in React that  **fetches and displays prices of cryptocurrencies**  every 5 seconds. The dashboard should update automatically without requiring a page refresh.

You are provided with a mock API function `fetchCryptoPrices()` that returns an array of objects like this:

```
[
  { name: "Bitcoin", price: 58321 },
  { name: "Ethereum", price: 3122 },
  { name: "Solana", price: 128 }
]

```

- You need to implement the logic to poll this API every 5 seconds using useEffect and setInterval.
- Don't forget to checkout data.js.

 **Requirements** 

- Use useEffect to run polling logic.
- Use setInterval to call the API every 5 seconds.
- Display the latest list of coins and prices in a table or list format.
- Clear the interval on component unmount to avoid memory leaks.
- UI should update without any manual interaction.

 **Example Output** 

 **Helpful Resources** 

- React useEffect Documentation
- MDN setInterval
- React useState Documentation
- Cleaning up in useEffect

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-03T06:54:59.520Z  

```cpp
                                  return () => clearInterval(intervalId);
                                    }, []);

                                      return (
                                          <div>
                                                <h1>📈 Crypto Dashboard</h1>
                                                      <p>Updates every 5 seconds...</p>
                                                            <table>
                                                                    <thead>
                                                                              <tr>
                                                                                          <th>Name</th>
                                                                                                      <th>Price</th>
                                                                                                                </tr>
                                                                                                                        </thead>
                                                                                                                                <tbody>
                                                                                                                                          {prices.map((crypto, index) => (
                                                                                                                                                      <tr key={index}>
                                                                                                                                                                    <td>{crypto.name}</td>
                                                                                                                                                                                  <td>{crypto.price}</td>
                                                                                                                                                                                              </tr>
                                                                                                                                                                                                        ))}
                                                                                                                                                                                                                </tbody>
                                                                                                                                                                                                                      </table>
                                                                                                                                                                                                                          </div>
                                                                                                                                                                                                                            );
                                                                                                                                                                                                                            }

                                                                                                                                                                                                                            export default App;
```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR229)