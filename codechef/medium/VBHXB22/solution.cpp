function fetchWeather(city) {
    return new Promise((resolve, reject) => {
      setTimeout(() => {
        const success = Math.random() > 0.5;
        if (success) {
          resolve({ city, temp: "30°C", condition: "Sunny" });
        } else {
          reject(`Error: Could not fetch weather for ${city}`);
        }
      }, 50);
    });
  }
  
  async function getWeatherAsync(city) {
      // Using async/await
   try {
    const result = await fetchWeather(city);
    console.log("Async/Await:",result);
} catch (error) {
  console.log("Async/Await Error:", error);
}
      

  }
  
  function getWeatherPromise(city) {
      // Using .then()/.catch()
    fetchWeather(city)
    .then(result => {
      console.log("promise:",result);
    })
    .catch(error => {
      console.log("promise Error:",error);