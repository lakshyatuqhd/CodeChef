# OJJAR72

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Conditional Rendering
#### if Statement in React

In React, conditional rendering helps us decide what to display based on certain conditions. Using the `if` statement, we can control which components appear in the UI.

#### Example: Using if in a Component

Here’s a simple example that checks if a user is logged in and displays different messages accordingly.

```
function WelcomeMessage ({ isLoggedIn }){
  if (isLoggedIn) {
    return <h2>Welcome back, User! 🎉</h2>;
  } else {
    return <h2>Please log in to continue.</h2>;
  }
};

function App() {
  const userLoggedIn = true; // Change to false to see the other message
  
  return (
    <div>
      <WelcomeMessage isLoggedIn={userLoggedIn} />
    </div>
 );
}

```

 **Here you can change the `userLoggedIn`(`false`→`true`) value and see the result accordingly.** 

#### Task:

Show Discount Message Based on User Membership

Update a component named `DiscountMessage` that checks if a user is a premium member and displays:

- "You get a 20% discount!" if they are a premium member.
- "Sign up for premium to unlock discounts!" if they are not.

Now based on the `isPremiumMember` value, the appropriate message will be displayed! 🚀

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-16T10:08:30.397Z  

```cpp
// Export a function component named DiscountMessage that takes a prop 'isPremiumMember'
export function DiscountMessage({ isPremiumMember }) {
  // If the user is a premium member, show the discount message
    if (isPremiumMember) {
        return <p>You get a 20% discount!</p>;
          }

            // If the user is not a premium member, show a message encouraging them to sign up
              return <p>Sign up for premium to unlock discounts!</p>;
              }

              function App() {
                const isPremiumMember = true;

                  return (
                      <div>
                            <DiscountMessage isPremiumMember={isPremiumMember} />
                                </div>
                                  );
                                  }

                                  export default App; // Export the App component as default
```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR72)