function Tabs({ activeTabIndex = 0, onPrevious, onNext, onTabClick }) {
  const totalTabs = 3;
    const isFirstTab = activeTabIndex === 0;
      const isLastTab = activeTabIndex === totalTabs - 1;

        return (
            <div className="tabs-container">
                  {/* Tab Headers */}
                        <div className="tab-headers">
                                <button
                                          className={`tab-header ${activeTabIndex === 0 ? 'active' : ''}`}
                                                    onClick={() => onTabClick && onTabClick(0)}
                                                            >
                                                                      1. Personal Info
                                                                              </button>
                                                                                      <button
                                                                                                className={`tab-header ${activeTabIndex === 1 ? 'active' : ''}`}
                                                                                                          onClick={() => onTabClick && onTabClick(1)}
                                                                                                                  >
                                                                                                                            2. Experience
                                                                                                                                    </button>
                                                                                                                                            <button
                                                                                                                                                      className={`tab-header ${activeTabIndex === 2 ? 'active' : ''}`}
                                                                                                                                                                onClick={() => onTabClick && onTabClick(2)}
                                                                                                                                                                        >
                                                                                                                                                                                  3. Review
                                                                                                                                                                                          </button>
                                                                                                                                                                                                </div>
import React from 'react';
