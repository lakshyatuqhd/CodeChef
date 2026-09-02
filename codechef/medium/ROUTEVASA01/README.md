# ROUTEVASA01

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Build Your Own Mini Netflix Navigator

Imagine you are building a mini version of Netflix called FunFlix. But here’s the catch: instead of showing everything on one page, you want users to browse different pages smoothly without refreshing the browser.\

 **Your task is to set up browser routing so users can move around the app like this:** 

- Home component should be rendered when / endpoint is hit.
- Movies component should be rendered when /movies endpoint is hit.
- Series component should be rendered when /series endpoint is hit.
- About component should be rendered when /about endpoint is hit.
- Also complete internal css in Home.jsx(Centering a div using flexbox)

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-02T06:50:27.894Z  

```cpp
function Home() {
  return (
    <>
      <style>
        {`
          .home {
            display: flex;
            justify-content: center;
            align-items: center;
            height: 100vh;
          }
        `}
      </style>
      <div className="home">
        <div>
          <h1>Welcome to FunFlix 🍿</h1>
          <p>Your gateway to unlimited fun!</p>
        </div>
      </div>
    </>
  )
}
export default Home
```

---

[View on CodeChef](https://www.codechef.com/problems/ROUTEVASA01)