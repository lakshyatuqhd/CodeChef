                                                                                                                                                                                      </div>
                                                                                                                                                                </div>
                                                                                                                                                                        )}
                                                                                                                                                                                {/* Render other tab content conditionals here */}
                                                                                                                                          <h2>Personal Information</h2>
                                                                                                                                                      <p>Content for the personal info tab goes here.</p>
                                                                                                                    {activeTabIndex === 0 && (
                                                                                                                              <div>

                                                                                                            <div className="tab-content">
                                                                                                </button>
                                                                                                      </div>
                                                                                        Review
                                                                      </button>
                                                                              <button className={`tab-header ${activeTabIndex === 2 ? 'active' : ''}`}>
                                                              Experience
                                                    <button className={`tab-header ${activeTabIndex === 1 ? 'active' : ''}`}>
                                            </button>
                                    Personal Info
                          <button className={`tab-header ${activeTabIndex === 0 ? 'active' : ''}`}>
                  <div className="tab-headers">
            <div className="tabs-container">
        return (

      const isLastTab = activeTabIndex === tabsCount - 1;
    const isFirstTab = activeTabIndex === 0;
  // Check if current tab is first or last
function Tabs({ activeTabIndex = 0, onTabChange, tabsCount = 3 }) {

import React from 'react';