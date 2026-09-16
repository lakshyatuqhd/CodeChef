# OJJAR117

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### File Structure with Basic Tabs

Your goal is to set up the initial file structure and render a very basic placeholder for the tabs system, using the class names from the `App.css` file we already have.

- Basic App.jsx: The App function should return a div with the className="App". Inside that div, add an <h1> with the text "Job Application Form". Below the <h1>, render the <Tabs /> component.
- Basic Tabs.jsx: It should return a main div with className="tabs-container". Inside tabs-container, add the following structure: A div with className="tab-headers". Put a placeholder <span> inside like "Tab 1 Header". A div with className="tab-content". Put a placeholder <p> inside like "Tab Content Will Appear Here". A div with className="tab-navigation". Put two placeholder <button> elements inside, one with the text "Previous" and one with "Next".

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-16T07:21:36.525Z  

```cpp
import React from 'react';

function Tabs() {
  return (
      <div className="tabs-container">
            <div className="tab-headers">
                    <span>Tab 1 Header</span>
                          </div>
                                <div className="tab-content">
                                        <p>Tab Content Will Appear Here</p>
                                              </div>
                                                    <div className="tab-navigation">
                                                            <button>Previous</button>
                                                                    <button>Next</button>
                                                                          </div>
                                                                              </div>
                                                                                );
                                                                                }

                                                                                export default Tabs;
```

---

[View on CodeChef](https://www.codechef.com/problems/OJJAR117)