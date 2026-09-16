export function WelcomeMessage({ isLoggedIn, isPremiumUser }) {
    return (
        <div>
              <h1>My React App</h1>
                    {isLoggedIn && isPremiumUser && <p>Welcome to Premium Content!</p>}
                          {(!isLoggedIn || !isPremiumUser) && <p>Please log in and upgrade to premium...</p>}
                              </div>
                                );
                                }

                                // App component: Manages state and renders the WelcomeMessage component
                                export default function App() {
                                  const isLoggedIn = true; // Change these values to test different scenarios
                                    const isPremiumUser = false; // Change these values to test different scenarios

                                      return (
                                          <WelcomeMessage isLoggedIn={isLoggedIn} isPremiumUser={isPremiumUser} />
                                            );
                                            }
