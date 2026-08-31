# OJJAR65

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Props in React

We have already created a greeting card in the last lesson! Now, we will use  **components and props**  to make the solution more efficient and reusable.

#### Your Task:
- Create a reusable component <GreetingCard /> that takes name, age, and greeting as props.
- Use instances of <GreetingCard /> inside the App component with values for name, age, and greeting.
- Make sure not change the messages.

 **Note - Make sure to take the** `styles` **and** `jsx` **from the App component.** 
Once you're done, submit your solution and check it's correct not.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-31T10:42:46.752Z  

```cpp

  }; 
      textAlign: "center",
      boxShadow: "2px 2px 10px rgba(0,0,0,0.1)"
      borderRadius: "10px", 
      width: "250px",
      padding: "20px", 
  const headingStyle = {
      color: "blue",
      fontSize: "20px"
  };

  return (  
      <div >
      </div>  
  );  
}

        <GreetingCard card={cardStyle} head={headingStyle} name={name} age={age} greeting={greeting}></</GreetingCard>
export default App;
```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR65)