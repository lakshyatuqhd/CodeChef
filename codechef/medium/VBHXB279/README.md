# VBHXB279

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Typescript- Practice

Now let’s build a small Express API to store and retrieve users’ favorite colors. This practice problem is designed to help you  **convert a JavaScript Express app to TypeScript**  and use type annotations for safety.

 **Instructions** 

- Convert the code to TypeScript: We have used.ts extension. Use import type { Request, Response } from "express"; for type annotations.
- Add proper type annotations for: Route handlers: (req: Request, res: Response) => {... } In-memory storage object: { [key: string]: string }
- Expected behaviors: POST /color stores a user’s favorite color. GET /color/:name retrieves the stored color. Proper error handling for missing input.

 **Expected Output**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-21T10:31:16.075Z  

```cpp
  } else {
    res.send(`Color for ${name} not found`);
  }
});

// Only start the server if this file is run directly
if (require.main === module) {
  app.listen(port, () => {
    console.log(`Server running at http://localhost:${port}`);
  });
}

export default app;

```

---

[View on CodeChef](https://www.codechef.com/problems/VBHXB279)