# FYAOAZ08

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Display Personalized Greeting

Let's create a simple application that displays a personalized greeting to the user based on their name and the current day of the week. This will reinforce how to pass data to views in Express using EJS.

We'll build upon the basic Express setup we've learned previously. We'll create a route that takes the current day and a user's name as data, passes it to an EJS template, and then displays a greeting like "Hello, [Name]! Happy [Day]!".

Here's how we'll break it down:

- Create a route handler: We'll define a route (e.g., /) that will handle requests to display the greeting.
- Prepare the data: Inside the route handler, we'll create an object containing the user's name and the current day of the week. For simplicity, we'll hardcode these values for now.
- Pass the data to the view: We'll use res.render() to render an EJS template, passing the data object as the second argument.
- Create the EJS template: We'll create an EJS file (e.g., greeting.ejs) in the views directory that will display the personalized greeting using the data we passed.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-16T05:53:03.974Z  

```cpp
<!DOCTYPE html>
<html>
<head>
  <title>Personalized Greeting</title>
</head>
<body>
  <h1>Hello, <%= name %>!</h1>
  <p>Happy <%= dayOfWeek %>!</p>
</body>
</html>

```

---

[View on CodeChef](https://www.codechef.com/problems/FYAOAZ08)