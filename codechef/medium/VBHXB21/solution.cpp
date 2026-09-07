      .catch(error => {
        console.error("Promise → Error fetching user data:", error);
      });
        console.log("Promise → User data:", userData);
      })
    fetchUserData()
      .then(userData => {
  // Promise .then/.catch version
  function getUserDataPromise() {
  }
  
    }
    } catch (error) {
      console.error("Async/Await → Error fetching user data:", error);
      console.log("Async/Await → User data:", userData);
      const userData = await fetchUserData();
  async function getUserDataAsyncAwait() {
    try {
  // Async/Await version
  
  }
    });
      }, 50);
        }
          reject("Failed to fetch user data.");
        } else {
          resolve({ id: 123, name: "John Doe" });
        if (success) {
        const success = Math.random() > 0.5;
      setTimeout(() => {
    return new Promise((resolve, reject) => {
async function fetchUserData() {
// Simulated API function