# VBHXB342

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Integrating Blog Feed on the Home Page

Complete the blogging application by implementing the display of all blog posts from the backend on the Home Page, replacing existing dummy data.

 **Objective:** 
To dynamically fetch and render actual blog posts from the backend on the Home Page, providing a live and up-to-date feed of all available blogs.

 **Context:** 
All other core features of the blogging application (user authentication, protected routes, blog creation, deletion, and user-specific blog management) are already successfully implemented.

#### Tasks:

 **Part 1: Backend – Add All Blogs Route** 

- GET /api/blogs: In backend/routes/blogs.js, create a new GET route at /api/blogs. This route should query the database to retrieve all blog posts. Ensure that the author field is populated, specifically selecting the username to be sent to the frontend (e.g., populate('author', 'username')). Sort the retrieved blogs in descending order by their creation date (newest first).

 **Part 2: Frontend – Fetch Blogs in Home Page** 

- Remove Dummy Data: In frontend/src/pages/Home.jsx, remove the dummy initialBlogsData.
- Fetch Blogs: Utilize a useEffect hook to call API.get('/blogs') and fetch blog data from the backend when the component mounts. Store the fetched blogs in the component's state using setBlogs.
- Loading and Empty State: Display a "Loading..." message while the blog data is being fetched. If no blogs are returned from the backend, display the message: "No blogs available yet. Be the first to create one!"
- Render Blogs: If blogs are successfully fetched, iterate over the blogs state and render each blog using the <BlogCard /> component.

 **Outcome:** 
Upon completion, the Home Page will dynamically display real blog posts from the database, sorted by the newest first, with author information and creation dates.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-05T13:58:11.795Z  

```cpp
                                                            } finally {
                                                                    setLoading(false);
                                                                          }
                                                                              };
                                                                                  fetchBlogs();
                                                                                    }, []);

                                                                                      if (loading) {
                                                                                          return <div className="container"><p>Loading blogs...</p></div>;
                                                                                            }

                                                                                              return (
                                                                                                  <div className="container">
```

---

[View on CodeChef](https://www.codechef.com/problems/VBHXB342)