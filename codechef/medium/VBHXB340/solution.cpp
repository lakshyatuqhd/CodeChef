                                                                                          if (!ok) return;

                                                                                              try {
                                                                                                    await API.delete(`/blogs/${id}`);
                                                                                                          setBlogs((prev) => prev.filter((b) => b._id !== id));
                                                                                                              } catch (err) {
                                                                                                                    console.error(err);
                                                                                                                          alert('Delete failed');
                                                                                                                              }
                                                                                                                                };

                                                                                                                                  if (loading) return <div className="container"><p>Loading...</p></div>;

                                                                                                                                    return (
                                                                                                                                        <div className="container">
                                                                                                                                              <h1>My Blogs</h1>
                                                                                                                                                    {blogs.length === 0 ? (
                                                                                                                                                            <p>No blogs found</p>
                                                                                                                                                                  ) : (
                                                                                                                                                                          blogs.map((blog) => (
                                                                                                                                                                                    <BlogCard key={blog._id} blog={blog} onDelete={handleDelete} />
                                                                                                                                                                                            ))
                                                                                                                                                                                                  )}
                                                                                                                                                                                                      </div>
                                                                                                                                                                                                        );
                                                                                                                                                                                                        };

                                                                                                                                                                                                        export default MyBlogs;