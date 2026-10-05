                                                                                                    fetchMyBlogs();
                                                                                                      }, []);

                                                                                                        if (loading) return <div className="container"><p>Loading...</p></div>;
                                                                                                          if (error) return <div className="container"><p>{error}</p></div>;

                                                                                                            return (
                                                                                                                <div className="container">
                                                                                                                      <h1>My Blogs</h1>
                                                                                                                            <p>This page will show only the blogs you have created.</p>
                                                                                                                                  
                                                                                                                                        {blogs.length === 0 ? (
                                                                                                                                                <p>No blogs found. Create one!</p>
                                                                                                                                                      ) : (
                                                                                                                                                              <div className="blogs-grid">
                                                                                                                                                                        {blogs.map((blog) => (
                                                                                                                                                                                    <div key={blog._id} className="blog-card">
                                                                                                                                                                                                  <h3>{blog.title}</h3>
                                                                                                                                                                                                                <p>{blog.content}</p>
                                                                                                                                                                                                                            </div>
                                                                                                                                                                                                                                      ))}
                                                                                                                                                                                                                                              </div>
                                                                                                                                                                                                                                                    )}
                                                                                                                                                                                                                                                        </div>
                                                                                                                                                                                                                                                          );
                                                                                                                                                                                                                                                          };

                                                                                                                                                                                                                                                          export default MyBlogs;