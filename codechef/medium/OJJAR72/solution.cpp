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